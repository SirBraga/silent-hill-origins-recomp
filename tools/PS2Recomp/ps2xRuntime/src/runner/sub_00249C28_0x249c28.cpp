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

// Function: sub_00249C28
// Address: 0x249c28 - 0x249d70
void sub_00249C28_0x249c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249C28_0x249c28");
#endif

    switch (ctx->pc) {
        case 0x249c70u: goto label_249c70;
        case 0x249ca4u: goto label_249ca4;
        case 0x249cb0u: goto label_249cb0;
        case 0x249cd8u: goto label_249cd8;
        case 0x249ce4u: goto label_249ce4;
        case 0x249d18u: goto label_249d18;
        case 0x249d38u: goto label_249d38;
        default: break;
    }

    ctx->pc = 0x249c28u;

    // 0x249c28: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x249c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x249c2c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x249c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x249c30: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x249c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x249c34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x249c34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249c38: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x249c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x249c3c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x249c3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249c40: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x249c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x249c44: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x249c44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249c48: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x249c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x249c4c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x249c4cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249c50: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x249c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x249c54: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x249c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x249c58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x249c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x249c5c: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x249c5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x249c60: 0x27b10014  addiu       $s1, $sp, 0x14
    ctx->pc = 0x249c60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x249c64: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x249C64u;
    {
        const bool branch_taken_0x249c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C64u;
        // 0x249c68: 0x27b00018  addiu       $s0, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249c64) {
            ctx->pc = 0x249D20u;
            goto label_249d20;
        }
    }
    ctx->pc = 0x249C6Cu;
    // 0x249c6c: 0x0  nop
    ctx->pc = 0x249c6cu;
    // NOP
label_249c70:
    // 0x249c70: 0x14560027  bne         $v0, $s6, . + 4 + (0x27 << 2)
    ctx->pc = 0x249C70u;
    {
        const bool branch_taken_0x249c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x249C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C70u;
        // 0x249c74: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249c70) {
            ctx->pc = 0x249D10u;
            goto label_249d10;
        }
    }
    ctx->pc = 0x249C78u;
    // 0x249c78: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x249c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x249c7c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x249c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x249c80: 0x34424fff  ori         $v0, $v0, 0x4FFF
    ctx->pc = 0x249c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20479);
    // 0x249c84: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x249c84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x249c88: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x249C88u;
    {
        const bool branch_taken_0x249c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C88u;
        // 0x249c8c: 0x3c020003  lui         $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249c88) {
            ctx->pc = 0x249CB8u;
            goto label_249cb8;
        }
    }
    ctx->pc = 0x249C90u;
    // 0x249c90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x249c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x249c94: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x249c94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x249c98: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x249c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x249c9c: 0xc092848  jal         func_24A120
    ctx->pc = 0x249C9Cu;
    SET_GPR_U32(ctx, 31, 0x249CA4u);
    ctx->pc = 0x249CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249C9Cu;
    // 0x249ca0: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x249C9Cu, 0x249CA4u)) {
        return;
    }
    ctx->pc = 0x249CA4u;
label_249ca4:
    // 0x249ca4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x249ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249ca8: 0xc09281a  jal         func_24A068
    ctx->pc = 0x249CA8u;
    SET_GPR_U32(ctx, 31, 0x249CB0u);
    ctx->pc = 0x249CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249CA8u;
    // 0x249cac: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x249CA8u, 0x249CB0u)) {
        return;
    }
    ctx->pc = 0x249CB0u;
label_249cb0:
    // 0x249cb0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x249CB0u;
    {
        const bool branch_taken_0x249cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249CB0u;
        // 0x249cb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249cb0) {
            ctx->pc = 0x249D44u;
            goto label_249d44;
        }
    }
    ctx->pc = 0x249CB8u;
label_249cb8:
    // 0x249cb8: 0x34427002  ori         $v0, $v0, 0x7002
    ctx->pc = 0x249cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28674);
    // 0x249cbc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x249cbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x249cc0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x249CC0u;
    {
        const bool branch_taken_0x249cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249CC0u;
        // 0x249cc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249cc0) {
            ctx->pc = 0x249CF0u;
            goto label_249cf0;
        }
    }
    ctx->pc = 0x249CC8u;
    // 0x249cc8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x249cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x249ccc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x249cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x249cd0: 0xc092848  jal         func_24A120
    ctx->pc = 0x249CD0u;
    SET_GPR_U32(ctx, 31, 0x249CD8u);
    ctx->pc = 0x249CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249CD0u;
    // 0x249cd4: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x249CD0u, 0x249CD8u)) {
        return;
    }
    ctx->pc = 0x249CD8u;
