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

// Function: sub_001C6CB0
// Address: 0x1c6cb0 - 0x1c6d88
void sub_001C6CB0_0x1c6cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6CB0_0x1c6cb0");
#endif

    switch (ctx->pc) {
        case 0x1c6cccu: goto label_1c6ccc;
        case 0x1c6d04u: goto label_1c6d04;
        case 0x1c6d0cu: goto label_1c6d0c;
        case 0x1c6d20u: goto label_1c6d20;
        case 0x1c6d30u: goto label_1c6d30;
        case 0x1c6d40u: goto label_1c6d40;
        case 0x1c6d58u: goto label_1c6d58;
        case 0x1c6d6cu: goto label_1c6d6c;
        default: break;
    }

    ctx->pc = 0x1c6cb0u;

    // 0x1c6cb0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1c6cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1c6cb4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1c6cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1c6cb8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1c6cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1c6cbc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c6cbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6cc0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1c6cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1c6cc4: 0xc06b968  jal         func_1AE5A0
    ctx->pc = 0x1C6CC4u;
    SET_GPR_U32(ctx, 31, 0x1C6CCCu);
    ctx->pc = 0x1C6CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6CC4u;
    // 0x1c6cc8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE5A0u, 0x1C6CC4u, 0x1C6CCCu)) {
        return;
    }
    ctx->pc = 0x1C6CCCu;
label_1c6ccc:
    // 0x1c6ccc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1c6cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1c6cd0: 0xae200260  sw          $zero, 0x260($s1)
    ctx->pc = 0x1c6cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 0));
    // 0x1c6cd4: 0x2463f010  addiu       $v1, $v1, -0xFF0
    ctx->pc = 0x1c6cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963216));
    // 0x1c6cd8: 0xae200264  sw          $zero, 0x264($s1)
    ctx->pc = 0x1c6cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 0));
    // 0x1c6cdc: 0xae200268  sw          $zero, 0x268($s1)
    ctx->pc = 0x1c6cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 616), GPR_U32(ctx, 0));
    // 0x1c6ce0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c6ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c6ce4: 0xae20026c  sw          $zero, 0x26C($s1)
    ctx->pc = 0x1c6ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 620), GPR_U32(ctx, 0));
    // 0x1c6ce8: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1c6ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1c6cec: 0xae200274  sw          $zero, 0x274($s1)
    ctx->pc = 0x1c6cecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 628), GPR_U32(ctx, 0));
    // 0x1c6cf0: 0xae200290  sw          $zero, 0x290($s1)
    ctx->pc = 0x1c6cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 656), GPR_U32(ctx, 0));
    // 0x1c6cf4: 0xae200294  sw          $zero, 0x294($s1)
    ctx->pc = 0x1c6cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 660), GPR_U32(ctx, 0));
    // 0x1c6cf8: 0xae200298  sw          $zero, 0x298($s1)
    ctx->pc = 0x1c6cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 664), GPR_U32(ctx, 0));
    // 0x1c6cfc: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1C6CFCu;
    SET_GPR_U32(ctx, 31, 0x1C6D04u);
    ctx->pc = 0x1C6D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6CFCu;
    // 0x1c6d00: 0xae230258  sw          $v1, 0x258($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1C6CFCu, 0x1C6D04u)) {
        return;
    }
    ctx->pc = 0x1C6D04u;
label_1c6d04:
    // 0x1c6d04: 0xc06db44  jal         func_1B6D10
    ctx->pc = 0x1C6D04u;
    SET_GPR_U32(ctx, 31, 0x1C6D0Cu);
    ctx->pc = 0x1C6D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6D04u;
    // 0x1c6d08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6D10u, 0x1C6D04u, 0x1C6D0Cu)) {
        return;
    }
    ctx->pc = 0x1C6D0Cu;
label_1c6d0c:
    // 0x1c6d0c: 0x26240278  addiu       $a0, $s1, 0x278
    ctx->pc = 0x1c6d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 632));
    // 0x1c6d10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6d14: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1c6d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1c6d18: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C6D18u;
    SET_GPR_U32(ctx, 31, 0x1C6D20u);
    ctx->pc = 0x1C6D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6D18u;
    // 0x1c6d1c: 0xae220260  sw          $v0, 0x260($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C6D18u, 0x1C6D20u)) {
        return;
    }
    ctx->pc = 0x1C6D20u;
label_1c6d20:
    // 0x1c6d20: 0x2624029c  addiu       $a0, $s1, 0x29C
    ctx->pc = 0x1c6d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 668));
    // 0x1c6d24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6d28: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C6D28u;
    SET_GPR_U32(ctx, 31, 0x1C6D30u);
    ctx->pc = 0x1C6D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6D28u;
    // 0x1c6d2c: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C6D28u, 0x1C6D30u)) {
        return;
    }
    ctx->pc = 0x1C6D30u;
label_1c6d30:
    // 0x1c6d30: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c6d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6d34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6d34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6d38: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C6D38u;
    SET_GPR_U32(ctx, 31, 0x1C6D40u);
    ctx->pc = 0x1C6D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6D38u;
    // 0x1c6d3c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C6D38u, 0x1C6D40u)) {
        return;
    }
    ctx->pc = 0x1C6D40u;
label_1c6d40:
    // 0x1c6d40: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c6d40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c6d44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6d48: 0x24a5efe8  addiu       $a1, $a1, -0x1018
    ctx->pc = 0x1c6d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963176));
    // 0x1c6d4c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c6d4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6d50: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1C6D50u;
    SET_GPR_U32(ctx, 31, 0x1C6D58u);
    ctx->pc = 0x1C6D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6D50u;
    // 0x1c6d54: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1C6D50u, 0x1C6D58u)) {
        return;
    }
    ctx->pc = 0x1C6D58u;
label_1c6d58:
    // 0x1c6d58: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1c6d58u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6d5c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6D5Cu;
    {
        const bool branch_taken_0x1c6d5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6D5Cu;
        // 0x1c6d60: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d5c) {
            ctx->pc = 0x1C6D70u;
            goto label_1c6d70;
        }
    }
    ctx->pc = 0x1C6D64u;
    // 0x1c6d64: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1C6D64u;
    SET_GPR_U32(ctx, 31, 0x1C6D6Cu);
    ctx->pc = 0x1C6D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6D64u;
    // 0x1c6d68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1C6D64u, 0x1C6D6Cu)) {
        return;
    }
    ctx->pc = 0x1C6D6Cu;
label_1c6d6c:
    // 0x1c6d6c: 0xae220268  sw          $v0, 0x268($s1)
    ctx->pc = 0x1c6d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 616), GPR_U32(ctx, 2));
label_1c6d70:
    // 0x1c6d70: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1c6d70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6d74: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1c6d74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c6d78: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1c6d78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c6d7c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1c6d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c6d80: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6D80u;
        // 0x1c6d84: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6D88u;
}
