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

// Function: sub_0025EA08
// Address: 0x25ea08 - 0x25ea78
void sub_0025EA08_0x25ea08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025EA08_0x25ea08");
#endif

    switch (ctx->pc) {
        case 0x25ea2cu: goto label_25ea2c;
        case 0x25ea48u: goto label_25ea48;
        case 0x25ea64u: goto label_25ea64;
        default: break;
    }

    ctx->pc = 0x25ea08u;

    // 0x25ea08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25ea08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25ea0c: 0x8f838618  lw          $v1, -0x79E8($gp)
    ctx->pc = 0x25ea0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936088)));
    // 0x25ea10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25ea10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25ea14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25ea14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25ea18: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x25ea18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x25ea1c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25EA1Cu;
    {
        const bool branch_taken_0x25ea1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA1Cu;
        // 0x25ea20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ea1c) {
            ctx->pc = 0x25EA50u;
            goto label_25ea50;
        }
    }
    ctx->pc = 0x25EA24u;
    // 0x25ea24: 0xc096dde  jal         func_25B778
    ctx->pc = 0x25EA24u;
    SET_GPR_U32(ctx, 31, 0x25EA2Cu);
    ctx->pc = 0x25B778u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25B778u, 0x25EA24u, 0x25EA2Cu)) {
        return;
    }
    ctx->pc = 0x25EA2Cu;
label_25ea2c:
    // 0x25ea2c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x25EA2Cu;
    {
        const bool branch_taken_0x25ea2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA2Cu;
        // 0x25ea30: 0x8f828618  lw          $v0, -0x79E8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ea2c) {
            ctx->pc = 0x25EA64u;
            goto label_25ea64;
        }
    }
    ctx->pc = 0x25EA34u;
    // 0x25ea34: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x25ea34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x25ea38: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x25EA38u;
    {
        const bool branch_taken_0x25ea38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA38u;
        // 0x25ea3c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ea38) {
            ctx->pc = 0x25EA68u;
            goto label_25ea68;
        }
    }
    ctx->pc = 0x25EA40u;
    // 0x25ea40: 0xc097a42  jal         func_25E908
    ctx->pc = 0x25EA40u;
    SET_GPR_U32(ctx, 31, 0x25EA48u);
    ctx->pc = 0x25EA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EA40u;
    // 0x25ea44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E908u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E908u, 0x25EA40u, 0x25EA48u)) {
        return;
    }
    ctx->pc = 0x25EA48u;
label_25ea48:
    // 0x25ea48: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25EA48u;
    {
        const bool branch_taken_0x25ea48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA48u;
        // 0x25ea4c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ea48) {
            ctx->pc = 0x25EA68u;
            goto label_25ea68;
        }
    }
    ctx->pc = 0x25EA50u;
label_25ea50:
    // 0x25ea50: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x25ea50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x25ea54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25EA54u;
    {
        const bool branch_taken_0x25ea54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA54u;
        // 0x25ea58: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ea54) {
            ctx->pc = 0x25EA68u;
            goto label_25ea68;
        }
    }
    ctx->pc = 0x25EA5Cu;
    // 0x25ea5c: 0xc097a42  jal         func_25E908
    ctx->pc = 0x25EA5Cu;
    SET_GPR_U32(ctx, 31, 0x25EA64u);
    ctx->pc = 0x25EA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EA5Cu;
    // 0x25ea60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E908u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E908u, 0x25EA5Cu, 0x25EA64u)) {
        return;
    }
    ctx->pc = 0x25EA64u;
label_25ea64:
    // 0x25ea64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25ea64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25ea68:
    // 0x25ea68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25ea68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ea6c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25ea6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ea70: 0x3e00008  jr          $ra
    ctx->pc = 0x25EA70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA70u;
        // 0x25ea74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EA70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EA78u;
}
