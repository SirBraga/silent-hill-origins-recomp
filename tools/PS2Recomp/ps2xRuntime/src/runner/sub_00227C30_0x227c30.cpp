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

// Function: sub_00227C30
// Address: 0x227c30 - 0x227df8
void sub_00227C30_0x227c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227C30_0x227c30");
#endif

    switch (ctx->pc) {
        case 0x227d10u: goto label_227d10;
        case 0x227d24u: goto label_227d24;
        case 0x227d48u: goto label_227d48;
        case 0x227d58u: goto label_227d58;
        case 0x227dc0u: goto label_227dc0;
        case 0x227dccu: goto label_227dcc;
        default: break;
    }

    ctx->pc = 0x227c30u;

    // 0x227c30: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x227c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x227c34: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x227c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x227c38: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x227c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x227c3c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x227c3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227c40: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x227c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x227c44: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x227c44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227c48: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x227c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x227c4c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x227c4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227c50: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x227c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x227c54: 0x24040808  addiu       $a0, $zero, 0x808
    ctx->pc = 0x227c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x227c58: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x227c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x227c5c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x227c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x227c60: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x227c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x227c64: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x227c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x227c68: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x227c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x227c6c: 0x8ea80018  lw          $t0, 0x18($s5)
    ctx->pc = 0x227c6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x227c70: 0x8e740004  lw          $s4, 0x4($s3)
    ctx->pc = 0x227c70u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x227c74: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x227c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x227c78: 0x8e670008  lw          $a3, 0x8($s3)
    ctx->pc = 0x227c78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x227c7c: 0x8eb10014  lw          $s1, 0x14($s5)
    ctx->pc = 0x227c7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x227c80: 0x10640048  beq         $v1, $a0, . + 4 + (0x48 << 2)
    ctx->pc = 0x227C80u;
    {
        const bool branch_taken_0x227c80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x227C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227C80u;
        // 0x227c84: 0x8e720014  lw          $s2, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227c80) {
            ctx->pc = 0x227DA4u;
            goto label_227da4;
        }
    }
    ctx->pc = 0x227C88u;
    // 0x227c88: 0x2c620809  sltiu       $v0, $v1, 0x809
    ctx->pc = 0x227c88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2057) ? 1 : 0);
    // 0x227c8c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x227C8Cu;
    {
        const bool branch_taken_0x227c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227C8Cu;
        // 0x227c90: 0x24020408  addiu       $v0, $zero, 0x408 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227c8c) {
            ctx->pc = 0x227CC8u;
            goto label_227cc8;
        }
    }
    ctx->pc = 0x227C94u;
    // 0x227c94: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x227C94u;
    {
        const bool branch_taken_0x227c94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x227C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227C94u;
        // 0x227c98: 0x2c620409  sltiu       $v0, $v1, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1033) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x227c94) {
            ctx->pc = 0x227D08u;
            goto label_227d08;
        }
    }
    ctx->pc = 0x227C9Cu;
    // 0x227c9c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x227C9Cu;
    {
        const bool branch_taken_0x227c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227C9Cu;
        // 0x227ca0: 0x24020404  addiu       $v0, $zero, 0x404 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1028));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227c9c) {
            ctx->pc = 0x227CB4u;
            goto label_227cb4;
        }
    }
    ctx->pc = 0x227CA4u;
    // 0x227ca4: 0x1062003f  beq         $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x227CA4u;
    {
        const bool branch_taken_0x227ca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x227CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227CA4u;
        // 0x227ca8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227ca4) {
            ctx->pc = 0x227DA4u;
            goto label_227da4;
        }
    }
    ctx->pc = 0x227CACu;
    // 0x227cac: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x227CACu;
    {
        const bool branch_taken_0x227cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x227cac) {
            ctx->pc = 0x227DB0u;
            goto label_227db0;
        }
    }
    ctx->pc = 0x227CB4u;
