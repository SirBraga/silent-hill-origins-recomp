#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00261F38
// Address: 0x261f38 - 0x262460
void sub_00261F38_0x261f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261F38_0x261f38");
#endif

    switch (ctx->pc) {
        case 0x2621e4u: goto label_2621e4;
        default: break;
    }

    ctx->pc = 0x261f38u;

    // 0x261f38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x261f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x261f3c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x261f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x261f40: 0x8c6341c0  lw          $v1, 0x41C0($v1)
    ctx->pc = 0x261f40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B41C0u));
    // 0x261f44: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x261f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x261f48: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x261f48u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261f4c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x261f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x261f50: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x261f50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261f54: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x261f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x261f58: 0x26530018  addiu       $s3, $s2, 0x18
    ctx->pc = 0x261f58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x261f5c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x261f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x261f60: 0x2c62007c  sltiu       $v0, $v1, 0x7C
    ctx->pc = 0x261f60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)124) ? 1 : 0);
    // 0x261f64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x261f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x261f68: 0x92510001  lbu         $s1, 0x1($s2)
    ctx->pc = 0x261f68u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x261f6c: 0x10400135  beqz        $v0, . + 4 + (0x135 << 2)
    ctx->pc = 0x261F6Cu;
    {
        const bool branch_taken_0x261f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F6Cu;
        // 0x261f70: 0x8e590004  lw          $t9, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f6c) {
            ctx->pc = 0x262444u;
            goto label_262444;
        }
    }
    ctx->pc = 0x261F74u;
    // 0x261f74: 0x14600097  bnez        $v1, . + 4 + (0x97 << 2)
    ctx->pc = 0x261F74u;
    {
        const bool branch_taken_0x261f74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x261f74) {
            ctx->pc = 0x2621D4u;
            goto label_2621d4;
        }
    }
    ctx->pc = 0x261F7Cu;
    // 0x261f7c: 0x1300004d  beqz        $t8, . + 4 + (0x4D << 2)
    ctx->pc = 0x261F7Cu;
    {
        const bool branch_taken_0x261f7c = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x261F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F7Cu;
        // 0x261f80: 0x8f82914c  lw          $v0, -0x6EB4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938956)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f7c) {
            ctx->pc = 0x2620B4u;
            goto label_2620b4;
        }
    }
    ctx->pc = 0x261F84u;
    // 0x261f84: 0xc7000000  lwc1        $f0, 0x0($t8)
    ctx->pc = 0x261f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261f88: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x261f88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x261f8c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x261f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x261f90: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x261f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x261f94: 0xac2241bc  sw          $v0, 0x41BC($at)
    ctx->pc = 0x261f94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x261f98: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x261f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x261f9c: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x261f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x261fa0: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x261fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x261fa4: 0xc7000004  lwc1        $f0, 0x4($t8)
    ctx->pc = 0x261fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261fa8: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x261fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x261fac: 0x24470014  addiu       $a3, $v0, 0x14
    ctx->pc = 0x261facu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x261fb0: 0x24480018  addiu       $t0, $v0, 0x18
    ctx->pc = 0x261fb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x261fb4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x261fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x261fb8: 0x2449001c  addiu       $t1, $v0, 0x1C
    ctx->pc = 0x261fb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x261fbc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x261fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x261fc0: 0xac2341bc  sw          $v1, 0x41BC($at)
    ctx->pc = 0x261fc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x261fc4: 0x244a0020  addiu       $t2, $v0, 0x20
    ctx->pc = 0x261fc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x261fc8: 0x24430024  addiu       $v1, $v0, 0x24
    ctx->pc = 0x261fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x261fcc: 0x244b0028  addiu       $t3, $v0, 0x28
    ctx->pc = 0x261fccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x261fd0: 0xc7000008  lwc1        $f0, 0x8($t8)
    ctx->pc = 0x261fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261fd4: 0x244c002c  addiu       $t4, $v0, 0x2C
    ctx->pc = 0x261fd4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x261fd8: 0x244d0030  addiu       $t5, $v0, 0x30
    ctx->pc = 0x261fd8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x261fdc: 0x244e0034  addiu       $t6, $v0, 0x34
    ctx->pc = 0x261fdcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x261fe0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x261fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x261fe4: 0x244f0038  addiu       $t7, $v0, 0x38
    ctx->pc = 0x261fe4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x261fe8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x261fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x261fec: 0xac2441bc  sw          $a0, 0x41BC($at)
    ctx->pc = 0x261fecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x261ff0: 0x2450003c  addiu       $s0, $v0, 0x3C
    ctx->pc = 0x261ff0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x261ff4: 0xe44c0008  swc1        $f12, 0x8($v0)
    ctx->pc = 0x261ff4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x261ff8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x261ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x261ffc: 0xac2541bc  sw          $a1, 0x41BC($at)
    ctx->pc = 0x261ffcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x262000: 0xc7000010  lwc1        $f0, 0x10($t8)
    ctx->pc = 0x262000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262004: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x262004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x262008: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x262008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26200c: 0xac2641bc  sw          $a2, 0x41BC($at)
    ctx->pc = 0x26200cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x262010: 0xc7000014  lwc1        $f0, 0x14($t8)
    ctx->pc = 0x262010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262014: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x262014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x262018: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x262018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26201c: 0xac2741bc  sw          $a3, 0x41BC($at)
    ctx->pc = 0x26201cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x262020: 0xc7000018  lwc1        $f0, 0x18($t8)
    ctx->pc = 0x262020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262024: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x262024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x262028: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x262028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26202c: 0xac2841bc  sw          $t0, 0x41BC($at)
    ctx->pc = 0x26202cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x262030: 0xe44c0018  swc1        $f12, 0x18($v0)
    ctx->pc = 0x262030u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x262034: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x262034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x262038: 0xac2941bc  sw          $t1, 0x41BC($at)
    ctx->pc = 0x262038u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x26203c: 0xc7000020  lwc1        $f0, 0x20($t8)
    ctx->pc = 0x26203cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262040: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x262040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x262044: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x262044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x262048: 0xac2a41bc  sw          $t2, 0x41BC($at)
    ctx->pc = 0x262048u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x26204c: 0xc7000024  lwc1        $f0, 0x24($t8)
    ctx->pc = 0x26204cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262050: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x262050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x262054: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x262054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x262058: 0xac2341bc  sw          $v1, 0x41BC($at)
    ctx->pc = 0x262058u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x26205c: 0xc7000028  lwc1        $f0, 0x28($t8)
    ctx->pc = 0x26205cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262060: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x262060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x262064: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x262064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x262068: 0xac2b41bc  sw          $t3, 0x41BC($at)
    ctx->pc = 0x262068u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x26206c: 0xe44c0028  swc1        $f12, 0x28($v0)
    ctx->pc = 0x26206cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x262070: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x262070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x262074: 0xac2c41bc  sw          $t4, 0x41BC($at)
    ctx->pc = 0x262074u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x262078: 0xc7000030  lwc1        $f0, 0x30($t8)
    ctx->pc = 0x262078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26207c: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x26207cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x262080: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x262080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x262084: 0xac2d41bc  sw          $t5, 0x41BC($at)
    ctx->pc = 0x262084u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x262088: 0xc7000034  lwc1        $f0, 0x34($t8)
    ctx->pc = 0x262088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26208c: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x26208cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x262090: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x262090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x262094: 0xac2e41bc  sw          $t6, 0x41BC($at)
    ctx->pc = 0x262094u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x262098: 0xc7000038  lwc1        $f0, 0x38($t8)
    ctx->pc = 0x262098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26209c: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x26209cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x2620a0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2620a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2620a4: 0xac2f41bc  sw          $t7, 0x41BC($at)
    ctx->pc = 0x2620a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x2620a8: 0xe44d0038  swc1        $f13, 0x38($v0)
    ctx->pc = 0x2620a8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x2620ac: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2620ACu;
    {
        const bool branch_taken_0x2620ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2620B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2620ACu;
        // 0x2620b0: 0xaf90914c  sw          $s0, -0x6EB4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938956), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2620ac) {
            ctx->pc = 0x2621C0u;
            goto label_2621c0;
        }
    }
    ctx->pc = 0x2620B4u;
