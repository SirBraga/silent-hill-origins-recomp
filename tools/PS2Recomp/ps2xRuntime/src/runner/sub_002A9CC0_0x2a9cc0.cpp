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

// Function: sub_002A9CC0
// Address: 0x2a9cc0 - 0x2a9d58
void sub_002A9CC0_0x2a9cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9CC0_0x2a9cc0");
#endif

    switch (ctx->pc) {
        case 0x2a9cc0u: goto label_2a9cc0;
        case 0x2a9cc4u: goto label_2a9cc4;
        case 0x2a9cc8u: goto label_2a9cc8;
        case 0x2a9cccu: goto label_2a9ccc;
        case 0x2a9cd0u: goto label_2a9cd0;
        case 0x2a9cd4u: goto label_2a9cd4;
        case 0x2a9cd8u: goto label_2a9cd8;
        case 0x2a9cdcu: goto label_2a9cdc;
        case 0x2a9ce0u: goto label_2a9ce0;
        case 0x2a9ce4u: goto label_2a9ce4;
        case 0x2a9ce8u: goto label_2a9ce8;
        case 0x2a9cecu: goto label_2a9cec;
        case 0x2a9cf0u: goto label_2a9cf0;
        case 0x2a9cf4u: goto label_2a9cf4;
        case 0x2a9cf8u: goto label_2a9cf8;
        case 0x2a9cfcu: goto label_2a9cfc;
        case 0x2a9d00u: goto label_2a9d00;
        case 0x2a9d04u: goto label_2a9d04;
        case 0x2a9d08u: goto label_2a9d08;
        case 0x2a9d0cu: goto label_2a9d0c;
        case 0x2a9d10u: goto label_2a9d10;
        case 0x2a9d14u: goto label_2a9d14;
        case 0x2a9d18u: goto label_2a9d18;
        case 0x2a9d1cu: goto label_2a9d1c;
        case 0x2a9d20u: goto label_2a9d20;
        case 0x2a9d24u: goto label_2a9d24;
        case 0x2a9d28u: goto label_2a9d28;
        case 0x2a9d2cu: goto label_2a9d2c;
        case 0x2a9d30u: goto label_2a9d30;
        case 0x2a9d34u: goto label_2a9d34;
        case 0x2a9d38u: goto label_2a9d38;
        case 0x2a9d3cu: goto label_2a9d3c;
        case 0x2a9d40u: goto label_2a9d40;
        case 0x2a9d44u: goto label_2a9d44;
        case 0x2a9d48u: goto label_2a9d48;
        case 0x2a9d4cu: goto label_2a9d4c;
        case 0x2a9d50u: goto label_2a9d50;
        case 0x2a9d54u: goto label_2a9d54;
        default: break;
    }

    ctx->pc = 0x2a9cc0u;

label_2a9cc0:
    // 0x2a9cc0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2a9cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2a9cc4:
    // 0x2a9cc4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2a9cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_2a9cc8:
    // 0x2a9cc8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2a9cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_2a9ccc:
    // 0x2a9ccc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a9cccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a9cd0:
    // 0x2a9cd0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2a9cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_2a9cd4:
    // 0x2a9cd4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2a9cd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a9cd8:
    // 0x2a9cd8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a9cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2a9cdc:
    // 0x2a9cdc: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x2a9cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_2a9ce0:
    // 0x2a9ce0: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x2a9ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2a9ce4:
    // 0x2a9ce4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2a9ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_2a9ce8:
    // 0x2a9ce8: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_2a9cec:
    if (ctx->pc == 0x2A9CECu) {
        ctx->pc = 0x2A9CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9CE8u;
        // 0x2a9cec: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9CF0u;
        goto label_2a9cf0;
    }
    ctx->pc = 0x2A9CE8u;
    {
        const bool branch_taken_0x2a9ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9CE8u;
        // 0x2a9cec: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9ce8) {
            ctx->pc = 0x2A9D2Cu;
            goto label_2a9d2c;
        }
    }
    ctx->pc = 0x2A9CF0u;