label_227cb4:
    // 0x227cb4: 0x24020420  addiu       $v0, $zero, 0x420
    ctx->pc = 0x227cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    // 0x227cb8: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x227CB8u;
    {
        const bool branch_taken_0x227cb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x227CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227CB8u;
        // 0x227cbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227cb8) {
            ctx->pc = 0x227D40u;
            goto label_227d40;
        }
    }
    ctx->pc = 0x227CC0u;
    // 0x227cc0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x227CC0u;
    {
        const bool branch_taken_0x227cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x227cc0) {
            ctx->pc = 0x227DB0u;
            goto label_227db0;
        }
    }
    ctx->pc = 0x227CC8u;
label_227cc8:
    // 0x227cc8: 0x24022004  addiu       $v0, $zero, 0x2004
    ctx->pc = 0x227cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8196));
    // 0x227ccc: 0x10620037  beq         $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x227CCCu;
    {
        const bool branch_taken_0x227ccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x227CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227CCCu;
        // 0x227cd0: 0x2c622005  sltiu       $v0, $v1, 0x2005 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8197) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x227ccc) {
            ctx->pc = 0x227DACu;
            goto label_227dac;
        }
    }
    ctx->pc = 0x227CD4u;
    // 0x227cd4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x227CD4u;
    {
        const bool branch_taken_0x227cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227CD4u;
        // 0x227cd8: 0x24020820  addiu       $v0, $zero, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227cd4) {
            ctx->pc = 0x227CECu;
            goto label_227cec;
        }
    }
    ctx->pc = 0x227CDCu;
    // 0x227cdc: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x227CDCu;
    {
        const bool branch_taken_0x227cdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x227CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227CDCu;
        // 0x227ce0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227cdc) {
            ctx->pc = 0x227D40u;
            goto label_227d40;
        }
    }
    ctx->pc = 0x227CE4u;
    // 0x227ce4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x227CE4u;
    {
        const bool branch_taken_0x227ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x227ce4) {
            ctx->pc = 0x227DB0u;
            goto label_227db0;
        }
    }
    ctx->pc = 0x227CECu;
label_227cec:
    // 0x227cec: 0x24022008  addiu       $v0, $zero, 0x2008
    ctx->pc = 0x227cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8200));
    // 0x227cf0: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x227CF0u;
    {
        const bool branch_taken_0x227cf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x227CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227CF0u;
        // 0x227cf4: 0x24022020  addiu       $v0, $zero, 0x2020 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227cf0) {
            ctx->pc = 0x227DACu;
            goto label_227dac;
        }
    }
    ctx->pc = 0x227CF8u;
    // 0x227cf8: 0x1462002d  bne         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x227CF8u;
    {
        const bool branch_taken_0x227cf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x227CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227CF8u;
        // 0x227cfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227cf8) {
            ctx->pc = 0x227DB0u;
            goto label_227db0;
        }
    }
    ctx->pc = 0x227D00u;
    // 0x227d00: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x227D00u;
    {
        const bool branch_taken_0x227d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D00u;
        // 0x227d04: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227d00) {
            ctx->pc = 0x227DCCu;
            goto label_227dcc;
        }
    }
    ctx->pc = 0x227D08u;
label_227d08:
    // 0x227d08: 0x18e00026  blez        $a3, . + 4 + (0x26 << 2)
    ctx->pc = 0x227D08u;
    {
        const bool branch_taken_0x227d08 = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x227D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D08u;
        // 0x227d0c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227d08) {
            ctx->pc = 0x227DA4u;
            goto label_227da4;
        }
    }
    ctx->pc = 0x227D10u;
label_227d10:
    // 0x227d10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x227d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227d14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x227d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227d18: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x227d18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227d1c: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x227D1Cu;
    SET_GPR_U32(ctx, 31, 0x227D24u);
    ctx->pc = 0x227D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227D1Cu;
    // 0x227d20: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x227D1Cu, 0x227D24u)) {
        return;
    }
    ctx->pc = 0x227D24u;
label_227d24:
    // 0x227d24: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x227d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x227d28: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x227d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x227d2c: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x227d2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x227d30: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x227D30u;
    {
        const bool branch_taken_0x227d30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x227D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D30u;
        // 0x227d34: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227d30) {
            ctx->pc = 0x227D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227d10;
        }
    }
    ctx->pc = 0x227D38u;
    // 0x227d38: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x227D38u;
    {
        const bool branch_taken_0x227d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D38u;
        // 0x227d3c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227d38) {
            ctx->pc = 0x227DCCu;
            goto label_227dcc;
        }
    }
    ctx->pc = 0x227D40u;