label_2620b4:
    // 0x2620b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2620b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2620b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2620b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2620bc: 0x0  nop
    ctx->pc = 0x2620bcu;
    // NOP
    // 0x2620c0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2620c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2620c4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2620c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2620c8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2620c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2620cc: 0xac2241bc  sw          $v0, 0x41BC($at)
    ctx->pc = 0x2620ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x2620d0: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x2620d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2620d4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2620d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2620d8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2620d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2620dc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2620dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2620e0: 0xac2341bc  sw          $v1, 0x41BC($at)
    ctx->pc = 0x2620e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x2620e4: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x2620e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2620e8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2620e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2620ec: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2620ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2620f0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2620f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2620f4: 0xac2441bc  sw          $a0, 0x41BC($at)
    ctx->pc = 0x2620f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x2620f8: 0x24460014  addiu       $a2, $v0, 0x14
    ctx->pc = 0x2620f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x2620fc: 0xe44c0008  swc1        $f12, 0x8($v0)
    ctx->pc = 0x2620fcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x262100: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x262100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x262104: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x262104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x262108: 0xac2541bc  sw          $a1, 0x41BC($at)
    ctx->pc = 0x262108u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x26210c: 0x2447001c  addiu       $a3, $v0, 0x1C
    ctx->pc = 0x26210cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x262110: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x262110u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x262114: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x262114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x262118: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x262118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26211c: 0xac2341bc  sw          $v1, 0x41BC($at)
    ctx->pc = 0x26211cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x262120: 0x24480024  addiu       $t0, $v0, 0x24
    ctx->pc = 0x262120u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x262124: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x262124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x262128: 0x24430028  addiu       $v1, $v0, 0x28
    ctx->pc = 0x262128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x26212c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26212cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x262130: 0xac2641bc  sw          $a2, 0x41BC($at)
    ctx->pc = 0x262130u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x262134: 0x2449002c  addiu       $t1, $v0, 0x2C
    ctx->pc = 0x262134u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x262138: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x262138u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x26213c: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x26213cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x262140: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x262140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x262144: 0xac2441bc  sw          $a0, 0x41BC($at)
    ctx->pc = 0x262144u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x262148: 0x244a0034  addiu       $t2, $v0, 0x34
    ctx->pc = 0x262148u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x26214c: 0xe44c0018  swc1        $f12, 0x18($v0)
    ctx->pc = 0x26214cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x262150: 0x24440038  addiu       $a0, $v0, 0x38
    ctx->pc = 0x262150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x262154: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x262154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x262158: 0xac2741bc  sw          $a3, 0x41BC($at)
    ctx->pc = 0x262158u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x26215c: 0x244b003c  addiu       $t3, $v0, 0x3C
    ctx->pc = 0x26215cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x262160: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x262160u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x262164: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x262164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x262168: 0xac2541bc  sw          $a1, 0x41BC($at)
    ctx->pc = 0x262168u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x26216c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x26216cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x262170: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x262170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x262174: 0xac2841bc  sw          $t0, 0x41BC($at)
    ctx->pc = 0x262174u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x262178: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x262178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x26217c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26217cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x262180: 0xac2341bc  sw          $v1, 0x41BC($at)
    ctx->pc = 0x262180u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x262184: 0xe44c0028  swc1        $f12, 0x28($v0)
    ctx->pc = 0x262184u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x262188: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x262188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26218c: 0xac2941bc  sw          $t1, 0x41BC($at)
    ctx->pc = 0x26218cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x262190: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x262190u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x262194: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x262194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x262198: 0xac2641bc  sw          $a2, 0x41BC($at)
    ctx->pc = 0x262198u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x26219c: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x26219cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x2621a0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2621a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2621a4: 0xac2a41bc  sw          $t2, 0x41BC($at)
    ctx->pc = 0x2621a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x2621a8: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x2621a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x2621ac: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2621acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2621b0: 0xac2441bc  sw          $a0, 0x41BC($at)
    ctx->pc = 0x2621b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x2621b4: 0xe44d0038  swc1        $f13, 0x38($v0)
    ctx->pc = 0x2621b4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x2621b8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2621b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2621bc: 0xac2b41bc  sw          $t3, 0x41BC($at)
    ctx->pc = 0x2621bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
