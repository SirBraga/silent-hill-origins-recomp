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

// Function: sub_0030D4B8
// Address: 0x30d4b8 - 0x30d598
void sub_0030D4B8_0x30d4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D4B8_0x30d4b8");
#endif

    switch (ctx->pc) {
        case 0x30d4ecu: goto label_30d4ec;
        case 0x30d500u: goto label_30d500;
        case 0x30d524u: goto label_30d524;
        case 0x30d540u: goto label_30d540;
        default: break;
    }

    ctx->pc = 0x30d4b8u;

    // 0x30d4b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30d4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30d4bc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x30d4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x30d4c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30d4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x30d4c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30d4c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d4c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30d4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30d4cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30d4ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d4d0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x30d4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x30d4d4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30d4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30d4d8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30D4D8u;
    {
        const bool branch_taken_0x30d4d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D4D8u;
        // 0x30d4dc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d4d8) {
            ctx->pc = 0x30D4F8u;
            goto label_30d4f8;
        }
    }
    ctx->pc = 0x30D4E0u;
    // 0x30d4e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x30d4e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d4e4: 0xc092782  jal         func_249E08
    ctx->pc = 0x30D4E4u;
    SET_GPR_U32(ctx, 31, 0x30D4ECu);
    ctx->pc = 0x30D4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D4E4u;
    // 0x30d4e8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30D4E4u, 0x30D4ECu)) {
        return;
    }
    ctx->pc = 0x30D4ECu;
label_30d4ec:
    // 0x30d4ec: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x30D4ECu;
    {
        const bool branch_taken_0x30d4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D4ECu;
        // 0x30d4f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d4ec) {
            ctx->pc = 0x30D580u;
            goto label_30d580;
        }
    }
    ctx->pc = 0x30D4F4u;
    // 0x30d4f4: 0x0  nop
    ctx->pc = 0x30d4f4u;
    // NOP
label_30d4f8:
    // 0x30d4f8: 0xc0aa2e6  jal         func_2A8B98
    ctx->pc = 0x30D4F8u;
    SET_GPR_U32(ctx, 31, 0x30D500u);
    ctx->pc = 0x30D4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D4F8u;
    // 0x30d4fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A8B98u, 0x30D4F8u, 0x30D500u)) {
        return;
    }
    ctx->pc = 0x30D500u;
label_30d500:
    // 0x30d500: 0x27b10004  addiu       $s1, $sp, 0x4
    ctx->pc = 0x30d500u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x30d504: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x30d504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x30d508: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x30d508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30d50c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30d50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30d510: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x30D510u;
    {
        const bool branch_taken_0x30d510 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D510u;
        // 0x30d514: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d510) {
            ctx->pc = 0x30D548u;
            goto label_30d548;
        }
    }
    ctx->pc = 0x30D518u;
    // 0x30d518: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x30d518u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x30d51c: 0xc092782  jal         func_249E08
    ctx->pc = 0x30D51Cu;
    SET_GPR_U32(ctx, 31, 0x30D524u);
    ctx->pc = 0x30D520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D51Cu;
    // 0x30d520: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30D51Cu, 0x30D524u)) {
        return;
    }
    ctx->pc = 0x30D524u;
label_30d524:
    // 0x30d524: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x30D524u;
    {
        const bool branch_taken_0x30d524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D524u;
        // 0x30d528: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d524) {
            ctx->pc = 0x30D560u;
            goto label_30d560;
        }
    }
    ctx->pc = 0x30D52Cu;
    // 0x30d52c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30d52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30d530: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30D530u;
    {
        const bool branch_taken_0x30d530 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D530u;
        // 0x30d534: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d530) {
            ctx->pc = 0x30D548u;
            goto label_30d548;
        }
    }
    ctx->pc = 0x30D538u;
    // 0x30d538: 0xc09275c  jal         func_249D70
    ctx->pc = 0x30D538u;
    SET_GPR_U32(ctx, 31, 0x30D540u);
    ctx->pc = 0x30D53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D538u;
    // 0x30d53c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249D70u, 0x30D538u, 0x30D540u)) {
        return;
    }
    ctx->pc = 0x30D540u;
label_30d540:
    // 0x30d540: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30D540u;
    {
        const bool branch_taken_0x30d540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D540u;
        // 0x30d544: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d540) {
            ctx->pc = 0x30D560u;
            goto label_30d560;
        }
    }
    ctx->pc = 0x30D548u;
label_30d548:
    // 0x30d548: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30D548u;
    {
        const bool branch_taken_0x30d548 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D548u;
        // 0x30d54c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d548) {
            ctx->pc = 0x30D560u;
            goto label_30d560;
        }
    }
    ctx->pc = 0x30D550u;
    // 0x30d550: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30d550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30d554: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30d554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30d558: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30d558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30d55c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30d55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30d560:
    // 0x30d560: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30D560u;
    {
        const bool branch_taken_0x30d560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D560u;
        // 0x30d564: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d560) {
            ctx->pc = 0x30D580u;
            goto label_30d580;
        }
    }
    ctx->pc = 0x30D568u;
    // 0x30d568: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30D568u;
    {
        const bool branch_taken_0x30d568 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D568u;
        // 0x30d56c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d568) {
            ctx->pc = 0x30D580u;
            goto label_30d580;
        }
    }
    ctx->pc = 0x30D570u;
    // 0x30d570: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30d570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30d574: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x30d574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x30d578: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30d578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30d57c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30d57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30d580:
    // 0x30d580: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x30d580u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30d584: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x30d584u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30d588: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30d588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30d58c: 0x3e00008  jr          $ra
    ctx->pc = 0x30D58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D58Cu;
        // 0x30d590: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D58Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D594u;
    // 0x30d594: 0x0  nop
    ctx->pc = 0x30d594u;
    // NOP
    ctx->pc = 0x30d598u;
}
