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

// Function: sub_00295CA0
// Address: 0x295ca0 - 0x295d88
void sub_00295CA0_0x295ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295CA0_0x295ca0");
#endif

    switch (ctx->pc) {
        case 0x295d10u: goto label_295d10;
        case 0x295d28u: goto label_295d28;
        case 0x295d40u: goto label_295d40;
        case 0x295d5cu: goto label_295d5c;
        default: break;
    }

    ctx->pc = 0x295ca0u;

    // 0x295ca0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x295ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x295ca4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x295ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x295ca8: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x295ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x295cac: 0x3c110068  lui         $s1, 0x68
    ctx->pc = 0x295cacu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)104 << 16));
    // 0x295cb0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x295cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x295cb4: 0x8e22e7e8  lw          $v0, -0x1818($s1)
    ctx->pc = 0x295cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x67E7E8u));
    // 0x295cb8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x295cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x295cbc: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x295CBCu;
    {
        const bool branch_taken_0x295cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x295CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295CBCu;
        // 0x295cc0: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295cbc) {
            ctx->pc = 0x295CE8u;
            goto label_295ce8;
        }
    }
    ctx->pc = 0x295CC4u;
    // 0x295cc4: 0x3c100068  lui         $s0, 0x68
    ctx->pc = 0x295cc4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)104 << 16));
    // 0x295cc8: 0x8e02e7ec  lw          $v0, -0x1814($s0)
    ctx->pc = 0x295cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x67E7ECu));
    // 0x295ccc: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x295CCCu;
    {
        const bool branch_taken_0x295ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x295CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295CCCu;
        // 0x295cd0: 0x3c120068  lui         $s2, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295ccc) {
            ctx->pc = 0x295CECu;
            goto label_295cec;
        }
    }
    ctx->pc = 0x295CD4u;
    // 0x295cd4: 0x8e42e7f0  lw          $v0, -0x1810($s2)
    ctx->pc = 0x295cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294961136)));
    // 0x295cd8: 0x14430025  bne         $v0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x295CD8u;
    {
        const bool branch_taken_0x295cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x295CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295CD8u;
        // 0x295cdc: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295cd8) {
            ctx->pc = 0x295D70u;
            goto label_295d70;
        }
    }
    ctx->pc = 0x295CE0u;
    // 0x295ce0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x295CE0u;
    {
        const bool branch_taken_0x295ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295CE0u;
        // 0x295ce4: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295ce0) {
            ctx->pc = 0x295CF4u;
            goto label_295cf4;
        }
    }
    ctx->pc = 0x295CE8u;
label_295ce8:
    // 0x295ce8: 0x3c100068  lui         $s0, 0x68
    ctx->pc = 0x295ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)104 << 16));
label_295cec:
    // 0x295cec: 0x3c120068  lui         $s2, 0x68
    ctx->pc = 0x295cecu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)104 << 16));
    // 0x295cf0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x295cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_295cf4:
    // 0x295cf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x295cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295cf8: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x295cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x295cfc: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x295cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x295d00: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x295d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x295d04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x295d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295d08: 0xc0c84c8  jal         func_321320
    ctx->pc = 0x295D08u;
    SET_GPR_U32(ctx, 31, 0x295D10u);
    ctx->pc = 0x295D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295D08u;
    // 0x295d0c: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321320u, 0x295D08u, 0x295D10u)) {
        return;
    }
    ctx->pc = 0x295D10u;
label_295d10:
    // 0x295d10: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x295d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x295d14: 0xae22e7e8  sw          $v0, -0x1818($s1)
    ctx->pc = 0x295d14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294961128), GPR_U32(ctx, 2));
    // 0x295d18: 0x2463d440  addiu       $v1, $v1, -0x2BC0
    ctx->pc = 0x295d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956096));
    // 0x295d1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x295d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295d20: 0xc0c84c8  jal         func_321320
    ctx->pc = 0x295D20u;
    SET_GPR_U32(ctx, 31, 0x295D28u);
    ctx->pc = 0x295D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295D20u;
    // 0x295d24: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321320u, 0x295D20u, 0x295D28u)) {
        return;
    }
    ctx->pc = 0x295D28u;
label_295d28:
    // 0x295d28: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x295d28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x295d2c: 0xae02e7ec  sw          $v0, -0x1814($s0)
    ctx->pc = 0x295d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294961132), GPR_U32(ctx, 2));
    // 0x295d30: 0x2463d450  addiu       $v1, $v1, -0x2BB0
    ctx->pc = 0x295d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956112));
    // 0x295d34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x295d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295d38: 0xc0c84c8  jal         func_321320
    ctx->pc = 0x295D38u;
    SET_GPR_U32(ctx, 31, 0x295D40u);
    ctx->pc = 0x295D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295D38u;
    // 0x295d3c: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321320u, 0x295D38u, 0x295D40u)) {
        return;
    }
    ctx->pc = 0x295D40u;
label_295d40:
    // 0x295d40: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x295d40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x295d44: 0xae42e7f0  sw          $v0, -0x1810($s2)
    ctx->pc = 0x295d44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294961136), GPR_U32(ctx, 2));
    // 0x295d48: 0x2463d460  addiu       $v1, $v1, -0x2BA0
    ctx->pc = 0x295d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956128));
    // 0x295d4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x295d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295d50: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x295d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x295d54: 0xc0c84c8  jal         func_321320
    ctx->pc = 0x295D54u;
    SET_GPR_U32(ctx, 31, 0x295D5Cu);
    ctx->pc = 0x295D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295D54u;
    // 0x295d58: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321320u, 0x295D54u, 0x295D5Cu)) {
        return;
    }
    ctx->pc = 0x295D5Cu;
label_295d5c:
    // 0x295d5c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x295d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x295d60: 0xac62e7e0  sw          $v0, -0x1820($v1)
    ctx->pc = 0x295d60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x67E7E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x67E7E0u, _value); } while (0);
    // 0x295d64: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x295d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x295d68: 0xac40e7f4  sw          $zero, -0x180C($v0)
    ctx->pc = 0x295d68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x67E7F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x67E7F4u, _value); } while (0);
    // 0x295d6c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x295d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_295d70:
    // 0x295d70: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x295d70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x295d74: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x295d74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x295d78: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x295d78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x295d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x295D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295D7Cu;
        // 0x295d80: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295D84u;
    // 0x295d84: 0x0  nop
    ctx->pc = 0x295d84u;
    // NOP
    ctx->pc = 0x295d88u;
}
