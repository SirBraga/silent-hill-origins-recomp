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

// Function: sub_00275CF8
// Address: 0x275cf8 - 0x275f30
void sub_00275CF8_0x275cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275CF8_0x275cf8");
#endif

    switch (ctx->pc) {
        case 0x275d6cu: goto label_275d6c;
        case 0x275d98u: goto label_275d98;
        case 0x275dc8u: goto label_275dc8;
        case 0x275de8u: goto label_275de8;
        case 0x275e04u: goto label_275e04;
        case 0x275e24u: goto label_275e24;
        case 0x275e44u: goto label_275e44;
        case 0x275e64u: goto label_275e64;
        case 0x275f0cu: goto label_275f0c;
        case 0x275f20u: goto label_275f20;
        default: break;
    }

    ctx->pc = 0x275cf8u;

    // 0x275cf8: 0x8f8287b4  lw          $v0, -0x784C($gp)
    ctx->pc = 0x275cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936500)));
    // 0x275cfc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x275cfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x275d00: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x275d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x275d04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x275d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275d08: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x275d08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x275d0c: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x275D0Cu;
    {
        const bool branch_taken_0x275d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275D0Cu;
        // 0x275d10: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275d0c) {
            ctx->pc = 0x275EFCu;
            goto label_275efc;
        }
    }
    ctx->pc = 0x275D14u;
    // 0x275d14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x275d14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275d18: 0x18a00058  blez        $a1, . + 4 + (0x58 << 2)
    ctx->pc = 0x275D18u;
    {
        const bool branch_taken_0x275d18 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x275D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275D18u;
        // 0x275d1c: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275d18) {
            ctx->pc = 0x275E7Cu;
            goto label_275e7c;
        }
    }
    ctx->pc = 0x275D20u;
    // 0x275d20: 0x248a5668  addiu       $t2, $a0, 0x5668
    ctx->pc = 0x275d20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 22120));
    // 0x275d24: 0x240801b7  addiu       $t0, $zero, 0x1B7
    ctx->pc = 0x275d24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 439));
    // 0x275d28: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x275d28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275d2c: 0x18a0001f  blez        $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x275D2Cu;
    {
        const bool branch_taken_0x275d2c = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x275D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275D2Cu;
        // 0x275d30: 0x30a30003  andi        $v1, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x275d2c) {
            ctx->pc = 0x275DACu;
            goto label_275dac;
        }
    }
    ctx->pc = 0x275D34u;
    // 0x275d34: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x275D34u;
    {
        const bool branch_taken_0x275d34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x275D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275D34u;
        // 0x275d38: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x275d34) {
            ctx->pc = 0x275DE4u;
            goto label_275de4;
        }
    }
    ctx->pc = 0x275D3Cu;
    // 0x275d3c: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x275D3Cu;
    {
        const bool branch_taken_0x275d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x275d3c) {
            ctx->pc = 0x275D40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275D3Cu;
            // 0x275d40: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275DB0u;
            goto label_275db0;
        }
    }
    ctx->pc = 0x275D44u;
    // 0x275d44: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x275d44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x275d48: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x275D48u;
    {
        const bool branch_taken_0x275d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x275d48) {
            ctx->pc = 0x275D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275D48u;
            // 0x275d4c: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275D80u;
            goto label_275d80;
        }
    }
    ctx->pc = 0x275D50u;
    // 0x275d50: 0x8c835668  lw          $v1, 0x5668($a0)
    ctx->pc = 0x275d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22120)));
    // 0x275d54: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x275d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x275d58: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x275D58u;
    {
        const bool branch_taken_0x275d58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x275D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275D58u;
        // 0x275d5c: 0x25460030  addiu       $a2, $t2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275d58) {
            ctx->pc = 0x275D78u;
            goto label_275d78;
        }
    }
    ctx->pc = 0x275D60u;
    // 0x275d60: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x275d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x275d64: 0xc092848  jal         func_24A120
    ctx->pc = 0x275D64u;
    SET_GPR_U32(ctx, 31, 0x275D6Cu);
    ctx->pc = 0x275D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275D64u;
    // 0x275d68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x275D64u, 0x275D6Cu)) {
        return;
    }
    ctx->pc = 0x275D6Cu;