label_2621c0:
    // 0x2621c0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2621c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2621c4: 0x8c4241c0  lw          $v0, 0x41C0($v0)
    ctx->pc = 0x2621c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B41C0u));
    // 0x2621c8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2621c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2621cc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2621ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2621d0: 0xac2241c0  sw          $v0, 0x41C0($at)
    ctx->pc = 0x2621d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B41C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41C0u, _value); } while (0);
label_2621d4:
    // 0x2621d4: 0x13200006  beqz        $t9, . + 4 + (0x6 << 2)
    ctx->pc = 0x2621D4u;
    {
        const bool branch_taken_0x2621d4 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x2621D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2621D4u;
        // 0x2621d8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2621d4) {
            ctx->pc = 0x2621F0u;
            goto label_2621f0;
        }
    }
    ctx->pc = 0x2621DCu;
    // 0x2621dc: 0xc08994a  jal         func_226528
    ctx->pc = 0x2621DCu;
    SET_GPR_U32(ctx, 31, 0x2621E4u);
    ctx->pc = 0x2621E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2621DCu;
    // 0x2621e0: 0x320202d  daddu       $a0, $t9, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226528u, 0x2621DCu, 0x2621E4u)) {
        return;
    }
    ctx->pc = 0x2621E4u;
label_2621e4:
    // 0x2621e4: 0x244b0030  addiu       $t3, $v0, 0x30
    ctx->pc = 0x2621e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2621e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2621E8u;
    {
        const bool branch_taken_0x2621e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2621ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2621E8u;
        // 0x2621ec: 0x244c0020  addiu       $t4, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2621e8) {
            ctx->pc = 0x2621F4u;
            goto label_2621f4;
        }
    }
    ctx->pc = 0x2621F0u;
