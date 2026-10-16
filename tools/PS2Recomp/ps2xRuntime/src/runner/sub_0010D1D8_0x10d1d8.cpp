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

// Function: sub_0010D1D8
// Address: 0x10d1d8 - 0x10d460
void sub_0010D1D8_0x10d1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D1D8_0x10d1d8");
#endif

    switch (ctx->pc) {
        case 0x10d228u: goto label_10d228;
        case 0x10d254u: goto label_10d254;
        case 0x10d2c8u: goto label_10d2c8;
        case 0x10d2ecu: goto label_10d2ec;
        case 0x10d2f8u: goto label_10d2f8;
        case 0x10d360u: goto label_10d360;
        case 0x10d384u: goto label_10d384;
        case 0x10d390u: goto label_10d390;
        case 0x10d3d0u: goto label_10d3d0;
        case 0x10d428u: goto label_10d428;
        default: break;
    }

    ctx->pc = 0x10d1d8u;

    // 0x10d1d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x10d1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10d1dc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x10d1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x10d1e0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x10d1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x10d1e4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x10d1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x10d1e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10d1e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d1ec: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x10d1ecu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x10d1f0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10d1f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d1f4: 0x8c4382f4  lw          $v1, -0x7D0C($v0)
    ctx->pc = 0x10d1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3382F4u));
    // 0x10d1f8: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x10d1f8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x10d1fc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x10d1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x10d200: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10d200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x10d204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10d204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10d208: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x10d208u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x10d20c: 0x1060008a  beqz        $v1, . + 4 + (0x8A << 2)
    ctx->pc = 0x10D20Cu;
    {
        const bool branch_taken_0x10d20c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D20Cu;
        // 0x10d210: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d20c) {
            ctx->pc = 0x10D438u;
            goto label_10d438;
        }
    }
    ctx->pc = 0x10D214u;
    // 0x10d214: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10d214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10d218: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x10d218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x10d21c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10d21cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d220: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x10d220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x10d224: 0x0  nop
    ctx->pc = 0x10d224u;
    // NOP
label_10d228:
    // 0x10d228: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x10d228u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x10d22c: 0x24420b20  addiu       $v0, $v0, 0xB20
    ctx->pc = 0x10d22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2848));
    // 0x10d230: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x10d230u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x10d234: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x10d234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10d238: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x10D238u;
    {
        const bool branch_taken_0x10d238 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D238u;
        // 0x10d23c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d238) {
            ctx->pc = 0x10D26Cu;
            goto label_10d26c;
        }
    }
    ctx->pc = 0x10D240u;
    // 0x10d240: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x10d240u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10d244: 0xc60c0014  lwc1        $f12, 0x14($s0)
    ctx->pc = 0x10d244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x10d248: 0x26070008  addiu       $a3, $s0, 0x8
    ctx->pc = 0x10d248u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x10d24c: 0xc043518  jal         func_10D460
    ctx->pc = 0x10D24Cu;
    SET_GPR_U32(ctx, 31, 0x10D254u);
    ctx->pc = 0x10D250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D24Cu;
    // 0x10d250: 0xc60d0018  lwc1        $f13, 0x18($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10D460u, 0x10D24Cu, 0x10D254u)) {
        return;
    }
    ctx->pc = 0x10D254u;
