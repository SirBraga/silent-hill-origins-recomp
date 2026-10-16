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

// Function: sub_00276930
// Address: 0x276930 - 0x2769a8
void sub_00276930_0x276930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276930_0x276930");
#endif

    switch (ctx->pc) {
        case 0x276958u: goto label_276958;
        case 0x27696cu: goto label_27696c;
        case 0x276984u: goto label_276984;
        default: break;
    }

    ctx->pc = 0x276930u;

    // 0x276930: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x276930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x276934: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x276934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x276938: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x276938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x27693c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27693cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x276940: 0xc78821  addu        $s1, $a2, $a3
    ctx->pc = 0x276940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x276944: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x276944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x276948: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x276948u;
    {
        const bool branch_taken_0x276948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276948u;
        // 0x27694c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276948) {
            ctx->pc = 0x276990u;
            goto label_276990;
        }
    }
    ctx->pc = 0x276950u;
    // 0x276950: 0xc0895e2  jal         func_225788
    ctx->pc = 0x276950u;
    SET_GPR_U32(ctx, 31, 0x276958u);
    ctx->pc = 0x225788u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225788u, 0x276950u, 0x276958u)) {
        return;
    }
    ctx->pc = 0x276958u;
label_276958:
    // 0x276958: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x276958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x27695c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27695cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276960: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x276960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276964: 0xc092782  jal         func_249E08
    ctx->pc = 0x276964u;
    SET_GPR_U32(ctx, 31, 0x27696Cu);
    ctx->pc = 0x276968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276964u;
    // 0x276968: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x276964u, 0x27696Cu)) {
        return;
    }
    ctx->pc = 0x27696Cu;
label_27696c:
    // 0x27696c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x27696Cu;
    {
        const bool branch_taken_0x27696c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27696c) {
            ctx->pc = 0x276970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27696Cu;
            // 0x276970: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27697Cu;
            goto label_27697c;
        }
    }
    ctx->pc = 0x276974u;
    // 0x276974: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x276974u;
    {
        const bool branch_taken_0x276974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276974u;
        // 0x276978: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276974) {
            ctx->pc = 0x276994u;
            goto label_276994;
        }
    }
    ctx->pc = 0x27697Cu;
label_27697c:
    // 0x27697c: 0xc09f39a  jal         func_27CE68
    ctx->pc = 0x27697Cu;
    SET_GPR_U32(ctx, 31, 0x276984u);
    ctx->pc = 0x276980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27697Cu;
    // 0x276980: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27CE68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27CE68u, 0x27697Cu, 0x276984u)) {
        return;
    }
    ctx->pc = 0x276984u;
label_276984:
    // 0x276984: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x276984u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276988: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x276988u;
    {
        const bool branch_taken_0x276988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27698Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276988u;
        // 0x27698c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276988) {
            ctx->pc = 0x276994u;
            goto label_276994;
        }
    }
    ctx->pc = 0x276990u;
label_276990:
    // 0x276990: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x276990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_276994:
    // 0x276994: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x276994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x276998: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x276998u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27699c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27699cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2769a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2769A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2769A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2769A0u;
        // 0x2769a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2769A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2769A8u;
}
