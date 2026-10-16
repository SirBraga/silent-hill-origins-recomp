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

// Function: sub_00146D10
// Address: 0x146d10 - 0x146eb8
void sub_00146D10_0x146d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146D10_0x146d10");
#endif

    switch (ctx->pc) {
        case 0x146d40u: goto label_146d40;
        case 0x146d60u: goto label_146d60;
        case 0x146d74u: goto label_146d74;
        case 0x146d80u: goto label_146d80;
        case 0x146d88u: goto label_146d88;
        case 0x146d98u: goto label_146d98;
        case 0x146da4u: goto label_146da4;
        case 0x146db4u: goto label_146db4;
        case 0x146dd0u: goto label_146dd0;
        case 0x146df4u: goto label_146df4;
        case 0x146e18u: goto label_146e18;
        case 0x146e6cu: goto label_146e6c;
        case 0x146e88u: goto label_146e88;
        default: break;
    }

    ctx->pc = 0x146d10u;

    // 0x146d10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x146d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x146d14: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x146d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x146d18: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x146d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x146d1c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x146d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x146d20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x146d20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146d24: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x146d24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146d28: 0x8c461a68  lw          $a2, 0x1A68($v0)
    ctx->pc = 0x146d28u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x701A68u));
    // 0x146d2c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x146d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x146d30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x146d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x146d34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x146d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x146d38: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x146D38u;
    SET_GPR_U32(ctx, 31, 0x146D40u);
    ctx->pc = 0x146D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146D38u;
    // 0x146d3c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x146D38u, 0x146D40u)) {
        return;
    }
    ctx->pc = 0x146D40u;
label_146d40:
    // 0x146d40: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x146d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146d44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x146d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x146d48: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x146D48u;
    {
        const bool branch_taken_0x146d48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x146D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146D48u;
        // 0x146d4c: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146d48) {
            ctx->pc = 0x146DE0u;
            goto label_146de0;
        }
    }
    ctx->pc = 0x146D50u;
    // 0x146d50: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x146d50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146d54: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x146d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146d58: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x146d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x146d5c: 0x0  nop
    ctx->pc = 0x146d5cu;
    // NOP
label_146d60:
    // 0x146d60: 0x14730015  bne         $v1, $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x146D60u;
    {
        const bool branch_taken_0x146d60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x146D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146D60u;
        // 0x146d64: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146d60) {
            ctx->pc = 0x146DB8u;
            goto label_146db8;
        }
    }
    ctx->pc = 0x146D68u;
    // 0x146d68: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x146d68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x146d6c: 0xc0ab512  jal         func_2AD448
    ctx->pc = 0x146D6Cu;
    SET_GPR_U32(ctx, 31, 0x146D74u);
    ctx->pc = 0x146D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146D6Cu;
    // 0x146d70: 0x8ca40024  lw          $a0, 0x24($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD448u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD448u, 0x146D6Cu, 0x146D74u)) {
        return;
    }
    ctx->pc = 0x146D74u;
label_146d74:
    // 0x146d74: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x146d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x146d78: 0xc0aaf06  jal         func_2ABC18
    ctx->pc = 0x146D78u;
    SET_GPR_U32(ctx, 31, 0x146D80u);
    ctx->pc = 0x146D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146D78u;
    // 0x146d7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABC18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ABC18u, 0x146D78u, 0x146D80u)) {
        return;
    }
    ctx->pc = 0x146D80u;
label_146d80:
    // 0x146d80: 0xc0b5b00  jal         func_2D6C00
    ctx->pc = 0x146D80u;
    SET_GPR_U32(ctx, 31, 0x146D88u);
    ctx->pc = 0x146D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146D80u;
    // 0x146d84: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6C00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6C00u, 0x146D80u, 0x146D88u)) {
        return;
    }
    ctx->pc = 0x146D88u;