label_275d6c:
    // 0x275d6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x275d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275d70: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x275D70u;
    {
        const bool branch_taken_0x275d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275D70u;
        // 0x275d74: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275d70) {
            ctx->pc = 0x275F18u;
            goto label_275f18;
        }
    }
    ctx->pc = 0x275D78u;
label_275d78:
    // 0x275d78: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x275d78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275d7c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x275d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_275d80:
    // 0x275d80: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x275d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x275d84: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x275D84u;
    {
        const bool branch_taken_0x275d84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x275D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275D84u;
        // 0x275d88: 0x24c60030  addiu       $a2, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275d84) {
            ctx->pc = 0x275DA8u;
            goto label_275da8;
        }
    }
    ctx->pc = 0x275D8Cu;
    // 0x275d8c: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x275d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x275d90: 0xc092848  jal         func_24A120
    ctx->pc = 0x275D90u;
    SET_GPR_U32(ctx, 31, 0x275D98u);
    ctx->pc = 0x275D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275D90u;
    // 0x275d94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x275D90u, 0x275D98u)) {
        return;
    }
    ctx->pc = 0x275D98u;
label_275d98:
    // 0x275d98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x275d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275d9c: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x275D9Cu;
    {
        const bool branch_taken_0x275d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275D9Cu;
        // 0x275da0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275d9c) {
            ctx->pc = 0x275F18u;
            goto label_275f18;
        }
    }
    ctx->pc = 0x275DA4u;
    // 0x275da4: 0x0  nop
    ctx->pc = 0x275da4u;
    // NOP
label_275da8:
    // 0x275da8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x275da8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_275dac:
    // 0x275dac: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x275dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_275db0:
    // 0x275db0: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x275db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x275db4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x275DB4u;
    {
        const bool branch_taken_0x275db4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x275DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275DB4u;
        // 0x275db8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275db4) {
            ctx->pc = 0x275DD8u;
            goto label_275dd8;
        }
    }
    ctx->pc = 0x275DBCu;
    // 0x275dbc: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x275dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x275dc0: 0xc092848  jal         func_24A120
    ctx->pc = 0x275DC0u;
    SET_GPR_U32(ctx, 31, 0x275DC8u);
    ctx->pc = 0x275DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275DC0u;
    // 0x275dc4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x275DC0u, 0x275DC8u)) {
        return;
    }
    ctx->pc = 0x275DC8u;
label_275dc8:
    // 0x275dc8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x275dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275dcc: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x275DCCu;
    {
        const bool branch_taken_0x275dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275DCCu;
        // 0x275dd0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275dcc) {
            ctx->pc = 0x275F18u;
            goto label_275f18;
        }
    }
    ctx->pc = 0x275DD4u;
    // 0x275dd4: 0x0  nop
    ctx->pc = 0x275dd4u;
    // NOP
label_275dd8:
    // 0x275dd8: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x275dd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x275ddc: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x275DDCu;
    {
        const bool branch_taken_0x275ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275DDCu;
        // 0x275de0: 0x24c60030  addiu       $a2, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275ddc) {
            ctx->pc = 0x275E7Cu;
            goto label_275e7c;
        }
    }
    ctx->pc = 0x275DE4u;
label_275de4:
    // 0x275de4: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x275de4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_275de8:
    // 0x275de8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x275de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x275dec: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x275decu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x275df0: 0x54460007  bnel        $v0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x275DF0u;
    {
        const bool branch_taken_0x275df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x275df0) {
            ctx->pc = 0x275DF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275DF0u;
            // 0x275df4: 0x8c620030  lw          $v0, 0x30($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275E10u;
            goto label_275e10;
        }
    }
    ctx->pc = 0x275DF8u;
    // 0x275df8: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x275df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x275dfc: 0xc092848  jal         func_24A120
    ctx->pc = 0x275DFCu;
    SET_GPR_U32(ctx, 31, 0x275E04u);
    ctx->pc = 0x275E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275DFCu;
    // 0x275e00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x275DFCu, 0x275E04u)) {
        return;
    }
    ctx->pc = 0x275E04u;
