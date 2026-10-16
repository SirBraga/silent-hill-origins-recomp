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

// Function: sub_002172B0
// Address: 0x2172b0 - 0x2173b0
void sub_002172B0_0x2172b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002172B0_0x2172b0");
#endif

    switch (ctx->pc) {
        case 0x2172e4u: goto label_2172e4;
        case 0x2172f4u: goto label_2172f4;
        case 0x217374u: goto label_217374;
        case 0x217390u: goto label_217390;
        default: break;
    }

    ctx->pc = 0x2172b0u;

    // 0x2172b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2172b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2172b4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2172b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2172b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2172b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2172bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2172bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2172c0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2172c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2172c4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2172c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2172c8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2172c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2172cc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2172ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2172d0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2172d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2172d4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2172d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2172d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2172d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2172dc: 0xc085dbc  jal         func_2176F0
    ctx->pc = 0x2172DCu;
    SET_GPR_U32(ctx, 31, 0x2172E4u);
    ctx->pc = 0x2172E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2172DCu;
    // 0x2172e0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2176F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2176F0u, 0x2172DCu, 0x2172E4u)) {
        return;
    }
    ctx->pc = 0x2172E4u;
label_2172e4:
    // 0x2172e4: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2172E4u;
    {
        const bool branch_taken_0x2172e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2172E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2172E4u;
        // 0x2172e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2172e4) {
            ctx->pc = 0x217390u;
            goto label_217390;
        }
    }
    ctx->pc = 0x2172ECu;
    // 0x2172ec: 0xc085d6e  jal         func_2175B8
    ctx->pc = 0x2172ECu;
    SET_GPR_U32(ctx, 31, 0x2172F4u);
    ctx->pc = 0x2172F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2172ECu;
    // 0x2172f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2175B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2175B8u, 0x2172ECu, 0x2172F4u)) {
        return;
    }
    ctx->pc = 0x2172F4u;
label_2172f4:
    // 0x2172f4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2172f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2172f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2172f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2172fc: 0x8e04027c  lw          $a0, 0x27C($s0)
    ctx->pc = 0x2172fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 636)));
    // 0x217300: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x217300u;
    {
        const bool branch_taken_0x217300 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x217304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217300u;
        // 0x217304: 0xae020278  sw          $v0, 0x278($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217300) {
            ctx->pc = 0x217350u;
            goto label_217350;
        }
    }
    ctx->pc = 0x217308u;
    // 0x217308: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x217308u;
    {
        const bool branch_taken_0x217308 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x217308) {
            ctx->pc = 0x217350u;
            goto label_217350;
        }
    }
    ctx->pc = 0x217310u;
    // 0x217310: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x217310u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x217314: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x217314u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x217318: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x217318u;
    {
        const bool branch_taken_0x217318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x217318) {
            ctx->pc = 0x217350u;
            goto label_217350;
        }
    }
    ctx->pc = 0x217320u;
    // 0x217320: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x217320u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x217324: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x217324u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x217328: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x217328u;
    {
        const bool branch_taken_0x217328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x217328) {
            ctx->pc = 0x217350u;
            goto label_217350;
        }
    }
    ctx->pc = 0x217330u;
    // 0x217330: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x217330u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x217334: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x217334u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x217338: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x217338u;
    {
        const bool branch_taken_0x217338 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x217338) {
            ctx->pc = 0x217350u;
            goto label_217350;
        }
    }
    ctx->pc = 0x217340u;
    // 0x217340: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x217340u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x217344: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x217344u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x217348: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x217348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x21734c: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x21734cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_217350:
    // 0x217350: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x217350u;
    {
        const bool branch_taken_0x217350 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x217350) {
            ctx->pc = 0x217360u;
            goto label_217360;
        }
    }
    ctx->pc = 0x217358u;
    // 0x217358: 0xae11027c  sw          $s1, 0x27C($s0)
    ctx->pc = 0x217358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 17));
    // 0x21735c: 0xae110284  sw          $s1, 0x284($s0)
    ctx->pc = 0x21735cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 17));
label_217360:
    // 0x217360: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x217360u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x217364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x217364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217368: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x217368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21736c: 0xc085776  jal         func_215DD8
    ctx->pc = 0x21736Cu;
    SET_GPR_U32(ctx, 31, 0x217374u);
    ctx->pc = 0x217370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21736Cu;
    // 0x217370: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x215DD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x215DD8u, 0x21736Cu, 0x217374u)) {
        return;
    }
    ctx->pc = 0x217374u;
label_217374:
    // 0x217374: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x217374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217378: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x217378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21737c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x21737cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x217380: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x217380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217384: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x217384u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x217388: 0xc085422  jal         func_215088
    ctx->pc = 0x217388u;
    SET_GPR_U32(ctx, 31, 0x217390u);
    ctx->pc = 0x21738Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217388u;
    // 0x21738c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x215088u, 0x217388u, 0x217390u)) {
        return;
    }
    ctx->pc = 0x217390u;
label_217390:
    // 0x217390: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x217390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x217394: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x217394u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x217398: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x217398u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21739c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x21739cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2173a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2173a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2173a4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2173a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2173a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2173A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2173ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2173A8u;
        // 0x2173ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2173A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2173B0u;
}
