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

// Function: sub_001EE8B8
// Address: 0x1ee8b8 - 0x1ee910
void sub_001EE8B8_0x1ee8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EE8B8_0x1ee8b8");
#endif

    switch (ctx->pc) {
        case 0x1ee8b8u: goto label_1ee8b8;
        case 0x1ee8bcu: goto label_1ee8bc;
        case 0x1ee8c0u: goto label_1ee8c0;
        case 0x1ee8c4u: goto label_1ee8c4;
        case 0x1ee8c8u: goto label_1ee8c8;
        case 0x1ee8ccu: goto label_1ee8cc;
        case 0x1ee8d0u: goto label_1ee8d0;
        case 0x1ee8d4u: goto label_1ee8d4;
        case 0x1ee8d8u: goto label_1ee8d8;
        case 0x1ee8dcu: goto label_1ee8dc;
        case 0x1ee8e0u: goto label_1ee8e0;
        case 0x1ee8e4u: goto label_1ee8e4;
        case 0x1ee8e8u: goto label_1ee8e8;
        case 0x1ee8ecu: goto label_1ee8ec;
        case 0x1ee8f0u: goto label_1ee8f0;
        case 0x1ee8f4u: goto label_1ee8f4;
        case 0x1ee8f8u: goto label_1ee8f8;
        case 0x1ee8fcu: goto label_1ee8fc;
        case 0x1ee900u: goto label_1ee900;
        case 0x1ee904u: goto label_1ee904;
        case 0x1ee908u: goto label_1ee908;
        case 0x1ee90cu: goto label_1ee90c;
        default: break;
    }

    ctx->pc = 0x1ee8b8u;

label_1ee8b8:
    // 0x1ee8b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ee8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ee8bc:
    // 0x1ee8bc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1ee8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1ee8c0:
    // 0x1ee8c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ee8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1ee8c4:
    // 0x1ee8c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ee8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ee8c8:
    // 0x1ee8c8: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x1ee8c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_1ee8cc:
    // 0x1ee8cc: 0x26100fd8  addiu       $s0, $s0, 0xFD8
    ctx->pc = 0x1ee8ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4056));
label_1ee8d0:
    // 0x1ee8d0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1ee8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ee8d4:
    // 0x1ee8d4: 0x40f809  jalr        $v0
label_1ee8d8:
    if (ctx->pc == 0x1EE8D8u) {
        ctx->pc = 0x1EE8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE8D4u;
        // 0x1ee8d8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE8DCu;
        goto label_1ee8dc;
    }
    ctx->pc = 0x1EE8D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EE8DCu);
        ctx->pc = 0x1EE8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE8D4u;
        // 0x1ee8d8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE8D4u, 0x1EE8DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EE8DCu;
label_1ee8dc:
    // 0x1ee8dc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1ee8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ee8e0:
    // 0x1ee8e0: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1ee8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1ee8e4:
    // 0x1ee8e4: 0x40f809  jalr        $v0
label_1ee8e8:
    if (ctx->pc == 0x1EE8E8u) {
        ctx->pc = 0x1EE8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE8E4u;
        // 0x1ee8e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE8ECu;
        goto label_1ee8ec;
    }
    ctx->pc = 0x1EE8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EE8ECu);
        ctx->pc = 0x1EE8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE8E4u;
        // 0x1ee8e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE8E4u, 0x1EE8ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EE8ECu;
label_1ee8ec:
    // 0x1ee8ec: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1ee8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1ee8f0:
    // 0x1ee8f0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ee8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ee8f4:
    // 0x1ee8f4: 0xc08c4aa  jal         func_2312A8
label_1ee8f8:
    if (ctx->pc == 0x1EE8F8u) {
        ctx->pc = 0x1EE8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE8F4u;
        // 0x1ee8f8: 0x8c65e80c  lw          $a1, -0x17F4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE8FCu;
        goto label_1ee8fc;
    }
    ctx->pc = 0x1EE8F4u;
    SET_GPR_U32(ctx, 31, 0x1EE8FCu);
    ctx->pc = 0x1EE8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE8F4u;
    // 0x1ee8f8: 0x8c65e80c  lw          $a1, -0x17F4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2312A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2312A8u, 0x1EE8F4u, 0x1EE8FCu)) {
        return;
    }
    ctx->pc = 0x1EE8FCu;
label_1ee8fc:
    // 0x1ee8fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ee8fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ee900:
    // 0x1ee900: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ee900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ee904:
    // 0x1ee904: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ee904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ee908:
    // 0x1ee908: 0x3e00008  jr          $ra
label_1ee90c:
    if (ctx->pc == 0x1EE90Cu) {
        ctx->pc = 0x1EE90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE908u;
        // 0x1ee90c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE910u;
        goto label_fallthrough_0x1ee908;
    }
    ctx->pc = 0x1EE908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE908u;
        // 0x1ee90c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ee908:
    ctx->pc = 0x1EE910u;
}
