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

// Function: sub_0025CE50
// Address: 0x25ce50 - 0x25cf48
void sub_0025CE50_0x25ce50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CE50_0x25ce50");
#endif

    switch (ctx->pc) {
        case 0x25ce90u: goto label_25ce90;
        case 0x25ced8u: goto label_25ced8;
        case 0x25cf1cu: goto label_25cf1c;
        default: break;
    }

    ctx->pc = 0x25ce50u;

    // 0x25ce50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25ce50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25ce54: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x25ce54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x25ce58: 0xac253fe8  sw          $a1, 0x3FE8($at)
    ctx->pc = 0x25ce58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B3FE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3FE8u, _value); } while (0);
    // 0x25ce5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25ce5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25ce60: 0x3c080070  lui         $t0, 0x70
    ctx->pc = 0x25ce60u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)112 << 16));
    // 0x25ce64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25ce64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ce68: 0x8f858608  lw          $a1, -0x79F8($gp)
    ctx->pc = 0x25ce68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936072)));
    // 0x25ce6c: 0x8f87860c  lw          $a3, -0x79F4($gp)
    ctx->pc = 0x25ce6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936076)));
    // 0x25ce70: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x25ce70u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x25ce74: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25ce74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x25ce78: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x25ce78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x25ce7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25ce7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25ce80: 0x25084360  addiu       $t0, $t0, 0x4360
    ctx->pc = 0x25ce80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 17248));
    // 0x25ce84: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x25ce84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25ce88: 0xc0930ce  jal         func_24C338
    ctx->pc = 0x25CE88u;
    SET_GPR_U32(ctx, 31, 0x25CE90u);
    ctx->pc = 0x25CE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CE88u;
    // 0x25ce8c: 0x35290507  ori         $t1, $t1, 0x507 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1287);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C338u, 0x25CE88u, 0x25CE90u)) {
        return;
    }
    ctx->pc = 0x25CE90u;
label_25ce90:
    // 0x25ce90: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x25ce90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x25ce94: 0x8c843fe8  lw          $a0, 0x3FE8($a0)
    ctx->pc = 0x25ce94u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B3FE8u));
    // 0x25ce98: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x25ce98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x25ce9c: 0x24700fc8  addiu       $s0, $v1, 0xFC8
    ctx->pc = 0x25ce9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x25cea0: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x25cea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x25cea4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25CEA4u;
    {
        const bool branch_taken_0x25cea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25CEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CEA4u;
        // 0x25cea8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cea4) {
            ctx->pc = 0x25CEB4u;
            goto label_25ceb4;
        }
    }
    ctx->pc = 0x25CEACu;
    // 0x25ceac: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x25CEACu;
    {
        const bool branch_taken_0x25ceac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CEACu;
        // 0x25ceb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ceac) {
            ctx->pc = 0x25CF30u;
            goto label_25cf30;
        }
    }
    ctx->pc = 0x25CEB4u;
label_25ceb4:
    // 0x25ceb4: 0x3c080070  lui         $t0, 0x70
    ctx->pc = 0x25ceb4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)112 << 16));
    // 0x25ceb8: 0x8f858610  lw          $a1, -0x79F0($gp)
    ctx->pc = 0x25ceb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936080)));
    // 0x25cebc: 0x8f878614  lw          $a3, -0x79EC($gp)
    ctx->pc = 0x25cebcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936084)));
    // 0x25cec0: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x25cec0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x25cec4: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x25cec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x25cec8: 0x25084388  addiu       $t0, $t0, 0x4388
    ctx->pc = 0x25cec8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 17288));
    // 0x25cecc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x25ceccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25ced0: 0xc0930ce  jal         func_24C338
    ctx->pc = 0x25CED0u;
    SET_GPR_U32(ctx, 31, 0x25CED8u);
    ctx->pc = 0x25CED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CED0u;
    // 0x25ced4: 0x35290507  ori         $t1, $t1, 0x507 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1287);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C338u, 0x25CED0u, 0x25CED8u)) {
        return;
    }
    ctx->pc = 0x25CED8u;
label_25ced8:
    // 0x25ced8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x25ced8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x25cedc: 0x8c633fe8  lw          $v1, 0x3FE8($v1)
    ctx->pc = 0x25cedcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3FE8u));
    // 0x25cee0: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x25cee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x25cee4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x25CEE4u;
    {
        const bool branch_taken_0x25cee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CEE4u;
        // 0x25cee8: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cee4) {
            ctx->pc = 0x25CF14u;
            goto label_25cf14;
        }
    }
    ctx->pc = 0x25CEECu;
    // 0x25ceec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x25ceecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x25cef0: 0x8c633fec  lw          $v1, 0x3FEC($v1)
    ctx->pc = 0x25cef0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3FECu));
    // 0x25cef4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25cef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25cef8: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x25cef8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x25cefc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x25cefcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x25cf00: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x25cf00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x25cf04: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x25cf04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x25cf08: 0xac233fec  sw          $v1, 0x3FEC($at)
    ctx->pc = 0x25cf08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3FECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3FECu, _value); } while (0);
    // 0x25cf0c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25CF0Cu;
    {
        const bool branch_taken_0x25cf0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF0Cu;
        // 0x25cf10: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cf0c) {
            ctx->pc = 0x25CF30u;
            goto label_25cf30;
        }
    }
    ctx->pc = 0x25CF14u;
label_25cf14:
    // 0x25cf14: 0xc093106  jal         func_24C418
    ctx->pc = 0x25CF14u;
    SET_GPR_U32(ctx, 31, 0x25CF1Cu);
    ctx->pc = 0x25CF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CF14u;
    // 0x25cf18: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C418u, 0x25CF14u, 0x25CF1Cu)) {
        return;
    }
    ctx->pc = 0x25CF1Cu;
label_25cf1c:
    // 0x25cf1c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x25cf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x25cf20: 0x8c633fe8  lw          $v1, 0x3FE8($v1)
    ctx->pc = 0x25cf20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3FE8u));
    // 0x25cf24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25cf24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cf28: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x25cf28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x25cf2c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x25cf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_25cf30:
    // 0x25cf30: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25cf30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25cf34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25cf34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cf38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25cf38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25cf3c: 0x3e00008  jr          $ra
    ctx->pc = 0x25CF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF3Cu;
        // 0x25cf40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CF3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CF44u;
    // 0x25cf44: 0x0  nop
    ctx->pc = 0x25cf44u;
    // NOP
    ctx->pc = 0x25cf48u;
}