label_227d40:
    // 0x227d40: 0x18e00018  blez        $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x227D40u;
    {
        const bool branch_taken_0x227d40 = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x227D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D40u;
        // 0x227d44: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227d40) {
            ctx->pc = 0x227DA4u;
            goto label_227da4;
        }
    }
    ctx->pc = 0x227D48u;
label_227d48:
    // 0x227d48: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x227d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x227d4c: 0x1a80000e  blez        $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x227D4Cu;
    {
        const bool branch_taken_0x227d4c = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x227D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D4Cu;
        // 0x227d50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227d4c) {
            ctx->pc = 0x227D88u;
            goto label_227d88;
        }
    }
    ctx->pc = 0x227D54u;
    // 0x227d54: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x227d54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_227d58:
    // 0x227d58: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x227d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x227d5c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x227d5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x227d60: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x227d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x227d64: 0xb4102a  slt         $v0, $a1, $s4
    ctx->pc = 0x227d64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x227d68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x227d68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x227d6c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x227d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x227d70: 0x88690003  lwl         $t1, 0x3($v1)
    ctx->pc = 0x227d70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
    // 0x227d74: 0x98690000  lwr         $t1, 0x0($v1)
    ctx->pc = 0x227d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 9) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 9) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 9, merged64); }
    // 0x227d78: 0xa8c90003  swl         $t1, 0x3($a2)
    ctx->pc = 0x227d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x227d7c: 0xb8c90000  swr         $t1, 0x0($a2)
    ctx->pc = 0x227d7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x227d80: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x227D80u;
    {
        const bool branch_taken_0x227d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x227D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D80u;
        // 0x227d84: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227d80) {
            ctx->pc = 0x227D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227d58;
        }
    }
    ctx->pc = 0x227D88u;
label_227d88:
    // 0x227d88: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x227d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x227d8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x227d8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227d90: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x227d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x227d94: 0x207202a  slt         $a0, $s0, $a3
    ctx->pc = 0x227d94u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x227d98: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x227d98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x227d9c: 0x1480ffea  bnez        $a0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x227D9Cu;
    {
        const bool branch_taken_0x227d9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x227DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D9Cu;
        // 0x227da0: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227d9c) {
            ctx->pc = 0x227D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227d48;
        }
    }
    ctx->pc = 0x227DA4u;
label_227da4:
    // 0x227da4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x227DA4u;
    {
        const bool branch_taken_0x227da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227DA4u;
        // 0x227da8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227da4) {
            ctx->pc = 0x227DCCu;
            goto label_227dcc;
        }
    }
    ctx->pc = 0x227DACu;
label_227dac:
    // 0x227dac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x227dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_227db0:
    // 0x227db0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x227db0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x227db4: 0x34840009  ori         $a0, $a0, 0x9
    ctx->pc = 0x227db4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
    // 0x227db8: 0xc092848  jal         func_24A120
    ctx->pc = 0x227DB8u;
    SET_GPR_U32(ctx, 31, 0x227DC0u);
    ctx->pc = 0x227DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227DB8u;
    // 0x227dbc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x227DB8u, 0x227DC0u)) {
        return;
    }
    ctx->pc = 0x227DC0u;
label_227dc0:
    // 0x227dc0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x227dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227dc4: 0xc09281a  jal         func_24A068
    ctx->pc = 0x227DC4u;
    SET_GPR_U32(ctx, 31, 0x227DCCu);
    ctx->pc = 0x227DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227DC4u;
    // 0x227dc8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x227DC4u, 0x227DCCu)) {
        return;
    }
    ctx->pc = 0x227DCCu;
label_227dcc:
    // 0x227dcc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x227dccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227dd0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x227dd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x227dd4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x227dd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x227dd8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x227dd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x227ddc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x227ddcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x227de0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x227de0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x227de4: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x227de4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227de8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x227de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227dec: 0x3e00008  jr          $ra
    ctx->pc = 0x227DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227DECu;
        // 0x227df0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227DF4u;
    // 0x227df4: 0x0  nop
    ctx->pc = 0x227df4u;
    // NOP
    ctx->pc = 0x227df8u;
}