label_275e04:
    // 0x275e04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x275e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275e08: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x275E08u;
    {
        const bool branch_taken_0x275e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275E08u;
        // 0x275e0c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275e08) {
            ctx->pc = 0x275F18u;
            goto label_275f18;
        }
    }
    ctx->pc = 0x275E10u;
label_275e10:
    // 0x275e10: 0x54460007  bnel        $v0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x275E10u;
    {
        const bool branch_taken_0x275e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x275e10) {
            ctx->pc = 0x275E14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275E10u;
            // 0x275e14: 0x8c620060  lw          $v0, 0x60($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275E30u;
            goto label_275e30;
        }
    }
    ctx->pc = 0x275E18u;
    // 0x275e18: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x275e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x275e1c: 0xc092848  jal         func_24A120
    ctx->pc = 0x275E1Cu;
    SET_GPR_U32(ctx, 31, 0x275E24u);
    ctx->pc = 0x275E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275E1Cu;
    // 0x275e20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x275E1Cu, 0x275E24u)) {
        return;
    }
    ctx->pc = 0x275E24u;
label_275e24:
    // 0x275e24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x275e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275e28: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x275E28u;
    {
        const bool branch_taken_0x275e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275E28u;
        // 0x275e2c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275e28) {
            ctx->pc = 0x275F18u;
            goto label_275f18;
        }
    }
    ctx->pc = 0x275E30u;
label_275e30:
    // 0x275e30: 0x54460007  bnel        $v0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x275E30u;
    {
        const bool branch_taken_0x275e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x275e30) {
            ctx->pc = 0x275E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275E30u;
            // 0x275e34: 0x8c620090  lw          $v0, 0x90($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275E50u;
            goto label_275e50;
        }
    }
    ctx->pc = 0x275E38u;
    // 0x275e38: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x275e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x275e3c: 0xc092848  jal         func_24A120
    ctx->pc = 0x275E3Cu;
    SET_GPR_U32(ctx, 31, 0x275E44u);
    ctx->pc = 0x275E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275E3Cu;
    // 0x275e40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x275E3Cu, 0x275E44u)) {
        return;
    }
    ctx->pc = 0x275E44u;
label_275e44:
    // 0x275e44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x275e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275e48: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x275E48u;
    {
        const bool branch_taken_0x275e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275E48u;
        // 0x275e4c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275e48) {
            ctx->pc = 0x275F18u;
            goto label_275f18;
        }
    }
    ctx->pc = 0x275E50u;
label_275e50:
    // 0x275e50: 0x14460007  bne         $v0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x275E50u;
    {
        const bool branch_taken_0x275e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x275E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275E50u;
        // 0x275e54: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275e50) {
            ctx->pc = 0x275E70u;
            goto label_275e70;
        }
    }
    ctx->pc = 0x275E58u;
    // 0x275e58: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x275e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x275e5c: 0xc092848  jal         func_24A120
    ctx->pc = 0x275E5Cu;
    SET_GPR_U32(ctx, 31, 0x275E64u);
    ctx->pc = 0x275E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275E5Cu;
    // 0x275e60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x275E5Cu, 0x275E64u)) {
        return;
    }
    ctx->pc = 0x275E64u;
label_275e64:
    // 0x275e64: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x275e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275e68: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x275E68u;
    {
        const bool branch_taken_0x275e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275E68u;
        // 0x275e6c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275e68) {
            ctx->pc = 0x275F18u;
            goto label_275f18;
        }
    }
    ctx->pc = 0x275E70u;
label_275e70:
    // 0x275e70: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x275e70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x275e74: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x275E74u;
    {
        const bool branch_taken_0x275e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x275E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275E74u;
        // 0x275e78: 0x246300c0  addiu       $v1, $v1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275e74) {
            ctx->pc = 0x275DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275de8;
        }
    }
    ctx->pc = 0x275E7Cu;
