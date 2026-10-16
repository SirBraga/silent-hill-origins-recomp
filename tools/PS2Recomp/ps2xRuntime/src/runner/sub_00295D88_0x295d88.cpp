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

// Function: sub_00295D88
// Address: 0x295d88 - 0x295e28
void sub_00295D88_0x295d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295D88_0x295d88");
#endif

    switch (ctx->pc) {
        case 0x295db8u: goto label_295db8;
        case 0x295dd0u: goto label_295dd0;
        case 0x295ddcu: goto label_295ddc;
        case 0x295de8u: goto label_295de8;
        case 0x295df0u: goto label_295df0;
        case 0x295df8u: goto label_295df8;
        case 0x295e08u: goto label_295e08;
        default: break;
    }

    ctx->pc = 0x295d88u;

    // 0x295d88: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x295d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x295d8c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x295d8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x295d90: 0x8c43e7d4  lw          $v1, -0x182C($v0)
    ctx->pc = 0x295d90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x67E7D4u));
    // 0x295d94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x295d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x295d98: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x295D98u;
    {
        const bool branch_taken_0x295d98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x295D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295D98u;
        // 0x295d9c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295d98) {
            ctx->pc = 0x295DC0u;
            goto label_295dc0;
        }
    }
    ctx->pc = 0x295DA0u;
    // 0x295da0: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x295da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x295da4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x295da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x295da8: 0xac62e820  sw          $v0, -0x17E0($v1)
    ctx->pc = 0x295da8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x67E820u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x67E820u, _value); } while (0);
    // 0x295dac: 0x3c100068  lui         $s0, 0x68
    ctx->pc = 0x295dacu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)104 << 16));
    // 0x295db0: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x295DB0u;
    SET_GPR_U32(ctx, 31, 0x295DB8u);
    ctx->pc = 0x295DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295DB0u;
    // 0x295db4: 0x8e04e7e0  lw          $a0, -0x1820($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294961120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x295DB0u, 0x295DB8u)) {
        return;
    }
    ctx->pc = 0x295DB8u;
label_295db8:
    // 0x295db8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x295DB8u;
    {
        const bool branch_taken_0x295db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295DB8u;
        // 0x295dbc: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295db8) {
            ctx->pc = 0x295DC8u;
            goto label_295dc8;
        }
    }
    ctx->pc = 0x295DC0u;
label_295dc0:
    // 0x295dc0: 0x3c100068  lui         $s0, 0x68
    ctx->pc = 0x295dc0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)104 << 16));
    // 0x295dc4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x295dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_295dc8:
    // 0x295dc8: 0xc0c84cc  jal         func_321330
    ctx->pc = 0x295DC8u;
    SET_GPR_U32(ctx, 31, 0x295DD0u);
    ctx->pc = 0x295DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295DC8u;
    // 0x295dcc: 0x8c44e7e8  lw          $a0, -0x1818($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321330u, 0x295DC8u, 0x295DD0u)) {
        return;
    }
    ctx->pc = 0x295DD0u;
label_295dd0:
    // 0x295dd0: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x295dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x295dd4: 0xc0c84cc  jal         func_321330
    ctx->pc = 0x295DD4u;
    SET_GPR_U32(ctx, 31, 0x295DDCu);
    ctx->pc = 0x295DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295DD4u;
    // 0x295dd8: 0x8c64e7ec  lw          $a0, -0x1814($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321330u, 0x295DD4u, 0x295DDCu)) {
        return;
    }
    ctx->pc = 0x295DDCu;
label_295ddc:
    // 0x295ddc: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x295ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x295de0: 0xc0c84cc  jal         func_321330
    ctx->pc = 0x295DE0u;
    SET_GPR_U32(ctx, 31, 0x295DE8u);
    ctx->pc = 0x295DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295DE0u;
    // 0x295de4: 0x8c64e7f0  lw          $a0, -0x1810($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321330u, 0x295DE0u, 0x295DE8u)) {
        return;
    }
    ctx->pc = 0x295DE8u;
label_295de8:
    // 0x295de8: 0xc0c84cc  jal         func_321330
    ctx->pc = 0x295DE8u;
    SET_GPR_U32(ctx, 31, 0x295DF0u);
    ctx->pc = 0x295DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295DE8u;
    // 0x295dec: 0x8e04e7e0  lw          $a0, -0x1820($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294961120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321330u, 0x295DE8u, 0x295DF0u)) {
        return;
    }
    ctx->pc = 0x295DF0u;
label_295df0:
    // 0x295df0: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x295DF0u;
    SET_GPR_U32(ctx, 31, 0x295DF8u);
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x295DF0u, 0x295DF8u)) {
        return;
    }
    ctx->pc = 0x295DF8u;
label_295df8:
    // 0x295df8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x295df8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x295dfc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x295dfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295e00: 0xc0c8fe4  jal         func_323F90
    ctx->pc = 0x295E00u;
    SET_GPR_U32(ctx, 31, 0x295E08u);
    ctx->pc = 0x295E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295E00u;
    // 0x295e04: 0x34840012  ori         $a0, $a0, 0x12 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)18);
    ctx->in_delay_slot = false;
    ctx->pc = 0x323F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x323F90u, 0x295E00u, 0x295E08u)) {
        return;
    }
    ctx->pc = 0x295E08u;
label_295e08:
    // 0x295e08: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x295E08u;
    {
        const bool branch_taken_0x295e08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x295E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295E08u;
        // 0x295e0c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295e08) {
            ctx->pc = 0x295E1Cu;
            goto label_295e1c;
        }
    }
    ctx->pc = 0x295E10u;
    // 0x295e10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x295e10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295e14: 0x80c9bb8  j           func_326EE0
    ctx->pc = 0x295E14u;
    ctx->pc = 0x295E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295E14u;
    // 0x295e18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326EE0u;
    sub_00326EE0_0x326ee0(rdram, ctx, runtime); return;
    ctx->pc = 0x295E1Cu;
label_295e1c:
    // 0x295e1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x295e1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295e20: 0x3e00008  jr          $ra
    ctx->pc = 0x295E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295E20u;
        // 0x295e24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295E28u;
}
