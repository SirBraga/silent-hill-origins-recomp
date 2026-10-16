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

// Function: sub_00310030
// Address: 0x310030 - 0x3101e8
void sub_00310030_0x310030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00310030_0x310030");
#endif

    switch (ctx->pc) {
        case 0x3100d0u: goto label_3100d0;
        case 0x310118u: goto label_310118;
        default: break;
    }

    ctx->pc = 0x310030u;

    // 0x310030: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x310030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x310034: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x310034u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310038: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x310038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x31003c: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x31003cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x310040: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x310040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x310044: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x310044u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310048: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x310048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x31004c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x31004cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x310050: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x310050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x310054: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x310054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310058: 0x9578001c  lhu         $t8, 0x1C($t3)
    ctx->pc = 0x310058u;
    SET_GPR_ZE32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 28)));
    // 0x31005c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31005cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310060: 0x8d790004  lw          $t9, 0x4($t3)
    ctx->pc = 0x310060u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x310064: 0xd8102b  sltu        $v0, $a2, $t8
    ctx->pc = 0x310064u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x310068: 0xc4a50004  lwc1        $f5, 0x4($a1)
    ctx->pc = 0x310068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x31006c: 0xc2480b  movn        $t1, $a2, $v0
    ctx->pc = 0x31006cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6));
    // 0x310070: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x310070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x310074: 0x1231818  mult        $v1, $t1, $v1
    ctx->pc = 0x310074u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x310078: 0x27020002  addiu       $v0, $t8, 0x2
    ctx->pc = 0x310078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x31007c: 0x304affff  andi        $t2, $v0, 0xFFFF
    ctx->pc = 0x31007cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x310080: 0x140c02d  daddu       $t8, $t2, $zero
    ctx->pc = 0x310080u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310084: 0x791821  addu        $v1, $v1, $t9
    ctx->pc = 0x310084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
    // 0x310088: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x310088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31008c: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x31008cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x310090: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x310090u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x310094: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x310094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310098: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x310098u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x31009c: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x31009cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x3100a0: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x3100a0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x3100a4: 0x11400049  beqz        $t2, . + 4 + (0x49 << 2)
    ctx->pc = 0x3100A4u;
    {
        const bool branch_taken_0x3100a4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3100A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3100A4u;
        // 0x3100a8: 0x46041980  add.s       $f6, $f3, $f4 (Delay Slot)
        ctx->f[6] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3100a4) {
            ctx->pc = 0x3101CCu;
            goto label_3101cc;
        }
    }
    ctx->pc = 0x3100ACu;
    // 0x3100ac: 0x51490048  beql        $t2, $t1, . + 4 + (0x48 << 2)
    ctx->pc = 0x3100ACu;
    {
        const bool branch_taken_0x3100ac = (GPR_U64(ctx, 10) == GPR_U64(ctx, 9));
        if (branch_taken_0x3100ac) {
            ctx->pc = 0x3100B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3100ACu;
            // 0x3100b0: 0xa6090000  sh          $t1, 0x0($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3101D0u;
            goto label_3101d0;
        }
    }
    ctx->pc = 0x3100B4u;
    // 0x3100b4: 0x46066034  c.lt.s      $f12, $f6
    ctx->pc = 0x3100b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3100b8: 0x0  nop
    ctx->pc = 0x3100b8u;
    // NOP
    // 0x3100bc: 0x45030044  bc1tl       . + 4 + (0x44 << 2)
    ctx->pc = 0x3100BCu;
    {
        const bool branch_taken_0x3100bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3100bc) {
            ctx->pc = 0x3100C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3100BCu;
            // 0x3100c0: 0xa6090000  sh          $t1, 0x0($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3101D0u;
            goto label_3101d0;
        }
    }
    ctx->pc = 0x3100C4u;
    // 0x3100c4: 0x8d670008  lw          $a3, 0x8($t3)
    ctx->pc = 0x3100c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x3100c8: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x3100c8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x3100cc: 0x0  nop
    ctx->pc = 0x3100ccu;
    // NOP
label_3100d0:
    // 0x3100d0: 0x248f0001  addiu       $t7, $a0, 0x1
    ctx->pc = 0x3100d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3100d4: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x3100d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x3100d8: 0x140702d  daddu       $t6, $t2, $zero
    ctx->pc = 0x3100d8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3100dc: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x3100dcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3100e0: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x3100e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3100e4: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x3100e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x3100e8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3100e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3100ec: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x3100ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3100f0: 0x1080002c  beqz        $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3100F0u;
    {
        const bool branch_taken_0x3100f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3100F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3100F0u;
        // 0x3100f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3100f0) {
            ctx->pc = 0x3101A4u;
            goto label_3101a4;
        }
    }
    ctx->pc = 0x3100F8u;
    // 0x3100f8: 0x8d620008  lw          $v0, 0x8($t3)
    ctx->pc = 0x3100f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x3100fc: 0x240c000c  addiu       $t4, $zero, 0xC
    ctx->pc = 0x3100fcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x310100: 0x8d6d0018  lw          $t5, 0x18($t3)
    ctx->pc = 0x310100u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 24)));
    // 0x310104: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x310104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x310108: 0x8d720014  lw          $s2, 0x14($t3)
    ctx->pc = 0x310108u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 20)));
    // 0x31010c: 0x94480000  lhu         $t0, 0x0($v0)
    ctx->pc = 0x31010cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x310110: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x310110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x310114: 0x0  nop
    ctx->pc = 0x310114u;
    // NOP
