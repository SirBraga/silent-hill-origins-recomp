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

// Function: sub_00150018
// Address: 0x150018 - 0x1500b0
void sub_00150018_0x150018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150018_0x150018");
#endif

    switch (ctx->pc) {
        case 0x15003cu: goto label_15003c;
        case 0x150050u: goto label_150050;
        case 0x15005cu: goto label_15005c;
        case 0x150068u: goto label_150068;
        case 0x15007cu: goto label_15007c;
        case 0x15008cu: goto label_15008c;
        case 0x15009cu: goto label_15009c;
        default: break;
    }

    ctx->pc = 0x150018u;

    // 0x150018: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x150018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15001c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x15001cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x150020: 0x14a2001e  bne         $a1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x150020u;
    {
        const bool branch_taken_0x150020 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x150024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150020u;
        // 0x150024: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150020) {
            ctx->pc = 0x15009Cu;
            goto label_15009c;
        }
    }
    ctx->pc = 0x150028u;
    // 0x150028: 0x50800011  beql        $a0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x150028u;
    {
        const bool branch_taken_0x150028 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x150028) {
            ctx->pc = 0x15002Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150028u;
            // 0x15002c: 0x3c04006c  lui         $a0, 0x6C (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150070u;
            goto label_150070;
        }
    }
    ctx->pc = 0x150030u;
    // 0x150030: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x150030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x150034: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x150034u;
    SET_GPR_U32(ctx, 31, 0x15003Cu);
    ctx->pc = 0x150038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150034u;
    // 0x150038: 0x24842288  addiu       $a0, $a0, 0x2288 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x150034u, 0x15003Cu)) {
        return;
    }
    ctx->pc = 0x15003Cu;
label_15003c:
    // 0x15003c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x15003cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x150040: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x150040u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x150044: 0x2484efb8  addiu       $a0, $a0, -0x1048
    ctx->pc = 0x150044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963128));
    // 0x150048: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x150048u;
    SET_GPR_U32(ctx, 31, 0x150050u);
    ctx->pc = 0x15004Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150048u;
    // 0x15004c: 0xac62efb0  sw          $v0, -0x1050($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963120), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x150048u, 0x150050u)) {
        return;
    }
    ctx->pc = 0x150050u;
label_150050:
    // 0x150050: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x150050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x150054: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x150054u;
    SET_GPR_U32(ctx, 31, 0x15005Cu);
    ctx->pc = 0x150058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150054u;
    // 0x150058: 0x2484efc0  addiu       $a0, $a0, -0x1040 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x150054u, 0x15005Cu)) {
        return;
    }
    ctx->pc = 0x15005Cu;
label_15005c:
    // 0x15005c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x15005cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x150060: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x150060u;
    SET_GPR_U32(ctx, 31, 0x150068u);
    ctx->pc = 0x150064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150060u;
    // 0x150064: 0x2484efc8  addiu       $a0, $a0, -0x1038 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x150060u, 0x150068u)) {
        return;
    }
    ctx->pc = 0x150068u;
label_150068:
    // 0x150068: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x150068u;
    {
        const bool branch_taken_0x150068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150068u;
        // 0x15006c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150068) {
            ctx->pc = 0x1500A0u;
            goto label_1500a0;
        }
    }
    ctx->pc = 0x150070u;
label_150070:
    // 0x150070: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x150070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x150074: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x150074u;
    SET_GPR_U32(ctx, 31, 0x15007Cu);
    ctx->pc = 0x150078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150074u;
    // 0x150078: 0x2484efc8  addiu       $a0, $a0, -0x1038 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x150074u, 0x15007Cu)) {
        return;
    }
    ctx->pc = 0x15007Cu;
label_15007c:
    // 0x15007c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x15007cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x150080: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x150080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x150084: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x150084u;
    SET_GPR_U32(ctx, 31, 0x15008Cu);
    ctx->pc = 0x150088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150084u;
    // 0x150088: 0x2484efc0  addiu       $a0, $a0, -0x1040 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x150084u, 0x15008Cu)) {
        return;
    }
    ctx->pc = 0x15008Cu;
label_15008c:
    // 0x15008c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x15008cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x150090: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x150090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x150094: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x150094u;
    SET_GPR_U32(ctx, 31, 0x15009Cu);
    ctx->pc = 0x150098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150094u;
    // 0x150098: 0x2484efb8  addiu       $a0, $a0, -0x1048 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x150094u, 0x15009Cu)) {
        return;
    }
    ctx->pc = 0x15009Cu;
label_15009c:
    // 0x15009c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15009cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1500a0:
    // 0x1500a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1500A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1500A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1500A0u;
        // 0x1500a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1500A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1500A8u;
    // 0x1500a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1500a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1500ac: 0x0  nop
    ctx->pc = 0x1500acu;
    // NOP
    ctx->pc = 0x1500b0u;
}
