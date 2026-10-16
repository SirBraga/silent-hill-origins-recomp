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

// Function: sub_002BDEC0
// Address: 0x2bdec0 - 0x2bdf78
void sub_002BDEC0_0x2bdec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BDEC0_0x2bdec0");
#endif

    switch (ctx->pc) {
        case 0x2bdf4cu: goto label_2bdf4c;
        case 0x2bdf5cu: goto label_2bdf5c;
        default: break;
    }

    ctx->pc = 0x2bdec0u;

    // 0x2bdec0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2bdec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2bdec4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2bdec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2bdec8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2bdec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2bdecc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bdeccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bded0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2bded0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2bded4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2bded4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bded8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bded8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bdedc: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x2bdedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x2bdee0: 0x8c66003c  lw          $a2, 0x3C($v1)
    ctx->pc = 0x2bdee0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x2bdee4: 0x30c20008  andi        $v0, $a2, 0x8
    ctx->pc = 0x2bdee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
    // 0x2bdee8: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x2bdee8u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2bdeec: 0x30c40010  andi        $a0, $a2, 0x10
    ctx->pc = 0x2bdeecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
    // 0x2bdef0: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2bdef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2bdef4: 0x30c50020  andi        $a1, $a2, 0x20
    ctx->pc = 0x2bdef4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32);
    // 0x2bdef8: 0x64800b  movn        $s0, $v1, $a0
    ctx->pc = 0x2bdef8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3));
    // 0x2bdefc: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x2bdefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2bdf00: 0x45800b  movn        $s0, $v0, $a1
    ctx->pc = 0x2bdf00u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2));
    // 0x2bdf04: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x2bdf04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x2bdf08: 0x30c60006  andi        $a2, $a2, 0x6
    ctx->pc = 0x2bdf08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)6);
    // 0x2bdf0c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2bdf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bdf10: 0x10c2000b  beq         $a2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2BDF10u;
    {
        const bool branch_taken_0x2bdf10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BDF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF10u;
        // 0x2bdf14: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdf10) {
            ctx->pc = 0x2BDF40u;
            goto label_2bdf40;
        }
    }
    ctx->pc = 0x2BDF18u;
    // 0x2bdf18: 0x2cc20003  sltiu       $v0, $a2, 0x3
    ctx->pc = 0x2bdf18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2bdf1c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BDF1Cu;
    {
        const bool branch_taken_0x2bdf1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BDF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF1Cu;
        // 0x2bdf20: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdf1c) {
            ctx->pc = 0x2BDF44u;
            goto label_2bdf44;
        }
    }
    ctx->pc = 0x2BDF24u;
    // 0x2bdf24: 0x10c20006  beq         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BDF24u;
    {
        const bool branch_taken_0x2bdf24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BDF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF24u;
        // 0x2bdf28: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdf24) {
            ctx->pc = 0x2BDF40u;
            goto label_2bdf40;
        }
    }
    ctx->pc = 0x2BDF2Cu;
    // 0x2bdf2c: 0x50c20005  beql        $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BDF2Cu;
    {
        const bool branch_taken_0x2bdf2c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bdf2c) {
            ctx->pc = 0x2BDF30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDF2Cu;
            // 0x2bdf30: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BDF44u;
            goto label_2bdf44;
        }
    }
    ctx->pc = 0x2BDF34u;
    // 0x2bdf34: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BDF34u;
    {
        const bool branch_taken_0x2bdf34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdf34) {
            ctx->pc = 0x2BDF44u;
            goto label_2bdf44;
        }
    }
    ctx->pc = 0x2BDF3Cu;
    // 0x2bdf3c: 0x0  nop
    ctx->pc = 0x2bdf3cu;
    // NOP
label_2bdf40:
    // 0x2bdf40: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2bdf40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2bdf44:
    // 0x2bdf44: 0xc0af550  jal         func_2BD540
    ctx->pc = 0x2BDF44u;
    SET_GPR_U32(ctx, 31, 0x2BDF4Cu);
    ctx->pc = 0x2BDF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDF44u;
    // 0x2bdf48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BD540u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2BD540u, 0x2BDF44u, 0x2BDF4Cu)) {
        return;
    }
    ctx->pc = 0x2BDF4Cu;
label_2bdf4c:
    // 0x2bdf4c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2bdf4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2bdf50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bdf50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdf54: 0xc0af646  jal         func_2BD918
    ctx->pc = 0x2BDF54u;
    SET_GPR_U32(ctx, 31, 0x2BDF5Cu);
    ctx->pc = 0x2BDF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDF54u;
    // 0x2bdf58: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BD918u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2BD918u, 0x2BDF54u, 0x2BDF5Cu)) {
        return;
    }
    ctx->pc = 0x2BDF5Cu;
label_2bdf5c:
    // 0x2bdf5c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2bdf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2bdf60: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2bdf60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bdf64: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2bdf64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bdf68: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2bdf68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bdf6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bdf6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bdf70: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDF70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF70u;
        // 0x2bdf74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDF70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDF78u;
}
