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

// Function: sub_0019AD08
// Address: 0x19ad08 - 0x19ada0
void sub_0019AD08_0x19ad08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019AD08_0x19ad08");
#endif

    switch (ctx->pc) {
        case 0x19ad28u: goto label_19ad28;
        case 0x19ad48u: goto label_19ad48;
        case 0x19ad8cu: goto label_19ad8c;
        default: break;
    }

    ctx->pc = 0x19ad08u;

    // 0x19ad08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19ad08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19ad0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19ad0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19ad10: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x19ad10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19ad14: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x19ad14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x19ad18: 0x54a20005  bnel        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19AD18u;
    {
        const bool branch_taken_0x19ad18 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x19ad18) {
            ctx->pc = 0x19AD1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19AD18u;
            // 0x19ad1c: 0x8c820084  lw          $v0, 0x84($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19AD30u;
            goto label_19ad30;
        }
    }
    ctx->pc = 0x19AD20u;
    // 0x19ad20: 0xc066b68  jal         func_19ADA0
    ctx->pc = 0x19AD20u;
    SET_GPR_U32(ctx, 31, 0x19AD28u);
    ctx->pc = 0x19ADA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19ADA0u, 0x19AD20u, 0x19AD28u)) {
        return;
    }
    ctx->pc = 0x19AD28u;
label_19ad28:
    // 0x19ad28: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x19AD28u;
    {
        const bool branch_taken_0x19ad28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD28u;
        // 0x19ad2c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ad28) {
            ctx->pc = 0x19AD90u;
            goto label_19ad90;
        }
    }
    ctx->pc = 0x19AD30u;
label_19ad30:
    // 0x19ad30: 0x54a20007  bnel        $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19AD30u;
    {
        const bool branch_taken_0x19ad30 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x19ad30) {
            ctx->pc = 0x19AD34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19AD30u;
            // 0x19ad34: 0x8c820094  lw          $v0, 0x94($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19AD50u;
            goto label_19ad50;
        }
    }
    ctx->pc = 0x19AD38u;
    // 0x19ad38: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x19ad38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
    // 0x19ad3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19ad3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ad40: 0xc066be8  jal         func_19AFA0
    ctx->pc = 0x19AD40u;
    SET_GPR_U32(ctx, 31, 0x19AD48u);
    ctx->pc = 0x19AD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AD40u;
    // 0x19ad44: 0x8c860044  lw          $a2, 0x44($a0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19AFA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19AFA0u, 0x19AD40u, 0x19AD48u)) {
        return;
    }
    ctx->pc = 0x19AD48u;
label_19ad48:
    // 0x19ad48: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x19AD48u;
    {
        const bool branch_taken_0x19ad48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD48u;
        // 0x19ad4c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ad48) {
            ctx->pc = 0x19AD90u;
            goto label_19ad90;
        }
    }
    ctx->pc = 0x19AD50u;
label_19ad50:
    // 0x19ad50: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19AD50u;
    {
        const bool branch_taken_0x19ad50 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x19ad50) {
            ctx->pc = 0x19AD54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19AD50u;
            // 0x19ad54: 0x8c82009c  lw          $v0, 0x9C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19AD64u;
            goto label_19ad64;
        }
    }
    ctx->pc = 0x19AD58u;
    // 0x19ad58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19ad58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ad5c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x19AD5Cu;
    {
        const bool branch_taken_0x19ad5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD5Cu;
        // 0x19ad60: 0xac8200a4  sw          $v0, 0xA4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ad5c) {
            ctx->pc = 0x19AD8Cu;
            goto label_19ad8c;
        }
    }
    ctx->pc = 0x19AD64u;
label_19ad64:
    // 0x19ad64: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19AD64u;
    {
        const bool branch_taken_0x19ad64 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x19AD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD64u;
        // 0x19ad68: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ad64) {
            ctx->pc = 0x19AD78u;
            goto label_19ad78;
        }
    }
    ctx->pc = 0x19AD6Cu;
    // 0x19ad6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19ad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19ad70: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19AD70u;
    {
        const bool branch_taken_0x19ad70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD70u;
        // 0x19ad74: 0xac8200a4  sw          $v0, 0xA4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ad70) {
            ctx->pc = 0x19AD8Cu;
            goto label_19ad8c;
        }
    }
    ctx->pc = 0x19AD78u;
label_19ad78:
    // 0x19ad78: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x19ad78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936704)));
    // 0x19ad7c: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19AD7Cu;
    {
        const bool branch_taken_0x19ad7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x19AD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD7Cu;
        // 0x19ad80: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ad7c) {
            ctx->pc = 0x19AD90u;
            goto label_19ad90;
        }
    }
    ctx->pc = 0x19AD84u;
    // 0x19ad84: 0xc066ae4  jal         func_19AB90
    ctx->pc = 0x19AD84u;
    SET_GPR_U32(ctx, 31, 0x19AD8Cu);
    ctx->pc = 0x19AB90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19AB90u, 0x19AD84u, 0x19AD8Cu)) {
        return;
    }
    ctx->pc = 0x19AD8Cu;
label_19ad8c:
    // 0x19ad8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19ad8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19ad90:
    // 0x19ad90: 0x3e00008  jr          $ra
    ctx->pc = 0x19AD90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD90u;
        // 0x19ad94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AD90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19AD98u;
    // 0x19ad98: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x19ad98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19ad9c: 0x0  nop
    ctx->pc = 0x19ad9cu;
    // NOP
    ctx->pc = 0x19ada0u;
}