label_10d254:
    // 0x10d254: 0xe6150014  swc1        $f21, 0x14($s0)
    ctx->pc = 0x10d254u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x10d258: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x10d258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x10d25c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x10d25cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x10d260: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x10d260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x10d264: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x10d264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x10d268: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x10d268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_10d26c:
    // 0x10d26c: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x10d26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x10d270: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x10d270u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x10d274: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x10d274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x10d278: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x10d278u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x10d27c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x10d27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10d280: 0x5080006a  beql        $a0, $zero, . + 4 + (0x6A << 2)
    ctx->pc = 0x10D280u;
    {
        const bool branch_taken_0x10d280 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d280) {
            ctx->pc = 0x10D284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D280u;
            // 0x10d284: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D42Cu;
            goto label_10d42c;
        }
    }
    ctx->pc = 0x10D288u;
    // 0x10d288: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x10d288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x10d28c: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x10D28Cu;
    {
        const bool branch_taken_0x10d28c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d28c) {
            ctx->pc = 0x10D290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D28Cu;
            // 0x10d290: 0xc600000c  lwc1        $f0, 0xC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D328u;
            goto label_10d328;
        }
    }
    ctx->pc = 0x10D294u;
    // 0x10d294: 0x8e6382f4  lw          $v1, -0x7D0C($s3)
    ctx->pc = 0x10d294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294935284)));
    // 0x10d298: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D298u;
    {
        const bool branch_taken_0x10d298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D298u;
        // 0x10d29c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d298) {
            ctx->pc = 0x10D2ACu;
            goto label_10d2ac;
        }
    }
    ctx->pc = 0x10D2A0u;
    // 0x10d2a0: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x10d2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x10d2a4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x10d2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x10d2a8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x10d2a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_10d2ac:
    // 0x10d2ac: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x10D2ACu;
    {
        const bool branch_taken_0x10d2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d2ac) {
            ctx->pc = 0x10D2B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D2ACu;
            // 0x10d2b0: 0xc600000c  lwc1        $f0, 0xC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D328u;
            goto label_10d328;
        }
    }
    ctx->pc = 0x10D2B4u;
    // 0x10d2b4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x10d2b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x10d2b8: 0x5060001c  beql        $v1, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x10D2B8u;
    {
        const bool branch_taken_0x10d2b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d2b8) {
            ctx->pc = 0x10D2BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D2B8u;
            // 0x10d2bc: 0xc600000c  lwc1        $f0, 0xC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D32Cu;
            goto label_10d32c;
        }
    }
    ctx->pc = 0x10D2C0u;
    // 0x10d2c0: 0xc0b879c  jal         func_2E1E70
    ctx->pc = 0x10D2C0u;
    SET_GPR_U32(ctx, 31, 0x10D2C8u);
    ctx->pc = 0x10D2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D2C0u;
    // 0x10d2c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1E70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1E70u, 0x10D2C0u, 0x10D2C8u)) {
        return;
    }
    ctx->pc = 0x10D2C8u;
label_10d2c8:
    // 0x10d2c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10d2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10d2cc: 0xe4540058  swc1        $f20, 0x58($v0)
    ctx->pc = 0x10d2ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x10d2d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10d2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10d2d4: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x10d2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x10d2d8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10D2D8u;
    {
        const bool branch_taken_0x10d2d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D2D8u;
        // 0x10d2dc: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d2d8) {
            ctx->pc = 0x10D2F0u;
            goto label_10d2f0;
        }
    }
    ctx->pc = 0x10D2E0u;
    // 0x10d2e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10d2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d2e4: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x10D2E4u;
    SET_GPR_U32(ctx, 31, 0x10D2ECu);
    ctx->pc = 0x10D2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D2E4u;
    // 0x10d2e8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x10D2E4u, 0x10D2ECu)) {
        return;
    }
    ctx->pc = 0x10D2ECu;
label_10d2ec:
    // 0x10d2ec: 0x0  nop
    ctx->pc = 0x10d2ecu;
    // NOP
label_10d2f0:
    // 0x10d2f0: 0xc0765ea  jal         func_1D97A8
    ctx->pc = 0x10D2F0u;
    SET_GPR_U32(ctx, 31, 0x10D2F8u);
    ctx->pc = 0x10D2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D2F0u;
    // 0x10d2f4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D97A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D97A8u, 0x10D2F0u, 0x10D2F8u)) {
        return;
    }
    ctx->pc = 0x10D2F8u;
