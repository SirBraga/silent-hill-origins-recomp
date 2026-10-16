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

// Function: sub_0019DB38
// Address: 0x19db38 - 0x19dbc0
void sub_0019DB38_0x19db38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019DB38_0x19db38");
#endif

    switch (ctx->pc) {
        case 0x19db50u: goto label_19db50;
        case 0x19db64u: goto label_19db64;
        case 0x19db8cu: goto label_19db8c;
        case 0x19db98u: goto label_19db98;
        case 0x19dba8u: goto label_19dba8;
        default: break;
    }

    ctx->pc = 0x19db38u;

    // 0x19db38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19db38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19db3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19db3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19db40: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19db40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19db44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19db44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19db48: 0xc0a02e0  jal         func_280B80
    ctx->pc = 0x19DB48u;
    SET_GPR_U32(ctx, 31, 0x19DB50u);
    ctx->pc = 0x19DB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DB48u;
    // 0x19db4c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280B80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x280B80u, 0x19DB48u, 0x19DB50u)) {
        return;
    }
    ctx->pc = 0x19DB50u;
label_19db50:
    // 0x19db50: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19db50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19db54: 0x14430015  bne         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x19DB54u;
    {
        const bool branch_taken_0x19db54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19DB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DB54u;
        // 0x19db58: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19db54) {
            ctx->pc = 0x19DBACu;
            goto label_19dbac;
        }
    }
    ctx->pc = 0x19DB5Cu;
    // 0x19db5c: 0xc0a03a6  jal         func_280E98
    ctx->pc = 0x19DB5Cu;
    SET_GPR_U32(ctx, 31, 0x19DB64u);
    ctx->pc = 0x19DB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DB5Cu;
    // 0x19db60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280E98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x280E98u, 0x19DB5Cu, 0x19DB64u)) {
        return;
    }
    ctx->pc = 0x19DB64u;
label_19db64:
    // 0x19db64: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x19DB64u;
    {
        const bool branch_taken_0x19db64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DB64u;
        // 0x19db68: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19db64) {
            ctx->pc = 0x19DBACu;
            goto label_19dbac;
        }
    }
    ctx->pc = 0x19DB6Cu;
    // 0x19db6c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x19db6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19db70: 0x3c10006a  lui         $s0, 0x6A
    ctx->pc = 0x19db70u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
    // 0x19db74: 0x2610a460  addiu       $s0, $s0, -0x5BA0
    ctx->pc = 0x19db74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943840));
    // 0x19db78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19db78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19db7c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x19db7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x19db80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19db80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19db84: 0xc0a01bc  jal         func_2806F0
    ctx->pc = 0x19DB84u;
    SET_GPR_U32(ctx, 31, 0x19DB8Cu);
    ctx->pc = 0x19DB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DB84u;
    // 0x19db88: 0x43800b  movn        $s0, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2806F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2806F0u, 0x19DB84u, 0x19DB8Cu)) {
        return;
    }
    ctx->pc = 0x19DB8Cu;
label_19db8c:
    // 0x19db8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19db8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19db90: 0xc095f6a  jal         func_257DA8
    ctx->pc = 0x19DB90u;
    SET_GPR_U32(ctx, 31, 0x19DB98u);
    ctx->pc = 0x19DB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DB90u;
    // 0x19db94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257DA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257DA8u, 0x19DB90u, 0x19DB98u)) {
        return;
    }
    ctx->pc = 0x19DB98u;
label_19db98:
    // 0x19db98: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x19db98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x19db9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19db9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dba0: 0xc041e86  jal         func_107A18
    ctx->pc = 0x19DBA0u;
    SET_GPR_U32(ctx, 31, 0x19DBA8u);
    ctx->pc = 0x19DBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DBA0u;
    // 0x19dba4: 0x2484a4b8  addiu       $a0, $a0, -0x5B48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107A18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107A18u, 0x19DBA0u, 0x19DBA8u)) {
        return;
    }
    ctx->pc = 0x19DBA8u;
label_19dba8:
    // 0x19dba8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19dba8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19dbac:
    // 0x19dbac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19dbacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19dbb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19dbb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19dbb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19dbb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19dbb8: 0x3e00008  jr          $ra
    ctx->pc = 0x19DBB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DBB8u;
        // 0x19dbbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DBB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DBC0u;
}
