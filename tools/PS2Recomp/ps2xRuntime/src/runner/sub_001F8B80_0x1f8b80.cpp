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

// Function: sub_001F8B80
// Address: 0x1f8b80 - 0x1f8c00
void sub_001F8B80_0x1f8b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8B80_0x1f8b80");
#endif

    switch (ctx->pc) {
        case 0x1f8ba4u: goto label_1f8ba4;
        case 0x1f8bb8u: goto label_1f8bb8;
        case 0x1f8be4u: goto label_1f8be4;
        default: break;
    }

    ctx->pc = 0x1f8b80u;

    // 0x1f8b80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f8b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f8b84: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1f8b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1f8b88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f8b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f8b8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f8b8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8b90: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1f8b90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8b94: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f8b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1f8b98: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f8b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f8b9c: 0xc07e2be  jal         func_1F8AF8
    ctx->pc = 0x1F8B9Cu;
    SET_GPR_U32(ctx, 31, 0x1F8BA4u);
    ctx->pc = 0x1F8BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8B9Cu;
    // 0x1f8ba0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8AF8u, 0x1F8B9Cu, 0x1F8BA4u)) {
        return;
    }
    ctx->pc = 0x1F8BA4u;
label_1f8ba4:
    // 0x1f8ba4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f8ba4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8ba8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f8ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8bac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f8bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8bb0: 0xc07e2be  jal         func_1F8AF8
    ctx->pc = 0x1F8BB0u;
    SET_GPR_U32(ctx, 31, 0x1F8BB8u);
    ctx->pc = 0x1F8BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8BB0u;
    // 0x1f8bb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8AF8u, 0x1F8BB0u, 0x1F8BB8u)) {
        return;
    }
    ctx->pc = 0x1F8BB8u;
label_1f8bb8:
    // 0x1f8bb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f8bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8bbc: 0x2a22001f  slti        $v0, $s1, 0x1F
    ctx->pc = 0x1f8bbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1f8bc0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F8BC0u;
    {
        const bool branch_taken_0x1f8bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f8bc0) {
            ctx->pc = 0x1F8BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8BC0u;
            // 0x1f8bc4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8BDCu;
            goto label_1f8bdc;
        }
    }
    ctx->pc = 0x1F8BC8u;
    // 0x1f8bc8: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x1f8bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1f8bcc: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1f8bccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f8bd0: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x1f8bd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1f8bd4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1f8bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f8bd8: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x1f8bd8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3));
label_1f8bdc:
    // 0x1f8bdc: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x1F8BDCu;
    SET_GPR_U32(ctx, 31, 0x1F8BE4u);
    ctx->pc = 0x1F8BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8BDCu;
    // 0x1f8be0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x1F8BDCu, 0x1F8BE4u)) {
        return;
    }
    ctx->pc = 0x1F8BE4u;
label_1f8be4:
    // 0x1f8be4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f8be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8be8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f8be8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8bec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1f8becu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f8bf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f8bf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8BF4u;
        // 0x1f8bf8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8BFCu;
    // 0x1f8bfc: 0x0  nop
    ctx->pc = 0x1f8bfcu;
    // NOP
    ctx->pc = 0x1f8c00u;
}