label_146d88:
    // 0x146d88: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x146d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x146d8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x146d8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146d90: 0xc0ab42e  jal         func_2AD0B8
    ctx->pc = 0x146D90u;
    SET_GPR_U32(ctx, 31, 0x146D98u);
    ctx->pc = 0x146D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146D90u;
    // 0x146d94: 0x8ca40024  lw          $a0, 0x24($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD0B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD0B8u, 0x146D90u, 0x146D98u)) {
        return;
    }
    ctx->pc = 0x146D98u;
label_146d98:
    // 0x146d98: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x146d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x146d9c: 0xc0ab4d4  jal         func_2AD350
    ctx->pc = 0x146D9Cu;
    SET_GPR_U32(ctx, 31, 0x146DA4u);
    ctx->pc = 0x146DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146D9Cu;
    // 0x146da0: 0x8ca40024  lw          $a0, 0x24($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD350u, 0x146D9Cu, 0x146DA4u)) {
        return;
    }
    ctx->pc = 0x146DA4u;
label_146da4:
    // 0x146da4: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x146da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x146da8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x146da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146dac: 0xc0ab42e  jal         func_2AD0B8
    ctx->pc = 0x146DACu;
    SET_GPR_U32(ctx, 31, 0x146DB4u);
    ctx->pc = 0x146DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146DACu;
    // 0x146db0: 0x8ca40024  lw          $a0, 0x24($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD0B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD0B8u, 0x146DACu, 0x146DB4u)) {
        return;
    }
    ctx->pc = 0x146DB4u;
label_146db4:
    // 0x146db4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x146db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_146db8:
    // 0x146db8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x146db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146dbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x146dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146dc0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x146dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x146dc4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x146dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x146dc8: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x146DC8u;
    SET_GPR_U32(ctx, 31, 0x146DD0u);
    ctx->pc = 0x146DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146DC8u;
    // 0x146dcc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x146DC8u, 0x146DD0u)) {
        return;
    }
    ctx->pc = 0x146DD0u;
label_146dd0:
    // 0x146dd0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x146dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146dd4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x146dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x146dd8: 0x5460ffe1  bnel        $v1, $zero, . + 4 + (-0x1F << 2)
    ctx->pc = 0x146DD8u;
    {
        const bool branch_taken_0x146dd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x146dd8) {
            ctx->pc = 0x146DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146DD8u;
            // 0x146ddc: 0x8c430004  lw          $v1, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146d60;
        }
    }
    ctx->pc = 0x146DE0u;
label_146de0:
    // 0x146de0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x146de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x146de4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x146de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146de8: 0x8c46ee40  lw          $a2, -0x11C0($v0)
    ctx->pc = 0x146de8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BEE40u));
    // 0x146dec: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x146DECu;
    SET_GPR_U32(ctx, 31, 0x146DF4u);
    ctx->pc = 0x146DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146DECu;
    // 0x146df0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x146DECu, 0x146DF4u)) {
        return;
    }
    ctx->pc = 0x146DF4u;
label_146df4:
    // 0x146df4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x146df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146df8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x146df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x146dfc: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x146DFCu;
    {
        const bool branch_taken_0x146dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x146E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146DFCu;
        // 0x146e00: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146dfc) {
            ctx->pc = 0x146E98u;
            goto label_146e98;
        }
    }
    ctx->pc = 0x146E04u;
    // 0x146e04: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x146e04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x146e08: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x146e08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x146e0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x146e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146e10: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x146e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x146e14: 0x0  nop
    ctx->pc = 0x146e14u;
    // NOP
