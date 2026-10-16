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

// Function: sub_00283240
// Address: 0x283240 - 0x2832e0
void sub_00283240_0x283240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283240_0x283240");
#endif

    switch (ctx->pc) {
        case 0x28326cu: goto label_28326c;
        case 0x28327cu: goto label_28327c;
        case 0x2832a0u: goto label_2832a0;
        case 0x2832c4u: goto label_2832c4;
        default: break;
    }

    ctx->pc = 0x283240u;

    // 0x283240: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x283240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x283244: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x283244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x283248: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x283248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x28324c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x28324cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x283250: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x283250u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283254: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x283254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x283258: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x283258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x28325c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x28325Cu;
    {
        const bool branch_taken_0x28325c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x283260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28325Cu;
        // 0x283260: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28325c) {
            ctx->pc = 0x2832C4u;
            goto label_2832c4;
        }
    }
    ctx->pc = 0x283264u;
    // 0x283264: 0xc0a0b9c  jal         func_282E70
    ctx->pc = 0x283264u;
    SET_GPR_U32(ctx, 31, 0x28326Cu);
    ctx->pc = 0x282E70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x282E70u, 0x283264u, 0x28326Cu)) {
        return;
    }
    ctx->pc = 0x28326Cu;
label_28326c:
    // 0x28326c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x28326Cu;
    {
        const bool branch_taken_0x28326c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28326Cu;
        // 0x283270: 0x24040120  addiu       $a0, $zero, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28326c) {
            ctx->pc = 0x2832C4u;
            goto label_2832c4;
        }
    }
    ctx->pc = 0x283274u;
    // 0x283274: 0xc0895f6  jal         func_2257D8
    ctx->pc = 0x283274u;
    SET_GPR_U32(ctx, 31, 0x28327Cu);
    ctx->pc = 0x283278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283274u;
    // 0x283278: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2257D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2257D8u, 0x283274u, 0x28327Cu)) {
        return;
    }
    ctx->pc = 0x28327Cu;
label_28327c:
    // 0x28327c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x28327cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x283280: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x283280u;
    {
        const bool branch_taken_0x283280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283280u;
        // 0x283284: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283280) {
            ctx->pc = 0x283298u;
            goto label_283298;
        }
    }
    ctx->pc = 0x283288u;
    // 0x283288: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x283288u;
    {
        const bool branch_taken_0x283288 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x283288) {
            ctx->pc = 0x283298u;
            goto label_283298;
        }
    }
    ctx->pc = 0x283290u;
    // 0x283290: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x283290u;
    {
        const bool branch_taken_0x283290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283290u;
        // 0x283294: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283290) {
            ctx->pc = 0x2832B8u;
            goto label_2832b8;
        }
    }
    ctx->pc = 0x283298u;
label_283298:
    // 0x283298: 0xc0895f6  jal         func_2257D8
    ctx->pc = 0x283298u;
    SET_GPR_U32(ctx, 31, 0x2832A0u);
    ctx->pc = 0x28329Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283298u;
    // 0x28329c: 0x2404012e  addiu       $a0, $zero, 0x12E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2257D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2257D8u, 0x283298u, 0x2832A0u)) {
        return;
    }
    ctx->pc = 0x2832A0u;
label_2832a0:
    // 0x2832a0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2832a0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2832a4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2832A4u;
    {
        const bool branch_taken_0x2832a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2832A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2832A4u;
        // 0x2832a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2832a4) {
            ctx->pc = 0x2832BCu;
            goto label_2832bc;
        }
    }
    ctx->pc = 0x2832ACu;
    // 0x2832ac: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2832acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2832b0: 0x3a220003  xori        $v0, $s1, 0x3
    ctx->pc = 0x2832b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)3);
    // 0x2832b4: 0x222800b  movn        $s0, $s1, $v0
    ctx->pc = 0x2832b4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17));
label_2832b8:
    // 0x2832b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2832b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2832bc:
    // 0x2832bc: 0xc0a0e6a  jal         func_2839A8
    ctx->pc = 0x2832BCu;
    SET_GPR_U32(ctx, 31, 0x2832C4u);
    ctx->pc = 0x2832C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2832BCu;
    // 0x2832c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2839A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2839A8u, 0x2832BCu, 0x2832C4u)) {
        return;
    }
    ctx->pc = 0x2832C4u;
label_2832c4:
    // 0x2832c4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2832c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2832c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2832c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2832cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2832ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2832d0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2832d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2832d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2832d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2832d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2832D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2832DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2832D8u;
        // 0x2832dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2832D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2832E0u;
}