label_2621f0:
    // 0x2621f0: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2621f0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2621f4:
    // 0x2621f4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2621f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2621f8: 0x8c6341bc  lw          $v1, 0x41BC($v1)
    ctx->pc = 0x2621f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B41BCu));
    // 0x2621fc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2621fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x262200: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x262200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262204: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x262204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x262208: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x262208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26220c: 0x8c4241bc  lw          $v0, 0x41BC($v0)
    ctx->pc = 0x26220cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B41BCu));
    // 0x262210: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x262210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262214: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x262214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x262218: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x262218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26221c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26221cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x262220: 0x8c4241bc  lw          $v0, 0x41BC($v0)
    ctx->pc = 0x262220u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B41BCu));
    // 0x262224: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x262224u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x262228: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x262228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x26222c: 0x8c6341bc  lw          $v1, 0x41BC($v1)
    ctx->pc = 0x26222cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B41BCu));
    // 0x262230: 0x12240030  beq         $s1, $a0, . + 4 + (0x30 << 2)
    ctx->pc = 0x262230u;
    {
        const bool branch_taken_0x262230 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        ctx->pc = 0x262234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262230u;
        // 0x262234: 0xac71000c  sw          $s1, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262230) {
            ctx->pc = 0x2622F4u;
            goto label_2622f4;
        }
    }
    ctx->pc = 0x262238u;
    // 0x262238: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x262238u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x26223c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26223Cu;
    {
        const bool branch_taken_0x26223c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26223Cu;
        // 0x262240: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26223c) {
            ctx->pc = 0x26225Cu;
            goto label_26225c;
        }
    }
    ctx->pc = 0x262244u;
    // 0x262244: 0x1220007f  beqz        $s1, . + 4 + (0x7F << 2)
    ctx->pc = 0x262244u;
    {
        const bool branch_taken_0x262244 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x262248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262244u;
        // 0x262248: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262244) {
            ctx->pc = 0x262444u;
            goto label_262444;
        }
    }
    ctx->pc = 0x26224Cu;
    // 0x26224c: 0x1222000d  beq         $s1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x26224Cu;
    {
        const bool branch_taken_0x26224c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x262250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26224Cu;
        // 0x262250: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26224c) {
            ctx->pc = 0x262284u;
            goto label_262284;
        }
    }
    ctx->pc = 0x262254u;
    // 0x262254: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x262254u;
    {
        const bool branch_taken_0x262254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262254u;
        // 0x262258: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262254) {
            ctx->pc = 0x26244Cu;
            goto label_26244c;
        }
    }
    ctx->pc = 0x26225Cu;
label_26225c:
    // 0x26225c: 0x1222002f  beq         $s1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x26225Cu;
    {
        const bool branch_taken_0x26225c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x262260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26225Cu;
        // 0x262260: 0x8f82914c  lw          $v0, -0x6EB4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938956)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26225c) {
            ctx->pc = 0x26231Cu;
            goto label_26231c;
        }
    }
    ctx->pc = 0x262264u;
    // 0x262264: 0x2e220080  sltiu       $v0, $s1, 0x80
    ctx->pc = 0x262264u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x262268: 0x14400077  bnez        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x262268u;
    {
        const bool branch_taken_0x262268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262268u;
        // 0x26226c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262268) {
            ctx->pc = 0x262448u;
            goto label_262448;
        }
    }
    ctx->pc = 0x262270u;
    // 0x262270: 0x2e220083  sltiu       $v0, $s1, 0x83
    ctx->pc = 0x262270u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)131) ? 1 : 0);
    // 0x262274: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x262274u;
    {
        const bool branch_taken_0x262274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262274u;
        // 0x262278: 0x8f82914c  lw          $v0, -0x6EB4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938956)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262274) {
            ctx->pc = 0x262448u;
            goto label_262448;
        }
    }
    ctx->pc = 0x26227Cu;
    // 0x26227c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x26227Cu;
    {
        const bool branch_taken_0x26227c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26227Cu;
        // 0x262280: 0x24430010  addiu       $v1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26227c) {
            ctx->pc = 0x262388u;
            goto label_262388;
        }
    }
    ctx->pc = 0x262284u;
