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

// Function: sub_00225C98
// Address: 0x225c98 - 0x225dd0
void sub_00225C98_0x225c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225C98_0x225c98");
#endif

    switch (ctx->pc) {
        case 0x225cecu: goto label_225cec;
        case 0x225d1cu: goto label_225d1c;
        case 0x225d34u: goto label_225d34;
        case 0x225d48u: goto label_225d48;
        case 0x225d5cu: goto label_225d5c;
        case 0x225d70u: goto label_225d70;
        case 0x225d84u: goto label_225d84;
        case 0x225da0u: goto label_225da0;
        case 0x225da8u: goto label_225da8;
        case 0x225db0u: goto label_225db0;
        default: break;
    }

    ctx->pc = 0x225c98u;

    // 0x225c98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x225c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x225c9c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x225c9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x225ca0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x225ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x225ca4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x225ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x225ca8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x225ca8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225cac: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x225cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x225cb0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x225cb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225cb4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x225cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x225cb8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x225cb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225cbc: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x225CBCu;
    {
        const bool branch_taken_0x225cbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x225CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225CBCu;
        // 0x225cc0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225cbc) {
            ctx->pc = 0x225CF4u;
            goto label_225cf4;
        }
    }
    ctx->pc = 0x225CC4u;
    // 0x225cc4: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x225cc4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x225cc8: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x225cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x225ccc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x225cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x225cd0: 0x26050fc8  addiu       $a1, $s0, 0xFC8
    ctx->pc = 0x225cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4040));
    // 0x225cd4: 0x24635578  addiu       $v1, $v1, 0x5578
    ctx->pc = 0x225cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21880));
    // 0x225cd8: 0x244255a0  addiu       $v0, $v0, 0x55A0
    ctx->pc = 0x225cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21920));
    // 0x225cdc: 0xaca2011c  sw          $v0, 0x11C($a1)
    ctx->pc = 0x225cdcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7310E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7310E4u, _value); } while (0);
    // 0x225ce0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x225ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225ce4: 0xc093018  jal         func_24C060
    ctx->pc = 0x225CE4u;
    SET_GPR_U32(ctx, 31, 0x225CECu);
    ctx->pc = 0x225CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225CE4u;
    // 0x225ce8: 0xaca30118  sw          $v1, 0x118($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 280), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C060u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C060u, 0x225CE4u, 0x225CECu)) {
        return;
    }
    ctx->pc = 0x225CECu;
label_225cec:
    // 0x225cec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x225CECu;
    {
        const bool branch_taken_0x225cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225CECu;
        // 0x225cf0: 0x26100fc8  addiu       $s0, $s0, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225cec) {
            ctx->pc = 0x225D20u;
            goto label_225d20;
        }
    }
    ctx->pc = 0x225CF4u;
label_225cf4:
    // 0x225cf4: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x225cf4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x225cf8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x225cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x225cfc: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x225cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x225d00: 0x26050fc8  addiu       $a1, $s0, 0xFC8
    ctx->pc = 0x225d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4040));
    // 0x225d04: 0x2463c458  addiu       $v1, $v1, -0x3BA8
    ctx->pc = 0x225d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952024));
    // 0x225d08: 0x2442c638  addiu       $v0, $v0, -0x39C8
    ctx->pc = 0x225d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952504));
    // 0x225d0c: 0xaca2011c  sw          $v0, 0x11C($a1)
    ctx->pc = 0x225d0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7310E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7310E4u, _value); } while (0);
    // 0x225d10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x225d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225d14: 0xc093018  jal         func_24C060
    ctx->pc = 0x225D14u;
    SET_GPR_U32(ctx, 31, 0x225D1Cu);
    ctx->pc = 0x225D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225D14u;
    // 0x225d18: 0xaca30118  sw          $v1, 0x118($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 280), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C060u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C060u, 0x225D14u, 0x225D1Cu)) {
        return;
    }
    ctx->pc = 0x225D1Cu;
label_225d1c:
    // 0x225d1c: 0x26100fc8  addiu       $s0, $s0, 0xFC8
    ctx->pc = 0x225d1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4040));
label_225d20:
    // 0x225d20: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x225d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x225d24: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x225D24u;
    {
        const bool branch_taken_0x225d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D24u;
        // 0x225d28: 0xae120128  sw          $s2, 0x128($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225d24) {
            ctx->pc = 0x225DB0u;
            goto label_225db0;
        }
    }
    ctx->pc = 0x225D2Cu;
    // 0x225d2c: 0xc093c86  jal         func_24F218
    ctx->pc = 0x225D2Cu;
    SET_GPR_U32(ctx, 31, 0x225D34u);
    ctx->pc = 0x24F218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24F218u, 0x225D2Cu, 0x225D34u)) {
        return;
    }
    ctx->pc = 0x225D34u;
