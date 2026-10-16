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

// Function: sub_00226248
// Address: 0x226248 - 0x2262b0
void sub_00226248_0x226248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226248_0x226248");
#endif

    switch (ctx->pc) {
        case 0x226248u: goto label_226248;
        case 0x22624cu: goto label_22624c;
        case 0x226250u: goto label_226250;
        case 0x226254u: goto label_226254;
        case 0x226258u: goto label_226258;
        case 0x22625cu: goto label_22625c;
        case 0x226260u: goto label_226260;
        case 0x226264u: goto label_226264;
        case 0x226268u: goto label_226268;
        case 0x22626cu: goto label_22626c;
        case 0x226270u: goto label_226270;
        case 0x226274u: goto label_226274;
        case 0x226278u: goto label_226278;
        case 0x22627cu: goto label_22627c;
        case 0x226280u: goto label_226280;
        case 0x226284u: goto label_226284;
        case 0x226288u: goto label_226288;
        case 0x22628cu: goto label_22628c;
        case 0x226290u: goto label_226290;
        case 0x226294u: goto label_226294;
        case 0x226298u: goto label_226298;
        case 0x22629cu: goto label_22629c;
        case 0x2262a0u: goto label_2262a0;
        case 0x2262a4u: goto label_2262a4;
        case 0x2262a8u: goto label_2262a8;
        case 0x2262acu: goto label_2262ac;
        default: break;
    }

    ctx->pc = 0x226248u;

label_226248:
    // 0x226248: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x226248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22624c:
    // 0x22624c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22624cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_226250:
    // 0x226250: 0x8c633e88  lw          $v1, 0x3E88($v1)
    ctx->pc = 0x226250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16008)));
label_226254:
    // 0x226254: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x226254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_226258:
    // 0x226258: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x226258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
label_22625c:
    // 0x22625c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22625cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_226260:
    // 0x226260: 0x24840fc8  addiu       $a0, $a0, 0xFC8
    ctx->pc = 0x226260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4040));
label_226264:
    // 0x226264: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x226264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_226268:
    // 0x226268: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x226268u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_22626c:
    // 0x22626c: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x22626cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
label_226270:
    // 0x226270: 0x34a5000e  ori         $a1, $a1, 0xE
    ctx->pc = 0x226270u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)14);
label_226274:
    // 0x226274: 0x40f809  jalr        $v0
label_226278:
    if (ctx->pc == 0x226278u) {
        ctx->pc = 0x226278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226274u;
        // 0x226278: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22627Cu;
        goto label_22627c;
    }
    ctx->pc = 0x226274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22627Cu);
        ctx->pc = 0x226278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226274u;
        // 0x226278: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226274u, 0x22627Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22627Cu;
label_22627c:
    // 0x22627c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22627cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_226280:
    // 0x226280: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_226284:
    if (ctx->pc == 0x226284u) {
        ctx->pc = 0x226284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226280u;
        // 0x226284: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226288u;
        goto label_226288;
    }
    ctx->pc = 0x226280u;
    {
        const bool branch_taken_0x226280 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x226284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226280u;
        // 0x226284: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226280) {
            ctx->pc = 0x226294u;
            goto label_226294;
        }
    }
    ctx->pc = 0x226288u;
label_226288:
    // 0x226288: 0xc089854  jal         func_226150
label_22628c:
    if (ctx->pc == 0x22628Cu) {
        ctx->pc = 0x22628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226288u;
        // 0x22628c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226290u;
        goto label_226290;
    }
    ctx->pc = 0x226288u;
    SET_GPR_U32(ctx, 31, 0x226290u);
    ctx->pc = 0x22628Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226288u;
    // 0x22628c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226150u, 0x226288u, 0x226290u)) {
        return;
    }
    ctx->pc = 0x226290u;
label_226290:
    // 0x226290: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x226290u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_226294:
    // 0x226294: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x226294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_226298:
    // 0x226298: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22629c:
    // 0x22629c: 0x3e00008  jr          $ra
label_2262a0:
    if (ctx->pc == 0x2262A0u) {
        ctx->pc = 0x2262A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22629Cu;
        // 0x2262a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2262A4u;
        goto label_2262a4;
    }
    ctx->pc = 0x22629Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2262A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22629Cu;
        // 0x2262a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22629Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2262A4u;
label_2262a4:
    // 0x2262a4: 0x0  nop
    ctx->pc = 0x2262a4u;
    // NOP
label_2262a8:
    // 0x2262a8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2262a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2262ac:
    // 0x2262ac: 0x0  nop
    ctx->pc = 0x2262acu;
    // NOP
    ctx->pc = 0x2262b0u;
}
