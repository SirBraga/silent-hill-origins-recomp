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

// Function: sub_00206C30
// Address: 0x206c30 - 0x206d58
void sub_00206C30_0x206c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206C30_0x206c30");
#endif

    switch (ctx->pc) {
        case 0x206c60u: goto label_206c60;
        case 0x206cacu: goto label_206cac;
        case 0x206cc0u: goto label_206cc0;
        default: break;
    }

    ctx->pc = 0x206c30u;

    // 0x206c30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x206c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x206c34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x206c34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206c38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x206c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x206c3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x206c3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206c40: 0x12000040  beqz        $s0, . + 4 + (0x40 << 2)
    ctx->pc = 0x206C40u;
    {
        const bool branch_taken_0x206c40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x206C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206C40u;
        // 0x206c44: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206c40) {
            ctx->pc = 0x206D44u;
            goto label_206d44;
        }
    }
    ctx->pc = 0x206C48u;
    // 0x206c48: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x206c48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x206c4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x206c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206c50: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x206C50u;
    {
        const bool branch_taken_0x206c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206C50u;
        // 0x206c54: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206c50) {
            ctx->pc = 0x206C9Cu;
            goto label_206c9c;
        }
    }
    ctx->pc = 0x206C58u;
    // 0x206c58: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x206c58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x206c5c: 0x0  nop
    ctx->pc = 0x206c5cu;
    // NOP
label_206c60:
    // 0x206c60: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x206c60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x206c64: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x206C64u;
    {
        const bool branch_taken_0x206c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206c64) {
            ctx->pc = 0x206C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206C64u;
            // 0x206c68: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206C90u;
            goto label_206c90;
        }
    }
    ctx->pc = 0x206C6Cu;
    // 0x206c6c: 0x2c620080  sltiu       $v0, $v1, 0x80
    ctx->pc = 0x206c6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x206c70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x206C70u;
    {
        const bool branch_taken_0x206c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206C70u;
        // 0x206c74: 0x2c620800  sltiu       $v0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2048) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x206c70) {
            ctx->pc = 0x206C80u;
            goto label_206c80;
        }
    }
    ctx->pc = 0x206C78u;
    // 0x206c78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x206C78u;
    {
        const bool branch_taken_0x206c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206C78u;
        // 0x206c7c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206c78) {
            ctx->pc = 0x206C8Cu;
            goto label_206c8c;
        }
    }
    ctx->pc = 0x206C80u;
label_206c80:
    // 0x206c80: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x206C80u;
    {
        const bool branch_taken_0x206c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206c80) {
            ctx->pc = 0x206C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206C80u;
            // 0x206c84: 0x24840003  addiu       $a0, $a0, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206C8Cu;
            goto label_206c8c;
        }
    }
    ctx->pc = 0x206C88u;
    // 0x206c88: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x206c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_206c8c:
    // 0x206c8c: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x206c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_206c90:
    // 0x206c90: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x206c90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x206c94: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x206C94u;
    {
        const bool branch_taken_0x206c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206c94) {
            ctx->pc = 0x206C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206C94u;
            // 0x206c98: 0x94c30000  lhu         $v1, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_206c60;
        }
    }
    ctx->pc = 0x206C9Cu;
label_206c9c:
    // 0x206c9c: 0x54a00005  bnel        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x206C9Cu;
    {
        const bool branch_taken_0x206c9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x206c9c) {
            ctx->pc = 0x206CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206C9Cu;
            // 0x206ca0: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206CB4u;
            goto label_206cb4;
        }
    }
    ctx->pc = 0x206CA4u;
    // 0x206ca4: 0xc080888  jal         func_202220
    ctx->pc = 0x206CA4u;
    SET_GPR_U32(ctx, 31, 0x206CACu);
    ctx->pc = 0x206CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206CA4u;
    // 0x206ca8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202220u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202220u, 0x206CA4u, 0x206CACu)) {
        return;
    }
    ctx->pc = 0x206CACu;
label_206cac:
    // 0x206cac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x206cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206cb0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x206cb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_206cb4:
    // 0x206cb4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x206CB4u;
    {
        const bool branch_taken_0x206cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206CB4u;
        // 0x206cb8: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206cb4) {
            ctx->pc = 0x206D3Cu;
            goto label_206d3c;
        }
    }
    ctx->pc = 0x206CBCu;
    // 0x206cbc: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x206cbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_206cc0:
    // 0x206cc0: 0x2c82000a  sltiu       $v0, $a0, 0xA
    ctx->pc = 0x206cc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x206cc4: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x206CC4u;
    {
        const bool branch_taken_0x206cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206cc4) {
            ctx->pc = 0x206CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206CC4u;
            // 0x206cc8: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206D30u;
            goto label_206d30;
        }
    }
    ctx->pc = 0x206CCCu;
    // 0x206ccc: 0x2c820080  sltiu       $v0, $a0, 0x80
    ctx->pc = 0x206cccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x206cd0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x206CD0u;
    {
        const bool branch_taken_0x206cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206CD0u;
        // 0x206cd4: 0x2c820800  sltiu       $v0, $a0, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2048) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x206cd0) {
            ctx->pc = 0x206CE0u;
            goto label_206ce0;
        }
    }
    ctx->pc = 0x206CD8u;
    // 0x206cd8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x206CD8u;
    {
        const bool branch_taken_0x206cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206CD8u;
        // 0x206cdc: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206cd8) {
            ctx->pc = 0x206D24u;
            goto label_206d24;
        }
    }
    ctx->pc = 0x206CE0u;
label_206ce0:
    // 0x206ce0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x206CE0u;
    {
        const bool branch_taken_0x206ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206CE0u;
        // 0x206ce4: 0x41182  srl         $v0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206ce0) {
            ctx->pc = 0x206CF0u;
            goto label_206cf0;
        }
    }
    ctx->pc = 0x206CE8u;
    // 0x206ce8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x206CE8u;
    {
        const bool branch_taken_0x206ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206CE8u;
        // 0x206cec: 0x344200c0  ori         $v0, $v0, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x206ce8) {
            ctx->pc = 0x206D10u;
            goto label_206d10;
        }
    }
    ctx->pc = 0x206CF0u;
label_206cf0:
    // 0x206cf0: 0x41302  srl         $v0, $a0, 12
    ctx->pc = 0x206cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 12));
    // 0x206cf4: 0x344200e0  ori         $v0, $v0, 0xE0
    ctx->pc = 0x206cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)224);
    // 0x206cf8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x206cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x206cfc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x206cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x206d00: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x206d00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x206d04: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x206d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x206d08: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x206d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x206d0c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x206d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_206d10:
    // 0x206d10: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x206d10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x206d14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x206d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x206d18: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x206d18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x206d1c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x206d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x206d20: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x206d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_206d24:
    // 0x206d24: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x206d24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x206d28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x206d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x206d2c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x206d2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_206d30:
    // 0x206d30: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x206d30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x206d34: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x206D34u;
    {
        const bool branch_taken_0x206d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206D34u;
        // 0x206d38: 0x3044ffff  andi        $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x206d34) {
            ctx->pc = 0x206CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_206cc0;
        }
    }
    ctx->pc = 0x206D3Cu;
label_206d3c:
    // 0x206d3c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x206d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x206d40: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x206d40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_206d44:
    // 0x206d44: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x206d44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206d48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x206D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206D4Cu;
        // 0x206d50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206D54u;
    // 0x206d54: 0x0  nop
    ctx->pc = 0x206d54u;
    // NOP
    ctx->pc = 0x206d58u;
}
