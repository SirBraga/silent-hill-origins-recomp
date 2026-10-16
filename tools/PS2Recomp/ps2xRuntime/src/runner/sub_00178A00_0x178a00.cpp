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

// Function: sub_00178A00
// Address: 0x178a00 - 0x178a68
void sub_00178A00_0x178a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178A00_0x178a00");
#endif

    switch (ctx->pc) {
        case 0x178a4cu: goto label_178a4c;
        case 0x178a58u: goto label_178a58;
        default: break;
    }

    ctx->pc = 0x178a00u;

    // 0x178a00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x178a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x178a04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x178a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178a08: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x178a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x178a0c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x178a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178a10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x178a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x178a14: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x178a14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178a18: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x178a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x178a1c: 0x8c8600dc  lw          $a2, 0xDC($a0)
    ctx->pc = 0x178a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x178a20: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x178a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x178a24: 0x10c30006  beq         $a2, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x178A24u;
    {
        const bool branch_taken_0x178a24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x178A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A24u;
        // 0x178a28: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178a24) {
            ctx->pc = 0x178A40u;
            goto label_178a40;
        }
    }
    ctx->pc = 0x178A2Cu;
    // 0x178a2c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x178a2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x178a30: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x178A30u;
    {
        const bool branch_taken_0x178a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x178a30) {
            ctx->pc = 0x178A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178A30u;
            // 0x178a34: 0xa6800a  movz        $s0, $a1, $a2 (Delay Slot)
            if (GPR_U64(ctx, 6) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178A44u;
            goto label_178a44;
        }
    }
    ctx->pc = 0x178A38u;
    // 0x178a38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x178A38u;
    {
        const bool branch_taken_0x178a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178a38) {
            ctx->pc = 0x178A44u;
            goto label_178a44;
        }
    }
    ctx->pc = 0x178A40u;
label_178a40:
    // 0x178a40: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x178a40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_178a44:
    // 0x178a44: 0xc05fd86  jal         func_17F618
    ctx->pc = 0x178A44u;
    SET_GPR_U32(ctx, 31, 0x178A4Cu);
    ctx->pc = 0x17F618u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F618u, 0x178A44u, 0x178A4Cu)) {
        return;
    }
    ctx->pc = 0x178A4Cu;
label_178a4c:
    // 0x178a4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x178a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178a50: 0xc079236  jal         func_1E48D8
    ctx->pc = 0x178A50u;
    SET_GPR_U32(ctx, 31, 0x178A58u);
    ctx->pc = 0x178A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178A50u;
    // 0x178a54: 0x202200b  movn        $a0, $s0, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E48D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E48D8u, 0x178A50u, 0x178A58u)) {
        return;
    }
    ctx->pc = 0x178A58u;
label_178a58:
    // 0x178a58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x178a58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178a5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178a60: 0x3e00008  jr          $ra
    ctx->pc = 0x178A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A60u;
        // 0x178a64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178A68u;
}