label_262284:
    // 0x262284: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x262284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x262288: 0x8c4241bc  lw          $v0, 0x41BC($v0)
    ctx->pc = 0x262288u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B41BCu));
    // 0x26228c: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x26228cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x262290: 0x24440014  addiu       $a0, $v0, 0x14
    ctx->pc = 0x262290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x262294: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x262294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x262298: 0xac2341bc  sw          $v1, 0x41BC($at)
    ctx->pc = 0x262298u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x26229c: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x26229cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x2622a0: 0x2443001c  addiu       $v1, $v0, 0x1C
    ctx->pc = 0x2622a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x2622a4: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x2622a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2622a8: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x2622a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2622ac: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2622acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2622b0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2622b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2622b4: 0xac2441bc  sw          $a0, 0x41BC($at)
    ctx->pc = 0x2622b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x2622b8: 0xc5800004  lwc1        $f0, 0x4($t4)
    ctx->pc = 0x2622b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2622bc: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2622bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2622c0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2622c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2622c4: 0xac2541bc  sw          $a1, 0x41BC($at)
    ctx->pc = 0x2622c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x2622c8: 0xc5800008  lwc1        $f0, 0x8($t4)
    ctx->pc = 0x2622c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2622cc: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2622ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x2622d0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2622d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2622d4: 0xac2341bc  sw          $v1, 0x41BC($at)
    ctx->pc = 0x2622d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x2622d8: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x2622d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x2622dc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2622dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2622e0: 0xac2641bc  sw          $a2, 0x41BC($at)
    ctx->pc = 0x2622e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x2622e4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2622e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2622e8: 0x8c4241c0  lw          $v0, 0x41C0($v0)
    ctx->pc = 0x2622e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B41C0u));
    // 0x2622ec: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x2622ECu;
    {
        const bool branch_taken_0x2622ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2622F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2622ECu;
        // 0x2622f0: 0x24420002  addiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2622ec) {
            ctx->pc = 0x26243Cu;
            goto label_26243c;
        }
    }
    ctx->pc = 0x2622F4u;
label_2622f4:
    // 0x2622f4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2622f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2622f8: 0x8c4241bc  lw          $v0, 0x41BC($v0)
    ctx->pc = 0x2622f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B41BCu));
    // 0x2622fc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2622fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x262300: 0x8c6341c0  lw          $v1, 0x41C0($v1)
    ctx->pc = 0x262300u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B41C0u));
    // 0x262304: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x262304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x262308: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x262308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26230c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26230cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x262310: 0xac2241bc  sw          $v0, 0x41BC($at)
    ctx->pc = 0x262310u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x262314: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x262314u;
    {
        const bool branch_taken_0x262314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262314u;
        // 0x262318: 0xaf839150  sw          $v1, -0x6EB0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938960), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262314) {
            ctx->pc = 0x262444u;
            goto label_262444;
        }
    }
    ctx->pc = 0x26231Cu;
