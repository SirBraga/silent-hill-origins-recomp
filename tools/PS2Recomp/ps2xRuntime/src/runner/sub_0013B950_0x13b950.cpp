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

// Function: sub_0013B950
// Address: 0x13b950 - 0x13b9b8
void sub_0013B950_0x13b950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B950_0x13b950");
#endif

    switch (ctx->pc) {
        case 0x13b950u: goto label_13b950;
        case 0x13b954u: goto label_13b954;
        case 0x13b958u: goto label_13b958;
        case 0x13b95cu: goto label_13b95c;
        case 0x13b960u: goto label_13b960;
        case 0x13b964u: goto label_13b964;
        case 0x13b968u: goto label_13b968;
        case 0x13b96cu: goto label_13b96c;
        case 0x13b970u: goto label_13b970;
        case 0x13b974u: goto label_13b974;
        case 0x13b978u: goto label_13b978;
        case 0x13b97cu: goto label_13b97c;
        case 0x13b980u: goto label_13b980;
        case 0x13b984u: goto label_13b984;
        case 0x13b988u: goto label_13b988;
        case 0x13b98cu: goto label_13b98c;
        case 0x13b990u: goto label_13b990;
        case 0x13b994u: goto label_13b994;
        case 0x13b998u: goto label_13b998;
        case 0x13b99cu: goto label_13b99c;
        case 0x13b9a0u: goto label_13b9a0;
        case 0x13b9a4u: goto label_13b9a4;
        case 0x13b9a8u: goto label_13b9a8;
        case 0x13b9acu: goto label_13b9ac;
        case 0x13b9b0u: goto label_13b9b0;
        case 0x13b9b4u: goto label_13b9b4;
        default: break;
    }

    ctx->pc = 0x13b950u;

label_13b950:
    // 0x13b950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13b950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_13b954:
    // 0x13b954: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13b954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_13b958:
    // 0x13b958: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13b958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13b95c:
    // 0x13b95c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13b95cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13b960:
    // 0x13b960: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13b960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13b964:
    // 0x13b964: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_13b968:
    if (ctx->pc == 0x13B968u) {
        ctx->pc = 0x13B968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B964u;
        // 0x13b968: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B96Cu;
        goto label_13b96c;
    }
    ctx->pc = 0x13B964u;
    {
        const bool branch_taken_0x13b964 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B964u;
        // 0x13b968: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b964) {
            ctx->pc = 0x13B9A0u;
            goto label_13b9a0;
        }
    }
    ctx->pc = 0x13B96Cu;
label_13b96c:
    // 0x13b96c: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x13b96cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
label_13b970:
    // 0x13b970: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x13b970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_13b974:
    // 0x13b974: 0x8e2500c4  lw          $a1, 0xC4($s1)
    ctx->pc = 0x13b974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_13b978:
    // 0x13b978: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x13b978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13b97c:
    // 0x13b97c: 0xc05ee90  jal         func_17BA40
label_13b980:
    if (ctx->pc == 0x13B980u) {
        ctx->pc = 0x13B980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B97Cu;
        // 0x13b980: 0x8c44870c  lw          $a0, -0x78F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B984u;
        goto label_13b984;
    }
    ctx->pc = 0x13B97Cu;
    SET_GPR_U32(ctx, 31, 0x13B984u);
    ctx->pc = 0x13B980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B97Cu;
    // 0x13b980: 0x8c44870c  lw          $a0, -0x78F4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BA40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17BA40u, 0x13B97Cu, 0x13B984u)) {
        return;
    }
    ctx->pc = 0x13B984u;
label_13b984:
    // 0x13b984: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x13b984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_13b988:
    // 0x13b988: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13b988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13b98c:
    // 0x13b98c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x13b98cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_13b990:
    // 0x13b990: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x13b990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_13b994:
    // 0x13b994: 0x40f809  jalr        $v0
label_13b998:
    if (ctx->pc == 0x13B998u) {
        ctx->pc = 0x13B998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B994u;
        // 0x13b998: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B99Cu;
        goto label_13b99c;
    }
    ctx->pc = 0x13B994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13B99Cu);
        ctx->pc = 0x13B998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B994u;
        // 0x13b998: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B994u, 0x13B99Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13B99Cu;
label_13b99c:
    // 0x13b99c: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x13b99cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
label_13b9a0:
    // 0x13b9a0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13b9a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13b9a4:
    // 0x13b9a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13b9a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13b9a8:
    // 0x13b9a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13b9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13b9ac:
    // 0x13b9ac: 0x3e00008  jr          $ra
label_13b9b0:
    if (ctx->pc == 0x13B9B0u) {
        ctx->pc = 0x13B9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B9ACu;
        // 0x13b9b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B9B4u;
        goto label_13b9b4;
    }
    ctx->pc = 0x13B9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B9ACu;
        // 0x13b9b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B9ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B9B4u;
label_13b9b4:
    // 0x13b9b4: 0x0  nop
    ctx->pc = 0x13b9b4u;
    // NOP
    ctx->pc = 0x13b9b8u;
}