label_225d34:
    // 0x225d34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x225d34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225d38: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x225D38u;
    {
        const bool branch_taken_0x225d38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x225D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D38u;
        // 0x225d3c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225d38) {
            ctx->pc = 0x225DB4u;
            goto label_225db4;
        }
    }
    ctx->pc = 0x225D40u;
    // 0x225d40: 0xc0932a4  jal         func_24CA90
    ctx->pc = 0x225D40u;
    SET_GPR_U32(ctx, 31, 0x225D48u);
    ctx->pc = 0x225D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225D40u;
    // 0x225d44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CA90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CA90u, 0x225D40u, 0x225D48u)) {
        return;
    }
    ctx->pc = 0x225D48u;
label_225d48:
    // 0x225d48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x225d48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225d4c: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x225D4Cu;
    {
        const bool branch_taken_0x225d4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x225d4c) {
            ctx->pc = 0x225DA8u;
            goto label_225da8;
        }
    }
    ctx->pc = 0x225D54u;
    // 0x225d54: 0xc093812  jal         func_24E048
    ctx->pc = 0x225D54u;
    SET_GPR_U32(ctx, 31, 0x225D5Cu);
    ctx->pc = 0x24E048u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E048u, 0x225D54u, 0x225D5Cu)) {
        return;
    }
    ctx->pc = 0x225D5Cu;
label_225d5c:
    // 0x225d5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x225d5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225d60: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x225D60u;
    {
        const bool branch_taken_0x225d60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x225d60) {
            ctx->pc = 0x225DA0u;
            goto label_225da0;
        }
    }
    ctx->pc = 0x225D68u;
    // 0x225d68: 0xc0894e2  jal         func_225388
    ctx->pc = 0x225D68u;
    SET_GPR_U32(ctx, 31, 0x225D70u);
    ctx->pc = 0x225388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225388u, 0x225D68u, 0x225D70u)) {
        return;
    }
    ctx->pc = 0x225D70u;
label_225d70:
    // 0x225d70: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x225d70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225d74: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x225D74u;
    {
        const bool branch_taken_0x225d74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x225d74) {
            ctx->pc = 0x225D98u;
            goto label_225d98;
        }
    }
    ctx->pc = 0x225D7Cu;
    // 0x225d7c: 0xc08e168  jal         func_2385A0
    ctx->pc = 0x225D7Cu;
    SET_GPR_U32(ctx, 31, 0x225D84u);
    ctx->pc = 0x2385A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2385A0u, 0x225D7Cu, 0x225D84u)) {
        return;
    }
    ctx->pc = 0x225D84u;
label_225d84:
    // 0x225d84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x225d84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225d88: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x225D88u;
    {
        const bool branch_taken_0x225d88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x225D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D88u;
        // 0x225d8c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225d88) {
            ctx->pc = 0x225D98u;
            goto label_225d98;
        }
    }
    ctx->pc = 0x225D90u;
    // 0x225d90: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x225D90u;
    {
        const bool branch_taken_0x225d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D90u;
        // 0x225d94: 0xae030124  sw          $v1, 0x124($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225d90) {
            ctx->pc = 0x225DB4u;
            goto label_225db4;
        }
    }
    ctx->pc = 0x225D98u;
label_225d98:
    // 0x225d98: 0xc09383a  jal         func_24E0E8
    ctx->pc = 0x225D98u;
    SET_GPR_U32(ctx, 31, 0x225DA0u);
    ctx->pc = 0x24E0E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E0E8u, 0x225D98u, 0x225DA0u)) {
        return;
    }
    ctx->pc = 0x225DA0u;
label_225da0:
    // 0x225da0: 0xc0932cc  jal         func_24CB30
    ctx->pc = 0x225DA0u;
    SET_GPR_U32(ctx, 31, 0x225DA8u);
    ctx->pc = 0x24CB30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB30u, 0x225DA0u, 0x225DA8u)) {
        return;
    }
    ctx->pc = 0x225DA8u;
label_225da8:
    // 0x225da8: 0xc093cc8  jal         func_24F320
    ctx->pc = 0x225DA8u;
    SET_GPR_U32(ctx, 31, 0x225DB0u);
    ctx->pc = 0x24F320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24F320u, 0x225DA8u, 0x225DB0u)) {
        return;
    }
    ctx->pc = 0x225DB0u;
label_225db0:
    // 0x225db0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x225db0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_225db4:
    // 0x225db4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x225db4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x225db8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x225db8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x225dbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x225dbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225dc0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x225dc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225dc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x225DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225DC8u;
        // 0x225dcc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225DD0u;
}
