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

// Function: sub_0018FD30
// Address: 0x18fd30 - 0x18fe68
void sub_0018FD30_0x18fd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018FD30_0x18fd30");
#endif

    switch (ctx->pc) {
        case 0x18fd60u: goto label_18fd60;
        case 0x18fda0u: goto label_18fda0;
        case 0x18fdd0u: goto label_18fdd0;
        case 0x18fe0cu: goto label_18fe0c;
        case 0x18fe4cu: goto label_18fe4c;
        default: break;
    }

    ctx->pc = 0x18fd30u;

    // 0x18fd30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18fd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18fd34: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x18fd34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x18fd38: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18fd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x18fd3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18fd3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fd40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18fd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18fd44: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18fd44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fd48: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x18fd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x18fd4c: 0x8e0300e4  lw          $v1, 0xE4($s0)
    ctx->pc = 0x18fd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x18fd50: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18FD50u;
    {
        const bool branch_taken_0x18fd50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FD50u;
        // 0x18fd54: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fd50) {
            ctx->pc = 0x18FD64u;
            goto label_18fd64;
        }
    }
    ctx->pc = 0x18FD58u;
    // 0x18fd58: 0xc0644cc  jal         func_191330
    ctx->pc = 0x18FD58u;
    SET_GPR_U32(ctx, 31, 0x18FD60u);
    ctx->pc = 0x191330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x191330u, 0x18FD58u, 0x18FD60u)) {
        return;
    }
    ctx->pc = 0x18FD60u;
label_18fd60:
    // 0x18fd60: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x18fd60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_18fd64:
    // 0x18fd64: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x18fd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18fd68: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x18FD68u;
    {
        const bool branch_taken_0x18fd68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FD68u;
        // 0x18fd6c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fd68) {
            ctx->pc = 0x18FE14u;
            goto label_18fe14;
        }
    }
    ctx->pc = 0x18FD70u;
    // 0x18fd70: 0x8c640050  lw          $a0, 0x50($v1)
    ctx->pc = 0x18fd70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x18fd74: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18FD74u;
    {
        const bool branch_taken_0x18fd74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x18FD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FD74u;
        // 0x18fd78: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fd74) {
            ctx->pc = 0x18FD8Cu;
            goto label_18fd8c;
        }
    }
    ctx->pc = 0x18FD7Cu;
    // 0x18fd7c: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x18FD7Cu;
    {
        const bool branch_taken_0x18fd7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x18FD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FD7Cu;
        // 0x18fd80: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fd7c) {
            ctx->pc = 0x18FDC0u;
            goto label_18fdc0;
        }
    }
    ctx->pc = 0x18FD84u;
    // 0x18fd84: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x18FD84u;
    {
        const bool branch_taken_0x18fd84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FD84u;
        // 0x18fd88: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fd84) {
            ctx->pc = 0x18FE54u;
            goto label_18fe54;
        }
    }
    ctx->pc = 0x18FD8Cu;
label_18fd8c:
    // 0x18fd8c: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x18fd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x18fd90: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x18FD90u;
    {
        const bool branch_taken_0x18fd90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FD90u;
        // 0x18fd94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fd90) {
            ctx->pc = 0x18FDECu;
            goto label_18fdec;
        }
    }
    ctx->pc = 0x18FD98u;
    // 0x18fd98: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x18fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18fd9c: 0x0  nop
    ctx->pc = 0x18fd9cu;
    // NOP
label_18fda0:
    // 0x18fda0: 0x10430012  beq         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x18FDA0u;
    {
        const bool branch_taken_0x18fda0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18FDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FDA0u;
        // 0x18fda4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fda0) {
            ctx->pc = 0x18FDECu;
            goto label_18fdec;
        }
    }
    ctx->pc = 0x18FDA8u;
    // 0x18fda8: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x18fda8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x18fdac: 0x0  nop
    ctx->pc = 0x18fdacu;
    // NOP
    // 0x18fdb0: 0x54a0fffb  bnel        $a1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x18FDB0u;
    {
        const bool branch_taken_0x18fdb0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x18fdb0) {
            ctx->pc = 0x18FDB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18FDB0u;
            // 0x18fdb4: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18FDA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18fda0;
        }
    }
    ctx->pc = 0x18FDB8u;
    // 0x18fdb8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x18FDB8u;
    {
        const bool branch_taken_0x18fdb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FDB8u;
        // 0x18fdbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fdb8) {
            ctx->pc = 0x18FDECu;
            goto label_18fdec;
        }
    }
    ctx->pc = 0x18FDC0u;