label_2a9cf0:
    // 0x2a9cf0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2a9cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2a9cf4:
    // 0x2a9cf4: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2a9cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_2a9cf8:
    // 0x2a9cf8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a9cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2a9cfc:
    // 0x2a9cfc: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_2a9d00:
    if (ctx->pc == 0x2A9D00u) {
        ctx->pc = 0x2A9D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9CFCu;
        // 0x2a9d00: 0x8e03005c  lw          $v1, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9D04u;
        goto label_2a9d04;
    }
    ctx->pc = 0x2A9CFCu;
    {
        const bool branch_taken_0x2a9cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a9cfc) {
            ctx->pc = 0x2A9D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9CFCu;
            // 0x2a9d00: 0x8e03005c  lw          $v1, 0x5C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9D2Cu;
            goto label_2a9d2c;
        }
    }
    ctx->pc = 0x2A9D04u;
label_2a9d04:
    // 0x2a9d04: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_2a9d08:
    if (ctx->pc == 0x2A9D08u) {
        ctx->pc = 0x2A9D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D04u;
        // 0x2a9d08: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9D0Cu;
        goto label_2a9d0c;
    }
    ctx->pc = 0x2A9D04u;
    {
        const bool branch_taken_0x2a9d04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D04u;
        // 0x2a9d08: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9d04) {
            ctx->pc = 0x2A9D20u;
            goto label_2a9d20;
        }
    }
    ctx->pc = 0x2A9D0Cu;
label_2a9d0c:
    // 0x2a9d0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a9d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a9d10:
    // 0x2a9d10: 0xc092d9c  jal         func_24B670
label_2a9d14:
    if (ctx->pc == 0x2A9D14u) {
        ctx->pc = 0x2A9D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D10u;
        // 0x2a9d14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9D18u;
        goto label_2a9d18;
    }
    ctx->pc = 0x2A9D10u;
    SET_GPR_U32(ctx, 31, 0x2A9D18u);
    ctx->pc = 0x2A9D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9D10u;
    // 0x2a9d14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B670u, 0x2A9D10u, 0x2A9D18u)) {
        return;
    }
    ctx->pc = 0x2A9D18u;
label_2a9d18:
    // 0x2a9d18: 0x10000003  b           . + 4 + (0x3 << 2)
label_2a9d1c:
    if (ctx->pc == 0x2A9D1Cu) {
        ctx->pc = 0x2A9D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D18u;
        // 0x2a9d1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9D20u;
        goto label_2a9d20;
    }
    ctx->pc = 0x2A9D18u;
    {
        const bool branch_taken_0x2a9d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D18u;
        // 0x2a9d1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9d18) {
            ctx->pc = 0x2A9D28u;
            goto label_2a9d28;
        }
    }
    ctx->pc = 0x2A9D20u;
label_2a9d20:
    // 0x2a9d20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a9d20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a9d24:
    // 0x2a9d24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a9d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a9d28:
    // 0x2a9d28: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x2a9d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_2a9d2c:
    // 0x2a9d2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a9d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a9d30:
    // 0x2a9d30: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a9d30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a9d34:
    // 0x2a9d34: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2a9d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2a9d38:
    // 0x2a9d38: 0x40f809  jalr        $v0
label_2a9d3c:
    if (ctx->pc == 0x2A9D3Cu) {
        ctx->pc = 0x2A9D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D38u;
        // 0x2a9d3c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9D40u;
        goto label_2a9d40;
    }
    ctx->pc = 0x2A9D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A9D40u);
        ctx->pc = 0x2A9D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D38u;
        // 0x2a9d3c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9D38u, 0x2A9D40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A9D40u;
label_2a9d40:
    // 0x2a9d40: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2a9d40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2a9d44:
    // 0x2a9d44: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2a9d44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2a9d48:
    // 0x2a9d48: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2a9d48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2a9d4c:
    // 0x2a9d4c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a9d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2a9d50:
    // 0x2a9d50: 0x3e00008  jr          $ra
label_2a9d54:
    if (ctx->pc == 0x2A9D54u) {
        ctx->pc = 0x2A9D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D50u;
        // 0x2a9d54: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9D58u;
        goto label_fallthrough_0x2a9d50;
    }
    ctx->pc = 0x2A9D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D50u;
        // 0x2a9d54: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a9d50:
    ctx->pc = 0x2A9D58u;
}