label_146e18:
    // 0x146e18: 0x5073000f  beql        $v1, $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x146E18u;
    {
        const bool branch_taken_0x146e18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x146e18) {
            ctx->pc = 0x146E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146E18u;
            // 0x146e1c: 0xc4400008  lwc1        $f0, 0x8($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x146E58u;
            goto label_146e58;
        }
    }
    ctx->pc = 0x146E20u;
    // 0x146e20: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x146E20u;
    {
        const bool branch_taken_0x146e20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x146e20) {
            ctx->pc = 0x146E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146E20u;
            // 0x146e24: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146E40u;
            goto label_146e40;
        }
    }
    ctx->pc = 0x146E28u;
    // 0x146e28: 0x50720008  beql        $v1, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x146E28u;
    {
        const bool branch_taken_0x146e28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        if (branch_taken_0x146e28) {
            ctx->pc = 0x146E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146E28u;
            // 0x146e2c: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146E4Cu;
            goto label_146e4c;
        }
    }
    ctx->pc = 0x146E30u;
    // 0x146e30: 0x5071000b  beql        $v1, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x146E30u;
    {
        const bool branch_taken_0x146e30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x146e30) {
            ctx->pc = 0x146E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146E30u;
            // 0x146e34: 0xc4400008  lwc1        $f0, 0x8($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x146E60u;
            goto label_146e60;
        }
    }
    ctx->pc = 0x146E38u;
    // 0x146e38: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x146E38u;
    {
        const bool branch_taken_0x146e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146e38) {
            ctx->pc = 0x146E64u;
            goto label_146e64;
        }
    }
    ctx->pc = 0x146E40u;
label_146e40:
    // 0x146e40: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x146e40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x146e44: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x146E44u;
    {
        const bool branch_taken_0x146e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146E44u;
        // 0x146e48: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146e44) {
            ctx->pc = 0x146E64u;
            goto label_146e64;
        }
    }
    ctx->pc = 0x146E4Cu;
label_146e4c:
    // 0x146e4c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x146e4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x146e50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x146E50u;
    {
        const bool branch_taken_0x146e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146E50u;
        // 0x146e54: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146e50) {
            ctx->pc = 0x146E64u;
            goto label_146e64;
        }
    }
    ctx->pc = 0x146E58u;
label_146e58:
    // 0x146e58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x146E58u;
    {
        const bool branch_taken_0x146e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146E58u;
        // 0x146e5c: 0xe6000044  swc1        $f0, 0x44($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x146e58) {
            ctx->pc = 0x146E64u;
            goto label_146e64;
        }
    }
    ctx->pc = 0x146E60u;
label_146e60:
    // 0x146e60: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x146e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
label_146e64:
    // 0x146e64: 0xc051c96  jal         func_147258
    ctx->pc = 0x146E64u;
    SET_GPR_U32(ctx, 31, 0x146E6Cu);
    ctx->pc = 0x146E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146E64u;
    // 0x146e68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147258u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x147258u, 0x146E64u, 0x146E6Cu)) {
        return;
    }
    ctx->pc = 0x146E6Cu;
label_146e6c:
    // 0x146e6c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x146e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146e70: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x146e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x146e74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x146e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146e78: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x146e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x146e7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x146e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x146e80: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x146E80u;
    SET_GPR_U32(ctx, 31, 0x146E88u);
    ctx->pc = 0x146E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146E80u;
    // 0x146e84: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x146E80u, 0x146E88u)) {
        return;
    }
    ctx->pc = 0x146E88u;
label_146e88:
    // 0x146e88: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x146e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146e8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x146e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x146e90: 0x5460ffe1  bnel        $v1, $zero, . + 4 + (-0x1F << 2)
    ctx->pc = 0x146E90u;
    {
        const bool branch_taken_0x146e90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x146e90) {
            ctx->pc = 0x146E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146E90u;
            // 0x146e94: 0x8c430004  lw          $v1, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146e18;
        }
    }
    ctx->pc = 0x146E98u;
label_146e98:
    // 0x146e98: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x146e98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x146e9c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x146e9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x146ea0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x146ea0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x146ea4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x146ea4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x146ea8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x146ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x146eac: 0x3e00008  jr          $ra
    ctx->pc = 0x146EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146EACu;
        // 0x146eb0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146EB4u;
    // 0x146eb4: 0x0  nop
    ctx->pc = 0x146eb4u;
    // NOP
    ctx->pc = 0x146eb8u;
}