label_275e7c:
    // 0x275e7c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x275e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x275e80: 0x24845668  addiu       $a0, $a0, 0x5668
    ctx->pc = 0x275e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22120));
    // 0x275e84: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x275e84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x275e88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275e8c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x275e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x275e90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x275e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x275e94: 0x69240007  ldl         $a0, 0x7($t1)
    ctx->pc = 0x275e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x275e98: 0x6d240000  ldr         $a0, 0x0($t1)
    ctx->pc = 0x275e98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x275e9c: 0x6926000f  ldl         $a2, 0xF($t1)
    ctx->pc = 0x275e9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x275ea0: 0x6d260008  ldr         $a2, 0x8($t1)
    ctx->pc = 0x275ea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x275ea4: 0x69270017  ldl         $a3, 0x17($t1)
    ctx->pc = 0x275ea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x275ea8: 0x6d270010  ldr         $a3, 0x10($t1)
    ctx->pc = 0x275ea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x275eac: 0x6928001f  ldl         $t0, 0x1F($t1)
    ctx->pc = 0x275eacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x275eb0: 0x6d280018  ldr         $t0, 0x18($t1)
    ctx->pc = 0x275eb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x275eb4: 0xb0640007  sdl         $a0, 0x7($v1)
    ctx->pc = 0x275eb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x275eb8: 0xb4640000  sdr         $a0, 0x0($v1)
    ctx->pc = 0x275eb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x275ebc: 0xb066000f  sdl         $a2, 0xF($v1)
    ctx->pc = 0x275ebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x275ec0: 0xb4660008  sdr         $a2, 0x8($v1)
    ctx->pc = 0x275ec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x275ec4: 0xb0670017  sdl         $a3, 0x17($v1)
    ctx->pc = 0x275ec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x275ec8: 0xb4670010  sdr         $a3, 0x10($v1)
    ctx->pc = 0x275ec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x275ecc: 0xb068001f  sdl         $t0, 0x1F($v1)
    ctx->pc = 0x275eccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x275ed0: 0xb4680018  sdr         $t0, 0x18($v1)
    ctx->pc = 0x275ed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x275ed4: 0x69240027  ldl         $a0, 0x27($t1)
    ctx->pc = 0x275ed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x275ed8: 0x6d240020  ldr         $a0, 0x20($t1)
    ctx->pc = 0x275ed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x275edc: 0x6926002f  ldl         $a2, 0x2F($t1)
    ctx->pc = 0x275edcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x275ee0: 0x6d260028  ldr         $a2, 0x28($t1)
    ctx->pc = 0x275ee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x275ee4: 0xb0640027  sdl         $a0, 0x27($v1)
    ctx->pc = 0x275ee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x275ee8: 0xb4640020  sdr         $a0, 0x20($v1)
    ctx->pc = 0x275ee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x275eec: 0xb066002f  sdl         $a2, 0x2F($v1)
    ctx->pc = 0x275eecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x275ef0: 0xb4660028  sdr         $a2, 0x28($v1)
    ctx->pc = 0x275ef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x275ef4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x275EF4u;
    {
        const bool branch_taken_0x275ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275EF4u;
        // 0x275ef8: 0xaf8587b4  sw          $a1, -0x784C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936500), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275ef4) {
            ctx->pc = 0x275F24u;
            goto label_275f24;
        }
    }
    ctx->pc = 0x275EFCu;
label_275efc:
    // 0x275efc: 0x240201b7  addiu       $v0, $zero, 0x1B7
    ctx->pc = 0x275efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 439));
    // 0x275f00: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x275f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275f04: 0xc092848  jal         func_24A120
    ctx->pc = 0x275F04u;
    SET_GPR_U32(ctx, 31, 0x275F0Cu);
    ctx->pc = 0x275F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275F04u;
    // 0x275f08: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x275F04u, 0x275F0Cu)) {
        return;
    }
    ctx->pc = 0x275F0Cu;
label_275f0c:
    // 0x275f0c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x275f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x275f10: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x275f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x275f14: 0x0  nop
    ctx->pc = 0x275f14u;
    // NOP
label_275f18:
    // 0x275f18: 0xc09281a  jal         func_24A068
    ctx->pc = 0x275F18u;
    SET_GPR_U32(ctx, 31, 0x275F20u);
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x275F18u, 0x275F20u)) {
        return;
    }
    ctx->pc = 0x275F20u;
label_275f20:
    // 0x275f20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x275f20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_275f24:
    // 0x275f24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x275f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x275f28: 0x3e00008  jr          $ra
    ctx->pc = 0x275F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275F28u;
        // 0x275f2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275F30u;
}