label_18fdc0:
    // 0x18fdc0: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x18fdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x18fdc4: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x18FDC4u;
    {
        const bool branch_taken_0x18fdc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FDC4u;
        // 0x18fdc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fdc4) {
            ctx->pc = 0x18FDECu;
            goto label_18fdec;
        }
    }
    ctx->pc = 0x18FDCCu;
    // 0x18fdcc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x18fdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_18fdd0:
    // 0x18fdd0: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18FDD0u;
    {
        const bool branch_taken_0x18fdd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18FDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FDD0u;
        // 0x18fdd4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fdd0) {
            ctx->pc = 0x18FDECu;
            goto label_18fdec;
        }
    }
    ctx->pc = 0x18FDD8u;
    // 0x18fdd8: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x18fdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x18fddc: 0x0  nop
    ctx->pc = 0x18fddcu;
    // NOP
    // 0x18fde0: 0x54a0fffb  bnel        $a1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x18FDE0u;
    {
        const bool branch_taken_0x18fde0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x18fde0) {
            ctx->pc = 0x18FDE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18FDE0u;
            // 0x18fde4: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18FDD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18fdd0;
        }
    }
    ctx->pc = 0x18FDE8u;
    // 0x18fde8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18fde8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18fdec:
    // 0x18fdec: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x18FDECu;
    {
        const bool branch_taken_0x18fdec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fdec) {
            ctx->pc = 0x18FDF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18FDECu;
            // 0x18fdf0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18FE50u;
            goto label_18fe50;
        }
    }
    ctx->pc = 0x18FDF4u;
    // 0x18fdf4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x18fdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18fdf8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x18FDF8u;
    {
        const bool branch_taken_0x18fdf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FDF8u;
        // 0x18fdfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fdf8) {
            ctx->pc = 0x18FE4Cu;
            goto label_18fe4c;
        }
    }
    ctx->pc = 0x18FE00u;
    // 0x18fe00: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x18fe00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18fe04: 0xc0644dc  jal         func_191370
    ctx->pc = 0x18FE04u;
    SET_GPR_U32(ctx, 31, 0x18FE0Cu);
    ctx->pc = 0x18FE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FE04u;
    // 0x18fe08: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191370u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x191370u, 0x18FE04u, 0x18FE0Cu)) {
        return;
    }
    ctx->pc = 0x18FE0Cu;
label_18fe0c:
    // 0x18fe0c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x18FE0Cu;
    {
        const bool branch_taken_0x18fe0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FE0Cu;
        // 0x18fe10: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fe0c) {
            ctx->pc = 0x18FE50u;
            goto label_18fe50;
        }
    }
    ctx->pc = 0x18FE14u;
label_18fe14:
    // 0x18fe14: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x18fe14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x18fe18: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x18fe18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x18fe1c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18FE1Cu;
    {
        const bool branch_taken_0x18fe1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18FE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FE1Cu;
        // 0x18fe20: 0x2603003c  addiu       $v1, $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fe1c) {
            ctx->pc = 0x18FE4Cu;
            goto label_18fe4c;
        }
    }
    ctx->pc = 0x18FE24u;
    // 0x18fe24: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x18fe24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x18fe28: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x18fe28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x18fe2c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x18fe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18fe30: 0x8c640054  lw          $a0, 0x54($v1)
    ctx->pc = 0x18fe30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x18fe34: 0x50820001  beql        $a0, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x18FE34u;
    {
        const bool branch_taken_0x18fe34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x18fe34) {
            ctx->pc = 0x18FE38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18FE34u;
            // 0x18fe38: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18FE3Cu;
            goto label_18fe3c;
        }
    }
    ctx->pc = 0x18FE3Cu;
label_18fe3c:
    // 0x18fe3c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x18fe3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18fe40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18fe40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fe44: 0xc0644dc  jal         func_191370
    ctx->pc = 0x18FE44u;
    SET_GPR_U32(ctx, 31, 0x18FE4Cu);
    ctx->pc = 0x18FE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FE44u;
    // 0x18fe48: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191370u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x191370u, 0x18FE44u, 0x18FE4Cu)) {
        return;
    }
    ctx->pc = 0x18FE4Cu;
label_18fe4c:
    // 0x18fe4c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x18fe4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18fe50:
    // 0x18fe50: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x18fe50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18fe54:
    // 0x18fe54: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18fe54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18fe58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18fe58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18fe5c: 0x3e00008  jr          $ra
    ctx->pc = 0x18FE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FE5Cu;
        // 0x18fe60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FE5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18FE64u;
    // 0x18fe64: 0x0  nop
    ctx->pc = 0x18fe64u;
    // NOP
    ctx->pc = 0x18fe68u;
}