label_310118:
    // 0x310118: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x310118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x31011c: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x31011cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x310120: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x310120u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x310124: 0x6c1018  mult        $v0, $v1, $t4
    ctx->pc = 0x310124u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x310128: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x310128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x31012c: 0x94630006  lhu         $v1, 0x6($v1)
    ctx->pc = 0x31012cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x310130: 0x106e0017  beq         $v1, $t6, . + 4 + (0x17 << 2)
    ctx->pc = 0x310130u;
    {
        const bool branch_taken_0x310130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 14));
        ctx->pc = 0x310134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310130u;
        // 0x310134: 0x6c8818  mult        $s1, $v1, $t4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x310130) {
            ctx->pc = 0x310190u;
            goto label_310190;
        }
    }
    ctx->pc = 0x310138u;
    // 0x310138: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x310138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31013c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x31013cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310140: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x310140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x310144: 0x2391021  addu        $v0, $s1, $t9
    ctx->pc = 0x310144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 25)));
    // 0x310148: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x310148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31014c: 0xc4450004  lwc1        $f5, 0x4($v0)
    ctx->pc = 0x31014cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x310150: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x310150u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x310154: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x310154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x310158: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x310158u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x31015c: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x31015cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x310160: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x310160u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x310164: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x310164u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x310168: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x310168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x31016c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x31016cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310170: 0xe7a60000  swc1        $f6, 0x0($sp)
    ctx->pc = 0x310170u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x310174: 0xc7a60000  lwc1        $f6, 0x0($sp)
    ctx->pc = 0x310174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x310178: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x310178u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31017c: 0x0  nop
    ctx->pc = 0x31017cu;
    // NOP
    // 0x310180: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x310180u;
    {
        const bool branch_taken_0x310180 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x310184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310180u;
        // 0x310184: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310180) {
            ctx->pc = 0x310194u;
            goto label_310194;
        }
    }
    ctx->pc = 0x310188u;
    // 0x310188: 0x46000186  mov.s       $f6, $f0
    ctx->pc = 0x310188u;
    ctx->f[6] = FPU_MOV_S(ctx->f[0]);
    // 0x31018c: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x31018cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_310190:
    // 0x310190: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x310190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_310194:
    // 0x310194: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x310194u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x310198: 0xc4182b  sltu        $v1, $a2, $a0
    ctx->pc = 0x310198u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x31019c: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x31019Cu;
    {
        const bool branch_taken_0x31019c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3101A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31019Cu;
        // 0x3101a0: 0x1061021  addu        $v0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31019c) {
            ctx->pc = 0x310118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310118;
        }
    }
    ctx->pc = 0x3101A4u;
label_3101a4:
    // 0x3101a4: 0x31e4ffff  andi        $a0, $t7, 0xFFFF
    ctx->pc = 0x3101a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65535);
    // 0x3101a8: 0x98102b  sltu        $v0, $a0, $t8
    ctx->pc = 0x3101a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x3101ac: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3101ACu;
    {
        const bool branch_taken_0x3101ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3101ac) {
            ctx->pc = 0x3101B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3101ACu;
            // 0x3101b0: 0xa6090000  sh          $t1, 0x0($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3101D0u;
            goto label_3101d0;
        }
    }
    ctx->pc = 0x3101B4u;
    // 0x3101b4: 0x51490006  beql        $t2, $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3101B4u;
    {
        const bool branch_taken_0x3101b4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 9));
        if (branch_taken_0x3101b4) {
            ctx->pc = 0x3101B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3101B4u;
            // 0x3101b8: 0xa6090000  sh          $t1, 0x0($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3101D0u;
            goto label_3101d0;
        }
    }
    ctx->pc = 0x3101BCu;
    // 0x3101bc: 0x46066034  c.lt.s      $f12, $f6
    ctx->pc = 0x3101bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3101c0: 0x0  nop
    ctx->pc = 0x3101c0u;
    // NOP
    // 0x3101c4: 0x4502ffc2  bc1fl       . + 4 + (-0x3E << 2)
    ctx->pc = 0x3101C4u;
    {
        const bool branch_taken_0x3101c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3101c4) {
            ctx->pc = 0x3101C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3101C4u;
            // 0x3101c8: 0x94040  sll         $t0, $t1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3100D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3100d0;
        }
    }
    ctx->pc = 0x3101CCu;
label_3101cc:
    // 0x3101cc: 0xa6090000  sh          $t1, 0x0($s0)
    ctx->pc = 0x3101ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 9));
label_3101d0:
    // 0x3101d0: 0x46003006  mov.s       $f0, $f6
    ctx->pc = 0x3101d0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[6]);
    // 0x3101d4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3101d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3101d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3101d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3101dc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3101dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3101e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3101E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3101E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3101E0u;
        // 0x3101e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3101E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3101E8u;
}
