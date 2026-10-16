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

// Function: sub_00147318
// Address: 0x147318 - 0x1473f0
void sub_00147318_0x147318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147318_0x147318");
#endif

    switch (ctx->pc) {
        case 0x14734cu: goto label_14734c;
        case 0x147368u: goto label_147368;
        case 0x14738cu: goto label_14738c;
        case 0x1473acu: goto label_1473ac;
        case 0x1473c4u: goto label_1473c4;
        default: break;
    }

    ctx->pc = 0x147318u;

    // 0x147318: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x147318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14731c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x14731cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x147320: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x147320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x147324: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x147324u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x147328: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x147328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14732c: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x14732cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    // 0x147330: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x147330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x147334: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x147334u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147338: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x147338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14733c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14733cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147340: 0x8e048bc4  lw          $a0, -0x743C($s0)
    ctx->pc = 0x147340u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x338BC4u));
    // 0x147344: 0xc066552  jal         func_199548
    ctx->pc = 0x147344u;
    SET_GPR_U32(ctx, 31, 0x14734Cu);
    ctx->pc = 0x147348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147344u;
    // 0x147348: 0x8e460054  lw          $a2, 0x54($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199548u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x199548u, 0x147344u, 0x14734Cu)) {
        return;
    }
    ctx->pc = 0x14734Cu;
label_14734c:
    // 0x14734c: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x14734cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x147350: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x147350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x147354: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x147354u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
    // 0x147358: 0x8e048bc4  lw          $a0, -0x743C($s0)
    ctx->pc = 0x147358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294937540)));
    // 0x14735c: 0x8e460050  lw          $a2, 0x50($s2)
    ctx->pc = 0x14735cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x147360: 0xc066318  jal         func_198C60
    ctx->pc = 0x147360u;
    SET_GPR_U32(ctx, 31, 0x147368u);
    ctx->pc = 0x147364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147360u;
    // 0x147364: 0x8e450054  lw          $a1, 0x54($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198C60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x198C60u, 0x147360u, 0x147368u)) {
        return;
    }
    ctx->pc = 0x147368u;
label_147368:
    // 0x147368: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x147368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14736c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14736cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x147370: 0x71100b  movn        $v0, $v1, $s1
    ctx->pc = 0x147370u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
    // 0x147374: 0x8e460054  lw          $a2, 0x54($s2)
    ctx->pc = 0x147374u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x147378: 0xae420060  sw          $v0, 0x60($s2)
    ctx->pc = 0x147378u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
    // 0x14737c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x14737cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147380: 0x8cc40024  lw          $a0, 0x24($a2)
    ctx->pc = 0x147380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x147384: 0xc0ab3b8  jal         func_2ACEE0
    ctx->pc = 0x147384u;
    SET_GPR_U32(ctx, 31, 0x14738Cu);
    ctx->pc = 0x147388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147384u;
    // 0x147388: 0x96460060  lhu         $a2, 0x60($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACEE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ACEE0u, 0x147384u, 0x14738Cu)) {
        return;
    }
    ctx->pc = 0x14738Cu;
label_14738c:
    // 0x14738c: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x14738cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x147390: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x147390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x147394: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x147394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x147398: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x147398u;
    {
        const bool branch_taken_0x147398 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147398u;
        // 0x14739c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147398) {
            ctx->pc = 0x1473ACu;
            goto label_1473ac;
        }
    }
    ctx->pc = 0x1473A0u;
    // 0x1473a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1473a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1473a4: 0xc0aa77a  jal         func_2A9DE8
    ctx->pc = 0x1473A4u;
    SET_GPR_U32(ctx, 31, 0x1473ACu);
    ctx->pc = 0x1473A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1473A4u;
    // 0x1473a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9DE8u, 0x1473A4u, 0x1473ACu)) {
        return;
    }
    ctx->pc = 0x1473ACu;
label_1473ac:
    // 0x1473ac: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x1473acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x1473b0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1473B0u;
    {
        const bool branch_taken_0x1473b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1473b0) {
            ctx->pc = 0x1473B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1473B0u;
            // 0x1473b4: 0x8e420054  lw          $v0, 0x54($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1473C8u;
            goto label_1473c8;
        }
    }
    ctx->pc = 0x1473B8u;
    // 0x1473b8: 0xc64c004c  lwc1        $f12, 0x4C($s2)
    ctx->pc = 0x1473b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1473bc: 0xc0aa756  jal         func_2A9D58
    ctx->pc = 0x1473BCu;
    SET_GPR_U32(ctx, 31, 0x1473C4u);
    ctx->pc = 0x1473C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1473BCu;
    // 0x1473c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9D58u, 0x1473BCu, 0x1473C4u)) {
        return;
    }
    ctx->pc = 0x1473C4u;
label_1473c4:
    // 0x1473c4: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x1473c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_1473c8:
    // 0x1473c8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1473c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1473cc: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1473ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1473d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1473d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1473d4: 0xae430058  sw          $v1, 0x58($s2)
    ctx->pc = 0x1473d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 3));
    // 0x1473d8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1473d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1473dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1473dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1473e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1473E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1473E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1473E0u;
        // 0x1473e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1473E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1473E8u;
    // 0x1473e8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1473e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1473ec: 0x0  nop
    ctx->pc = 0x1473ecu;
    // NOP
    ctx->pc = 0x1473f0u;
}
