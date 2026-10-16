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

// Function: sub_00252CB8
// Address: 0x252cb8 - 0x252d20
void sub_00252CB8_0x252cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252CB8_0x252cb8");
#endif

    switch (ctx->pc) {
        case 0x252cb8u: goto label_252cb8;
        case 0x252cbcu: goto label_252cbc;
        case 0x252cc0u: goto label_252cc0;
        case 0x252cc4u: goto label_252cc4;
        case 0x252cc8u: goto label_252cc8;
        case 0x252cccu: goto label_252ccc;
        case 0x252cd0u: goto label_252cd0;
        case 0x252cd4u: goto label_252cd4;
        case 0x252cd8u: goto label_252cd8;
        case 0x252cdcu: goto label_252cdc;
        case 0x252ce0u: goto label_252ce0;
        case 0x252ce4u: goto label_252ce4;
        case 0x252ce8u: goto label_252ce8;
        case 0x252cecu: goto label_252cec;
        case 0x252cf0u: goto label_252cf0;
        case 0x252cf4u: goto label_252cf4;
        case 0x252cf8u: goto label_252cf8;
        case 0x252cfcu: goto label_252cfc;
        case 0x252d00u: goto label_252d00;
        case 0x252d04u: goto label_252d04;
        case 0x252d08u: goto label_252d08;
        case 0x252d0cu: goto label_252d0c;
        case 0x252d10u: goto label_252d10;
        case 0x252d14u: goto label_252d14;
        case 0x252d18u: goto label_252d18;
        case 0x252d1cu: goto label_252d1c;
        default: break;
    }

    ctx->pc = 0x252cb8u;

label_252cb8:
    // 0x252cb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x252cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_252cbc:
    // 0x252cbc: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x252cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_252cc0:
    // 0x252cc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x252cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_252cc4:
    // 0x252cc4: 0x8c435620  lw          $v1, 0x5620($v0)
    ctx->pc = 0x252cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22048)));
label_252cc8:
    // 0x252cc8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x252cc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_252ccc:
    // 0x252ccc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x252cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_252cd0:
    // 0x252cd0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x252cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_252cd4:
    // 0x252cd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x252cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_252cd8:
    // 0x252cd8: 0x2238021  addu        $s0, $s1, $v1
    ctx->pc = 0x252cd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_252cdc:
    // 0x252cdc: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x252cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_252ce0:
    // 0x252ce0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x252ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_252ce4:
    // 0x252ce4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_252ce8:
    if (ctx->pc == 0x252CE8u) {
        ctx->pc = 0x252CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252CE4u;
        // 0x252ce8: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252CECu;
        goto label_252cec;
    }
    ctx->pc = 0x252CE4u;
    {
        const bool branch_taken_0x252ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252CE4u;
        // 0x252ce8: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252ce4) {
            ctx->pc = 0x252D04u;
            goto label_252d04;
        }
    }
    ctx->pc = 0x252CECu;
label_252cec:
    // 0x252cec: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x252cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_252cf0:
    // 0x252cf0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x252cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_252cf4:
    // 0x252cf4: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x252cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_252cf8:
    // 0x252cf8: 0x40f809  jalr        $v0
label_252cfc:
    if (ctx->pc == 0x252CFCu) {
        ctx->pc = 0x252D00u;
        goto label_252d00;
    }
    ctx->pc = 0x252CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x252D00u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252CF8u, 0x252D00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x252D00u;
label_252d00:
    // 0x252d00: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x252d00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_252d04:
    // 0x252d04: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x252d04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_252d08:
    // 0x252d08: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x252d08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_252d0c:
    // 0x252d0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x252d0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_252d10:
    // 0x252d10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x252d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_252d14:
    // 0x252d14: 0x3e00008  jr          $ra
label_252d18:
    if (ctx->pc == 0x252D18u) {
        ctx->pc = 0x252D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252D14u;
        // 0x252d18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252D1Cu;
        goto label_252d1c;
    }
    ctx->pc = 0x252D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252D14u;
        // 0x252d18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252D1Cu;
label_252d1c:
    // 0x252d1c: 0x0  nop
    ctx->pc = 0x252d1cu;
    // NOP
    ctx->pc = 0x252d20u;
}