label_26231c:
    // 0x26231c: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x26231cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x262320: 0x24440014  addiu       $a0, $v0, 0x14
    ctx->pc = 0x262320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x262324: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x262324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x262328: 0xac2341bc  sw          $v1, 0x41BC($at)
    ctx->pc = 0x262328u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x26232c: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x26232cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x262330: 0x2443001c  addiu       $v1, $v0, 0x1C
    ctx->pc = 0x262330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x262334: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x262334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x262338: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x262338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26233c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x26233cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x262340: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x262340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x262344: 0xac2441bc  sw          $a0, 0x41BC($at)
    ctx->pc = 0x262344u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x262348: 0xc5600004  lwc1        $f0, 0x4($t3)
    ctx->pc = 0x262348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26234c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x26234cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x262350: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x262350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x262354: 0xac2541bc  sw          $a1, 0x41BC($at)
    ctx->pc = 0x262354u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x262358: 0xc5600008  lwc1        $f0, 0x8($t3)
    ctx->pc = 0x262358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26235c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x26235cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x262360: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x262360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x262364: 0xac2341bc  sw          $v1, 0x41BC($at)
    ctx->pc = 0x262364u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x262368: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x262368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26236c: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x26236cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x262370: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x262370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x262374: 0xac2641bc  sw          $a2, 0x41BC($at)
    ctx->pc = 0x262374u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x262378: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x262378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26237c: 0x8c4241c0  lw          $v0, 0x41C0($v0)
    ctx->pc = 0x26237cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B41C0u));
    // 0x262380: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x262380u;
    {
        const bool branch_taken_0x262380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262380u;
        // 0x262384: 0x24420002  addiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262380) {
            ctx->pc = 0x26243Cu;
            goto label_26243c;
        }
    }
    ctx->pc = 0x262388u;
label_262388:
    // 0x262388: 0x24440014  addiu       $a0, $v0, 0x14
    ctx->pc = 0x262388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x26238c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26238cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x262390: 0xac2341bc  sw          $v1, 0x41BC($at)
    ctx->pc = 0x262390u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x262394: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x262394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x262398: 0x2443001c  addiu       $v1, $v0, 0x1C
    ctx->pc = 0x262398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x26239c: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x26239cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2623a0: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x2623a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2623a4: 0x24470024  addiu       $a3, $v0, 0x24
    ctx->pc = 0x2623a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x2623a8: 0x24480028  addiu       $t0, $v0, 0x28
    ctx->pc = 0x2623a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2623ac: 0x2449002c  addiu       $t1, $v0, 0x2C
    ctx->pc = 0x2623acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x2623b0: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2623b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2623b4: 0x244a0030  addiu       $t2, $v0, 0x30
    ctx->pc = 0x2623b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2623b8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2623b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2623bc: 0xac2441bc  sw          $a0, 0x41BC($at)
    ctx->pc = 0x2623bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x2623c0: 0xc5600004  lwc1        $f0, 0x4($t3)
    ctx->pc = 0x2623c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2623c4: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2623c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2623c8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2623c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2623cc: 0xac2541bc  sw          $a1, 0x41BC($at)
    ctx->pc = 0x2623ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x2623d0: 0xc5600008  lwc1        $f0, 0x8($t3)
    ctx->pc = 0x2623d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2623d4: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2623d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x2623d8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2623d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2623dc: 0xac2341bc  sw          $v1, 0x41BC($at)
    ctx->pc = 0x2623dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x2623e0: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x2623e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2623e4: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x2623e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x2623e8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2623e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2623ec: 0xac2641bc  sw          $a2, 0x41BC($at)
    ctx->pc = 0x2623ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x2623f0: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x2623f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2623f4: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x2623f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x2623f8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2623f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2623fc: 0xac2741bc  sw          $a3, 0x41BC($at)
    ctx->pc = 0x2623fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x262400: 0xc5800004  lwc1        $f0, 0x4($t4)
    ctx->pc = 0x262400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262404: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x262404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x262408: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x262408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26240c: 0xac2841bc  sw          $t0, 0x41BC($at)
    ctx->pc = 0x26240cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x262410: 0xc5800008  lwc1        $f0, 0x8($t4)
    ctx->pc = 0x262410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262414: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x262414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x262418: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x262418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26241c: 0xac2941bc  sw          $t1, 0x41BC($at)
    ctx->pc = 0x26241cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x262420: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x262420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262424: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x262424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x262428: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x262428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26242c: 0xac2a41bc  sw          $t2, 0x41BC($at)
    ctx->pc = 0x26242cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x6B41BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41BCu, _value); } while (0);
    // 0x262430: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x262430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x262434: 0x8c4241c0  lw          $v0, 0x41C0($v0)
    ctx->pc = 0x262434u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B41C0u));
    // 0x262438: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x262438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_26243c:
    // 0x26243c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26243cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x262440: 0xac2241c0  sw          $v0, 0x41C0($at)
    ctx->pc = 0x262440u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B41C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41C0u, _value); } while (0);
label_262444:
    // 0x262444: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x262444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_262448:
    // 0x262448: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x262448u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_26244c:
    // 0x26244c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26244cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x262450: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x262450u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262454: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x262454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262458: 0x3e00008  jr          $ra
    ctx->pc = 0x262458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262458u;
        // 0x26245c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262460u;
}