label_10d2f8:
    // 0x10d2f8: 0xe6140020  swc1        $f20, 0x20($s0)
    ctx->pc = 0x10d2f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x10d2fc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x10d2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x10d300: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x10d300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x10d304: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x10d304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x10d308: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x10d308u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x10d30c: 0xe6140010  swc1        $f20, 0x10($s0)
    ctx->pc = 0x10d30cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x10d310: 0xe6150014  swc1        $f21, 0x14($s0)
    ctx->pc = 0x10d310u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x10d314: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x10d314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x10d318: 0xe615001c  swc1        $f21, 0x1C($s0)
    ctx->pc = 0x10d318u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x10d31c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x10d31cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x10d320: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x10d320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x10d324: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x10d324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10d328:
    // 0x10d328: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x10d328u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_10d32c:
    // 0x10d32c: 0x0  nop
    ctx->pc = 0x10d32cu;
    // NOP
    // 0x10d330: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x10d330u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10d334: 0x0  nop
    ctx->pc = 0x10d334u;
    // NOP
    // 0x10d338: 0x4502003c  bc1fl       . + 4 + (0x3C << 2)
    ctx->pc = 0x10D338u;
    {
        const bool branch_taken_0x10d338 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10d338) {
            ctx->pc = 0x10D33Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D338u;
            // 0x10d33c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D42Cu;
            goto label_10d42c;
        }
    }
    ctx->pc = 0x10D340u;
    // 0x10d340: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x10d340u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x10d344: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x10d344u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10d348: 0x0  nop
    ctx->pc = 0x10d348u;
    // NOP
    // 0x10d34c: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x10D34Cu;
    {
        const bool branch_taken_0x10d34c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10D350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D34Cu;
        // 0x10d350: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d34c) {
            ctx->pc = 0x10D3C0u;
            goto label_10d3c0;
        }
    }
    ctx->pc = 0x10D354u;
    // 0x10d354: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x10d354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10d358: 0xc0b879c  jal         func_2E1E70
    ctx->pc = 0x10D358u;
    SET_GPR_U32(ctx, 31, 0x10D360u);
    ctx->pc = 0x10D35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D358u;
    // 0x10d35c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1E70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1E70u, 0x10D358u, 0x10D360u)) {
        return;
    }
    ctx->pc = 0x10D360u;
label_10d360:
    // 0x10d360: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10d360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10d364: 0xe4540058  swc1        $f20, 0x58($v0)
    ctx->pc = 0x10d364u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x10d368: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10d368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10d36c: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x10d36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x10d370: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10D370u;
    {
        const bool branch_taken_0x10d370 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D370u;
        // 0x10d374: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d370) {
            ctx->pc = 0x10D388u;
            goto label_10d388;
        }
    }
    ctx->pc = 0x10D378u;
    // 0x10d378: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10d378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d37c: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x10D37Cu;
    SET_GPR_U32(ctx, 31, 0x10D384u);
    ctx->pc = 0x10D380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D37Cu;
    // 0x10d380: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x10D37Cu, 0x10D384u)) {
        return;
    }
    ctx->pc = 0x10D384u;
label_10d384:
    // 0x10d384: 0x0  nop
    ctx->pc = 0x10d384u;
    // NOP
label_10d388:
    // 0x10d388: 0xc0765ea  jal         func_1D97A8
    ctx->pc = 0x10D388u;
    SET_GPR_U32(ctx, 31, 0x10D390u);
    ctx->pc = 0x10D38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D388u;
    // 0x10d38c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D97A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D97A8u, 0x10D388u, 0x10D390u)) {
        return;
    }
    ctx->pc = 0x10D390u;
label_10d390:
    // 0x10d390: 0xe6140020  swc1        $f20, 0x20($s0)
    ctx->pc = 0x10d390u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x10d394: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x10d394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x10d398: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x10d398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x10d39c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x10d39cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x10d3a0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x10d3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x10d3a4: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x10d3a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x10d3a8: 0xe6140010  swc1        $f20, 0x10($s0)
    ctx->pc = 0x10d3a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x10d3ac: 0xe6150014  swc1        $f21, 0x14($s0)
    ctx->pc = 0x10d3acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x10d3b0: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x10d3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x10d3b4: 0xe615001c  swc1        $f21, 0x1C($s0)
    ctx->pc = 0x10d3b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x10d3b8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x10D3B8u;
    {
        const bool branch_taken_0x10d3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D3B8u;
        // 0x10d3bc: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d3b8) {
            ctx->pc = 0x10D428u;
            goto label_10d428;
        }
    }
    ctx->pc = 0x10D3C0u;
