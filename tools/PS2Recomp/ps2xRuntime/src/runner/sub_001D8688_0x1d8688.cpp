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

// Function: sub_001D8688
// Address: 0x1d8688 - 0x1d8718
void sub_001D8688_0x1d8688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8688_0x1d8688");
#endif

    switch (ctx->pc) {
        case 0x1d86b4u: goto label_1d86b4;
        case 0x1d86ccu: goto label_1d86cc;
        case 0x1d86e4u: goto label_1d86e4;
        case 0x1d86f4u: goto label_1d86f4;
        case 0x1d8704u: goto label_1d8704;
        default: break;
    }

    ctx->pc = 0x1d8688u;

    // 0x1d8688: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d8688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d868c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d868cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d8690: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d8690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d8694: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d8694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d8698: 0x3c10006a  lui         $s0, 0x6A
    ctx->pc = 0x1d8698u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
    // 0x1d869c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d869cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d86a0: 0x261018f8  addiu       $s0, $s0, 0x18F8
    ctx->pc = 0x1d86a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6392));
    // 0x1d86a4: 0x24848978  addiu       $a0, $a0, -0x7688
    ctx->pc = 0x1d86a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936952));
    // 0x1d86a8: 0x24a518e8  addiu       $a1, $a1, 0x18E8
    ctx->pc = 0x1d86a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6376));
    // 0x1d86ac: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1D86ACu;
    SET_GPR_U32(ctx, 31, 0x1D86B4u);
    ctx->pc = 0x1D86B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D86ACu;
    // 0x1d86b0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1D86ACu, 0x1D86B4u)) {
        return;
    }
    ctx->pc = 0x1D86B4u;
label_1d86b4:
    // 0x1d86b4: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d86b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d86b8: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d86b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d86bc: 0x24848980  addiu       $a0, $a0, -0x7680
    ctx->pc = 0x1d86bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936960));
    // 0x1d86c0: 0x24a51908  addiu       $a1, $a1, 0x1908
    ctx->pc = 0x1d86c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6408));
    // 0x1d86c4: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1D86C4u;
    SET_GPR_U32(ctx, 31, 0x1D86CCu);
    ctx->pc = 0x1D86C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D86C4u;
    // 0x1d86c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1D86C4u, 0x1D86CCu)) {
        return;
    }
    ctx->pc = 0x1D86CCu;
label_1d86cc:
    // 0x1d86cc: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d86ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d86d0: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d86d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d86d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d86d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d86d8: 0x24a51928  addiu       $a1, $a1, 0x1928
    ctx->pc = 0x1d86d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6440));
    // 0x1d86dc: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1D86DCu;
    SET_GPR_U32(ctx, 31, 0x1D86E4u);
    ctx->pc = 0x1D86E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D86DCu;
    // 0x1d86e0: 0x24848998  addiu       $a0, $a0, -0x7668 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1D86DCu, 0x1D86E4u)) {
        return;
    }
    ctx->pc = 0x1D86E4u;
label_1d86e4:
    // 0x1d86e4: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1d86e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1d86e8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1d86e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d86ec: 0xc08c530  jal         func_2314C0
    ctx->pc = 0x1D86ECu;
    SET_GPR_U32(ctx, 31, 0x1D86F4u);
    ctx->pc = 0x1D86F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D86ECu;
    // 0x1d86f0: 0x24a589bc  addiu       $a1, $a1, -0x7644 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937020));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2314C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2314C0u, 0x1D86ECu, 0x1D86F4u)) {
        return;
    }
    ctx->pc = 0x1D86F4u;
label_1d86f4:
    // 0x1d86f4: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1d86f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1d86f8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1d86f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d86fc: 0xc08c530  jal         func_2314C0
    ctx->pc = 0x1D86FCu;
    SET_GPR_U32(ctx, 31, 0x1D8704u);
    ctx->pc = 0x1D8700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D86FCu;
    // 0x1d8700: 0x24a589c0  addiu       $a1, $a1, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2314C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2314C0u, 0x1D86FCu, 0x1D8704u)) {
        return;
    }
    ctx->pc = 0x1D8704u;
label_1d8704:
    // 0x1d8704: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d8704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8708: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d870c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D870Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D870Cu;
        // 0x1d8710: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D870Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8714u;
    // 0x1d8714: 0x0  nop
    ctx->pc = 0x1d8714u;
    // NOP
    ctx->pc = 0x1d8718u;
}
