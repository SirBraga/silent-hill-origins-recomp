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

// Function: sub_00325000
// Address: 0x325000 - 0x325070
void sub_00325000_0x325000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325000_0x325000");
#endif

    switch (ctx->pc) {
        case 0x32501cu: goto label_32501c;
        case 0x325024u: goto label_325024;
        case 0x325038u: goto label_325038;
        case 0x325054u: goto label_325054;
        default: break;
    }

    ctx->pc = 0x325000u;

    // 0x325000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x325000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x325004: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x325004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x325008: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x325008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x32500c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32500cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325010: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x325010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x325014: 0xc0c9384  jal         func_324E10
    ctx->pc = 0x325014u;
    SET_GPR_U32(ctx, 31, 0x32501Cu);
    ctx->pc = 0x325018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325014u;
    // 0x325018: 0x3c110068  lui         $s1, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)104 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324E10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324E10u, 0x325014u, 0x32501Cu)) {
        return;
    }
    ctx->pc = 0x32501Cu;
label_32501c:
    // 0x32501c: 0xc0c84d8  jal         func_321360
    ctx->pc = 0x32501Cu;
    SET_GPR_U32(ctx, 31, 0x325024u);
    ctx->pc = 0x325020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32501Cu;
    // 0x325020: 0x8e2475e8  lw          $a0, 0x75E8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321360u, 0x32501Cu, 0x325024u)) {
        return;
    }
    ctx->pc = 0x325024u;
label_325024:
    // 0x325024: 0x2e030020  sltiu       $v1, $s0, 0x20
    ctx->pc = 0x325024u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x325028: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x325028u;
    {
        const bool branch_taken_0x325028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32502Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325028u;
        // 0x32502c: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325028) {
            ctx->pc = 0x325040u;
            goto label_325040;
        }
    }
    ctx->pc = 0x325030u;
    // 0x325030: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x325030u;
    SET_GPR_U32(ctx, 31, 0x325038u);
    ctx->pc = 0x325034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325030u;
    // 0x325034: 0x8e2475e8  lw          $a0, 0x75E8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x325030u, 0x325038u)) {
        return;
    }
    ctx->pc = 0x325038u;
label_325038:
    // 0x325038: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x325038u;
    {
        const bool branch_taken_0x325038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325038u;
        // 0x32503c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325038) {
            ctx->pc = 0x325058u;
            goto label_325058;
        }
    }
    ctx->pc = 0x325040u;
label_325040:
    // 0x325040: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x325040u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x325044: 0x2442cfc0  addiu       $v0, $v0, -0x3040
    ctx->pc = 0x325044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954944));
    // 0x325048: 0x8e2475e8  lw          $a0, 0x75E8($s1)
    ctx->pc = 0x325048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30184)));
    // 0x32504c: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x32504Cu;
    SET_GPR_U32(ctx, 31, 0x325054u);
    ctx->pc = 0x325050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32504Cu;
    // 0x325050: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x32504Cu, 0x325054u)) {
        return;
    }
    ctx->pc = 0x325054u;
label_325054:
    // 0x325054: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x325054u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_325058:
    // 0x325058: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x325058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32505c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x32505cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x325060: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x325060u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325064: 0x3e00008  jr          $ra
    ctx->pc = 0x325064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325064u;
        // 0x325068: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32506Cu;
    // 0x32506c: 0x0  nop
    ctx->pc = 0x32506cu;
    // NOP
    ctx->pc = 0x325070u;
}
