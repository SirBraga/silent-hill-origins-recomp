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

// Function: sub_0017D520
// Address: 0x17d520 - 0x17d5a8
void sub_0017D520_0x17d520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D520_0x17d520");
#endif

    switch (ctx->pc) {
        case 0x17d534u: goto label_17d534;
        case 0x17d558u: goto label_17d558;
        case 0x17d574u: goto label_17d574;
        case 0x17d590u: goto label_17d590;
        default: break;
    }

    ctx->pc = 0x17d520u;

    // 0x17d520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17d520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17d524: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17d524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17d528: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17d528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17d52c: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x17D52Cu;
    SET_GPR_U32(ctx, 31, 0x17D534u);
    ctx->pc = 0x17D530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D52Cu;
    // 0x17d530: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x17D52Cu, 0x17D534u)) {
        return;
    }
    ctx->pc = 0x17D534u;
label_17d534:
    // 0x17d534: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x17d534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x17d538: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x17d538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x17d53c: 0x24637468  addiu       $v1, $v1, 0x7468
    ctx->pc = 0x17d53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29800));
    // 0x17d540: 0x24427488  addiu       $v0, $v0, 0x7488
    ctx->pc = 0x17d540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29832));
    // 0x17d544: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x17d544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x17d548: 0x26040048  addiu       $a0, $s0, 0x48
    ctx->pc = 0x17d548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x17d54c: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x17d54cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x17d550: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x17D550u;
    SET_GPR_U32(ctx, 31, 0x17D558u);
    ctx->pc = 0x17D554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D550u;
    // 0x17d554: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x17D550u, 0x17D558u)) {
        return;
    }
    ctx->pc = 0x17D558u;
label_17d558:
    // 0x17d558: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17d558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17d55c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x17d55cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x17d560: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x17d560u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x17d564: 0x2484f948  addiu       $a0, $a0, -0x6B8
    ctx->pc = 0x17d564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965576));
    // 0x17d568: 0x24a57430  addiu       $a1, $a1, 0x7430
    ctx->pc = 0x17d568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29744));
    // 0x17d56c: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x17D56Cu;
    SET_GPR_U32(ctx, 31, 0x17D574u);
    ctx->pc = 0x17D570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D56Cu;
    // 0x17d570: 0x24c67440  addiu       $a2, $a2, 0x7440 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x17D56Cu, 0x17D574u)) {
        return;
    }
    ctx->pc = 0x17D574u;
label_17d574:
    // 0x17d574: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17d574u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17d578: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x17d578u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x17d57c: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x17d57cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x17d580: 0x2484f950  addiu       $a0, $a0, -0x6B0
    ctx->pc = 0x17d580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965584));
    // 0x17d584: 0x24a57448  addiu       $a1, $a1, 0x7448
    ctx->pc = 0x17d584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29768));
    // 0x17d588: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x17D588u;
    SET_GPR_U32(ctx, 31, 0x17D590u);
    ctx->pc = 0x17D58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D588u;
    // 0x17d58c: 0x24c67458  addiu       $a2, $a2, 0x7458 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x17D588u, 0x17D590u)) {
        return;
    }
    ctx->pc = 0x17D590u;
label_17d590:
    // 0x17d590: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17d590u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d594: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17d594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d598: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17d598u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d59c: 0x3e00008  jr          $ra
    ctx->pc = 0x17D59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D59Cu;
        // 0x17d5a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D59Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D5A4u;
    // 0x17d5a4: 0x0  nop
    ctx->pc = 0x17d5a4u;
    // NOP
    ctx->pc = 0x17d5a8u;
}
