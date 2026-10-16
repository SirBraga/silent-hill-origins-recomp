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

// Function: sub_00327DA8
// Address: 0x327da8 - 0x327e58
void sub_00327DA8_0x327da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327DA8_0x327da8");
#endif

    switch (ctx->pc) {
        case 0x327e10u: goto label_327e10;
        case 0x327e34u: goto label_327e34;
        case 0x327e3cu: goto label_327e3c;
        default: break;
    }

    ctx->pc = 0x327da8u;

    // 0x327da8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x327da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x327dac: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x327dacu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x327db0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x327db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x327db4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x327db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x327db8: 0x28180  sll         $s0, $v0, 6
    ctx->pc = 0x327db8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x327dbc: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x327DBCu;
    {
        const bool branch_taken_0x327dbc = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x327DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327DBCu;
        // 0x327dc0: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327dbc) {
            ctx->pc = 0x327DD4u;
            goto label_327dd4;
        }
    }
    ctx->pc = 0x327DC4u;
    // 0x327dc4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x327dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x327dc8: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x327dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x327dcc: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x327DCCu;
    {
        const bool branch_taken_0x327dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x327dcc) {
            ctx->pc = 0x327DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327DCCu;
            // 0x327dd0: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327DE0u;
            goto label_327de0;
        }
    }
    ctx->pc = 0x327DD4u;
label_327dd4:
    // 0x327dd4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x327dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x327dd8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x327DD8u;
    {
        const bool branch_taken_0x327dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327DD8u;
        // 0x327ddc: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x327dd8) {
            ctx->pc = 0x327E40u;
            goto label_327e40;
        }
    }
    ctx->pc = 0x327DE0u;
label_327de0:
    // 0x327de0: 0x24428590  addiu       $v0, $v0, -0x7A70
    ctx->pc = 0x327de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935952));
    // 0x327de4: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x327de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x327de8: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x327DE8u;
    {
        const bool branch_taken_0x327de8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x327de8) {
            ctx->pc = 0x327DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327DE8u;
            // 0x327dec: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327DFCu;
            goto label_327dfc;
        }
    }
    ctx->pc = 0x327DF0u;
    // 0x327df0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x327df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x327df4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x327DF4u;
    {
        const bool branch_taken_0x327df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327DF4u;
        // 0x327df8: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x327df4) {
            ctx->pc = 0x327E40u;
            goto label_327e40;
        }
    }
    ctx->pc = 0x327DFCu;
label_327dfc:
    // 0x327dfc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x327dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x327e00: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x327E00u;
    {
        const bool branch_taken_0x327e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x327E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E00u;
        // 0x327e04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327e00) {
            ctx->pc = 0x327E40u;
            goto label_327e40;
        }
    }
    ctx->pc = 0x327E08u;
    // 0x327e08: 0xc0c9f04  jal         func_327C10
    ctx->pc = 0x327E08u;
    SET_GPR_U32(ctx, 31, 0x327E10u);
    ctx->pc = 0x327C10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x327C10u, 0x327E08u, 0x327E10u)) {
        return;
    }
    ctx->pc = 0x327E10u;
label_327e10:
    // 0x327e10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x327e10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327e14: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x327e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x327e18: 0xfe110010  sd          $s1, 0x10($s0)
    ctx->pc = 0x327e18u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 17));
    // 0x327e1c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x327e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x327e20: 0x30430002  andi        $v1, $v0, 0x2
    ctx->pc = 0x327e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x327e24: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x327E24u;
    {
        const bool branch_taken_0x327e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x327E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E24u;
        // 0x327e28: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327e24) {
            ctx->pc = 0x327E3Cu;
            goto label_327e3c;
        }
    }
    ctx->pc = 0x327E2Cu;
    // 0x327e2c: 0xc0c9e2a  jal         func_3278A8
    ctx->pc = 0x327E2Cu;
    SET_GPR_U32(ctx, 31, 0x327E34u);
    ctx->pc = 0x327E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327E2Cu;
    // 0x327e30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3278A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3278A8u, 0x327E2Cu, 0x327E34u)) {
        return;
    }
    ctx->pc = 0x327E34u;
label_327e34:
    // 0x327e34: 0xc0c9dc6  jal         func_327718
    ctx->pc = 0x327E34u;
    SET_GPR_U32(ctx, 31, 0x327E3Cu);
    ctx->pc = 0x327E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327E34u;
    // 0x327e38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327718u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x327718u, 0x327E34u, 0x327E3Cu)) {
        return;
    }
    ctx->pc = 0x327E3Cu;
label_327e3c:
    // 0x327e3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x327e3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_327e40:
    // 0x327e40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x327e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x327e44: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x327e44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x327e48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x327e48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x327E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E4Cu;
        // 0x327e50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327E54u;
    // 0x327e54: 0x0  nop
    ctx->pc = 0x327e54u;
    // NOP
    ctx->pc = 0x327e58u;
}