label_249cd8:
    // 0x249cd8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x249cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249cdc: 0xc09281a  jal         func_24A068
    ctx->pc = 0x249CDCu;
    SET_GPR_U32(ctx, 31, 0x249CE4u);
    ctx->pc = 0x249CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249CDCu;
    // 0x249ce0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x249CDCu, 0x249CE4u)) {
        return;
    }
    ctx->pc = 0x249CE4u;
label_249ce4:
    // 0x249ce4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x249CE4u;
    {
        const bool branch_taken_0x249ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249CE4u;
        // 0x249ce8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249ce4) {
            ctx->pc = 0x249D44u;
            goto label_249d44;
        }
    }
    ctx->pc = 0x249CECu;
    // 0x249cec: 0x0  nop
    ctx->pc = 0x249cecu;
    // NOP
label_249cf0:
    // 0x249cf0: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x249CF0u;
    {
        const bool branch_taken_0x249cf0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x249CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249CF0u;
        // 0x249cf4: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249cf0) {
            ctx->pc = 0x249CFCu;
            goto label_249cfc;
        }
    }
    ctx->pc = 0x249CF8u;
    // 0x249cf8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x249cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_249cfc:
    // 0x249cfc: 0x12a00002  beqz        $s5, . + 4 + (0x2 << 2)
    ctx->pc = 0x249CFCu;
    {
        const bool branch_taken_0x249cfc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x249D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249CFCu;
        // 0x249d00: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249cfc) {
            ctx->pc = 0x249D08u;
            goto label_249d08;
        }
    }
    ctx->pc = 0x249D04u;
    // 0x249d04: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x249d04u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_249d08:
    // 0x249d08: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x249D08u;
    {
        const bool branch_taken_0x249d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D08u;
        // 0x249d0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d08) {
            ctx->pc = 0x249D44u;
            goto label_249d44;
        }
    }
    ctx->pc = 0x249D10u;
label_249d10:
    // 0x249d10: 0xc093620  jal         func_24D880
    ctx->pc = 0x249D10u;
    SET_GPR_U32(ctx, 31, 0x249D18u);
    ctx->pc = 0x249D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249D10u;
    // 0x249d14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D880u, 0x249D10u, 0x249D18u)) {
        return;
    }
    ctx->pc = 0x249D18u;
label_249d18:
    // 0x249d18: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x249D18u;
    {
        const bool branch_taken_0x249d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D18u;
        // 0x249d1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d18) {
            ctx->pc = 0x249D44u;
            goto label_249d44;
        }
    }
    ctx->pc = 0x249D20u;
label_249d20:
    // 0x249d20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x249d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249d24: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x249d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249d28: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x249d28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249d2c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x249d2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249d30: 0xc0926aa  jal         func_249AA8
    ctx->pc = 0x249D30u;
    SET_GPR_U32(ctx, 31, 0x249D38u);
    ctx->pc = 0x249D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249D30u;
    // 0x249d34: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249AA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249AA8u, 0x249D30u, 0x249D38u)) {
        return;
    }
    ctx->pc = 0x249D38u;
label_249d38:
    // 0x249d38: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x249D38u;
    {
        const bool branch_taken_0x249d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D38u;
        // 0x249d3c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d38) {
            ctx->pc = 0x249C70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249c70;
        }
    }
    ctx->pc = 0x249D40u;
    // 0x249d40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x249d40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249d44:
    // 0x249d44: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x249d44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x249d48: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x249d48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x249d4c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x249d4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x249d50: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x249d50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x249d54: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x249d54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x249d58: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x249d58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x249d5c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x249d5cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x249d60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x249d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x249d64: 0x3e00008  jr          $ra
    ctx->pc = 0x249D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D64u;
        // 0x249d68: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249D6Cu;
    // 0x249d6c: 0x0  nop
    ctx->pc = 0x249d6cu;
    // NOP
    ctx->pc = 0x249d70u;
}