label_10d3c0:
    // 0x10d3c0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x10d3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10d3c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10d3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d3c8: 0xc043b2a  jal         func_10ECA8
    ctx->pc = 0x10D3C8u;
    SET_GPR_U32(ctx, 31, 0x10D3D0u);
    ctx->pc = 0x10D3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D3C8u;
    // 0x10d3cc: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ECA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10ECA8u, 0x10D3C8u, 0x10D3D0u)) {
        return;
    }
    ctx->pc = 0x10D3D0u;
label_10d3d0:
    // 0x10d3d0: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x10d3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10d3d4: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x10d3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10d3d8: 0xc6030010  lwc1        $f3, 0x10($s0)
    ctx->pc = 0x10d3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10d3dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x10d3dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x10d3e0: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x10d3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10d3e4: 0x0  nop
    ctx->pc = 0x10d3e4u;
    // NOP
    // 0x10d3e8: 0x0  nop
    ctx->pc = 0x10d3e8u;
    // NOP
    // 0x10d3ec: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x10d3ecu;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[3]);
    // 0x10d3f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10d3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10d3f4: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x10d3f4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x10d3f8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x10D3F8u;
    {
        const bool branch_taken_0x10d3f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D3F8u;
        // 0x10d3fc: 0x46026302  mul.s       $f12, $f12, $f2 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d3f8) {
            ctx->pc = 0x10D428u;
            goto label_10d428;
        }
    }
    ctx->pc = 0x10D400u;
    // 0x10d400: 0x8e6282f4  lw          $v0, -0x7D0C($s3)
    ctx->pc = 0x10d400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294935284)));
    // 0x10d404: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x10D404u;
    {
        const bool branch_taken_0x10d404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d404) {
            ctx->pc = 0x10D408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D404u;
            // 0x10d408: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D42Cu;
            goto label_10d42c;
        }
    }
    ctx->pc = 0x10D40Cu;
    // 0x10d40c: 0xe46c0058  swc1        $f12, 0x58($v1)
    ctx->pc = 0x10d40cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x10d410: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10d410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10d414: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x10d414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x10d418: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10D418u;
    {
        const bool branch_taken_0x10d418 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D418u;
        // 0x10d41c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d418) {
            ctx->pc = 0x10D428u;
            goto label_10d428;
        }
    }
    ctx->pc = 0x10D420u;
    // 0x10d420: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x10D420u;
    SET_GPR_U32(ctx, 31, 0x10D428u);
    ctx->pc = 0x10D424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D420u;
    // 0x10d424: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x10D420u, 0x10D428u)) {
        return;
    }
    ctx->pc = 0x10D428u;
label_10d428:
    // 0x10d428: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x10d428u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_10d42c:
    // 0x10d42c: 0x2e420040  sltiu       $v0, $s2, 0x40
    ctx->pc = 0x10d42cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x10d430: 0x1440ff7d  bnez        $v0, . + 4 + (-0x83 << 2)
    ctx->pc = 0x10D430u;
    {
        const bool branch_taken_0x10d430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D430u;
        // 0x10d434: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d430) {
            ctx->pc = 0x10D228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10d228;
        }
    }
    ctx->pc = 0x10D438u;
label_10d438:
    // 0x10d438: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x10d438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10d43c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x10d43cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10d440: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10d440u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d444: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x10d444u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d448: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10d448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d44c: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x10d44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x10d450: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x10d450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x10d454: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x10d454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10d458: 0x3e00008  jr          $ra
    ctx->pc = 0x10D458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D458u;
        // 0x10d45c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D460u;
}
