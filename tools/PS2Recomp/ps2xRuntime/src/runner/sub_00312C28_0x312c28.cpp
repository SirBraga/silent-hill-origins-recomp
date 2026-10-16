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

// Function: sub_00312C28
// Address: 0x312c28 - 0x312de0
void sub_00312C28_0x312c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312C28_0x312c28");
#endif

    switch (ctx->pc) {
        case 0x312cb0u: goto label_312cb0;
        case 0x312d30u: goto label_312d30;
        case 0x312d60u: goto label_312d60;
        case 0x312da8u: goto label_312da8;
        default: break;
    }

    ctx->pc = 0x312c28u;

    // 0x312c28: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x312c28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312c2c: 0x31020007  andi        $v0, $t0, 0x7
    ctx->pc = 0x312c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)7);
    // 0x312c30: 0x54400048  bnel        $v0, $zero, . + 4 + (0x48 << 2)
    ctx->pc = 0x312C30u;
    {
        const bool branch_taken_0x312c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x312c30) {
            ctx->pc = 0x312C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312C30u;
            // 0x312c34: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312D54u;
            goto label_312d54;
        }
    }
    ctx->pc = 0x312C38u;
    // 0x312c38: 0x3103000f  andi        $v1, $t0, 0xF
    ctx->pc = 0x312c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x312c3c: 0x54600027  bnel        $v1, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x312C3Cu;
    {
        const bool branch_taken_0x312c3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x312c3c) {
            ctx->pc = 0x312C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312C3Cu;
            // 0x312c40: 0xdd020000  ld          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312CDCu;
            goto label_312cdc;
        }
    }
    ctx->pc = 0x312C44u;
    // 0x312c44: 0x34078080  ori         $a3, $zero, 0x8080
    ctx->pc = 0x312c44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x312c48: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x312c48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x312c4c: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x312c4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x312c50: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x312c50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x312c54: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x312c54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x312c58: 0x73a78  dsll        $a3, $a3, 9
    ctx->pc = 0x312c58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 9);
    // 0x312c5c: 0x34e70101  ori         $a3, $a3, 0x101
    ctx->pc = 0x312c5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)257);
    // 0x312c60: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x312c60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x312c64: 0x70e74b89  pcpyld      $t1, $a3, $a3
    ctx->pc = 0x312c64u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
    // 0x312c68: 0x34048080  ori         $a0, $zero, 0x8080
    ctx->pc = 0x312c68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x312c6c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x312c6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x312c70: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x312c70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x312c74: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x312c74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x312c78: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x312c78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x312c7c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x312c7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x312c80: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x312c80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x312c84: 0x70491a48  psubb       $v1, $v0, $t1
    ctx->pc = 0x312c84u;
    SET_GPR_VEC(ctx, 3, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x312c88: 0x700214e9  pnor        $v0, $zero, $v0
    ctx->pc = 0x312c88u;
    SET_GPR_VEC(ctx, 2, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x312c8c: 0x70845389  pcpyld      $t2, $a0, $a0
    ctx->pc = 0x312c8cu;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x312c90: 0x70621c89  pand        $v1, $v1, $v0
    ctx->pc = 0x312c90u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x312c94: 0x706a1c89  pand        $v1, $v1, $t2
    ctx->pc = 0x312c94u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 10)));
    // 0x312c98: 0x706413a9  pcpyud      $v0, $v1, $a0
    ctx->pc = 0x312c98u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x312c9c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x312c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x312ca0: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x312CA0u;
    {
        const bool branch_taken_0x312ca0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x312CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312CA0u;
        // 0x312ca4: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312ca0) {
            ctx->pc = 0x312D4Cu;
            goto label_312d4c;
        }
    }
    ctx->pc = 0x312CA8u;
    // 0x312ca8: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x312ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x312cac: 0x0  nop
    ctx->pc = 0x312cacu;
    // NOP
label_312cb0:
    // 0x312cb0: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x312cb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x312cb4: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x312cb4u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x312cb8: 0x70491248  psubb       $v0, $v0, $t1
    ctx->pc = 0x312cb8u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x312cbc: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x312cbcu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x312cc0: 0x704a1489  pand        $v0, $v0, $t2
    ctx->pc = 0x312cc0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x312cc4: 0x70441ba9  pcpyud      $v1, $v0, $a0
    ctx->pc = 0x312cc4u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x312cc8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x312cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x312ccc: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x312CCCu;
    {
        const bool branch_taken_0x312ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312CCCu;
        // 0x312cd0: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312ccc) {
            ctx->pc = 0x312CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312cb0;
        }
    }
    ctx->pc = 0x312CD4u;
    // 0x312cd4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x312CD4u;
    {
        const bool branch_taken_0x312cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312CD4u;
        // 0x312cd8: 0x24e7fff0  addiu       $a3, $a3, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312cd4) {
            ctx->pc = 0x312D4Cu;
            goto label_312d4c;
        }
    }
    ctx->pc = 0x312CDCu;
label_312cdc:
    // 0x312cdc: 0x34098080  ori         $t1, $zero, 0x8080
    ctx->pc = 0x312cdcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x312ce0: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x312ce0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x312ce4: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x312ce4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x312ce8: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x312ce8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x312cec: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x312cecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x312cf0: 0x94a78  dsll        $t1, $t1, 9
    ctx->pc = 0x312cf0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 9);
    // 0x312cf4: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x312cf4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x312cf8: 0x34048080  ori         $a0, $zero, 0x8080
    ctx->pc = 0x312cf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x312cfc: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x312cfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x312d00: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x312d00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x312d04: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x312d04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x312d08: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x312d08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x312d0c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x312d0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x312d10: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x312d10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x312d14: 0x49182f  dsubu       $v1, $v0, $t1
    ctx->pc = 0x312d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x312d18: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x312d18u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x312d1c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x312d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x312d20: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x312d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x312d24: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x312D24u;
    {
        const bool branch_taken_0x312d24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x312D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312D24u;
        // 0x312d28: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312d24) {
            ctx->pc = 0x312D4Cu;
            goto label_312d4c;
        }
    }
    ctx->pc = 0x312D2Cu;
    // 0x312d2c: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x312d2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_312d30:
    // 0x312d30: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x312d30u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x312d34: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x312d34u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x312d38: 0x49102f  dsubu       $v0, $v0, $t1
    ctx->pc = 0x312d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x312d3c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x312d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x312d40: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x312d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x312d44: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x312D44u;
    {
        const bool branch_taken_0x312d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x312d44) {
            ctx->pc = 0x312D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312D44u;
            // 0x312d48: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312d30;
        }
    }
    ctx->pc = 0x312D4Cu;
label_312d4c:
    // 0x312d4c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x312d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312d50: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x312d50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_312d54:
    // 0x312d54: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x312D54u;
    {
        const bool branch_taken_0x312d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312D54u;
        // 0x312d58: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312d54) {
            ctx->pc = 0x312D78u;
            goto label_312d78;
        }
    }
    ctx->pc = 0x312D5Cu;
    // 0x312d5c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x312d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_312d60:
    // 0x312d60: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x312d60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x312d64: 0x0  nop
    ctx->pc = 0x312d64u;
    // NOP
    // 0x312d68: 0x0  nop
    ctx->pc = 0x312d68u;
    // NOP
    // 0x312d6c: 0x0  nop
    ctx->pc = 0x312d6cu;
    // NOP
    // 0x312d70: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x312D70u;
    {
        const bool branch_taken_0x312d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x312d70) {
            ctx->pc = 0x312D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312D70u;
            // 0x312d74: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312d60;
        }
    }
    ctx->pc = 0x312D78u;
label_312d78:
    // 0x312d78: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x312d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x312d7c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x312d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x312d80: 0x10c20014  beq         $a2, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x312D80u;
    {
        const bool branch_taken_0x312d80 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x312d80) {
            ctx->pc = 0x312DD4u;
            goto label_312dd4;
        }
    }
    ctx->pc = 0x312D88u;
    // 0x312d88: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x312d88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x312d8c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x312d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x312d90: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x312d90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x312d94: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x312d94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x312d98: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x312D98u;
    {
        const bool branch_taken_0x312d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312D98u;
        // 0x312d9c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312d98) {
            ctx->pc = 0x312DD4u;
            goto label_312dd4;
        }
    }
    ctx->pc = 0x312DA0u;
    // 0x312da0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x312da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x312da4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x312da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_312da8:
    // 0x312da8: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x312DA8u;
    {
        const bool branch_taken_0x312da8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x312da8) {
            ctx->pc = 0x312DACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312DA8u;
            // 0x312dac: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312DB0u;
            goto label_312db0;
        }
    }
    ctx->pc = 0x312DB0u;
label_312db0:
    // 0x312db0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x312db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x312db4: 0x10c30007  beq         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x312DB4u;
    {
        const bool branch_taken_0x312db4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x312db4) {
            ctx->pc = 0x312DD4u;
            goto label_312dd4;
        }
    }
    ctx->pc = 0x312DBCu;
    // 0x312dbc: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x312dbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x312dc0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x312dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x312dc4: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x312dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x312dc8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x312dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x312dcc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x312DCCu;
    {
        const bool branch_taken_0x312dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x312DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312DCCu;
        // 0x312dd0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312dcc) {
            ctx->pc = 0x312DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312da8;
        }
    }
    ctx->pc = 0x312DD4u;
label_312dd4:
    // 0x312dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x312DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312DD4u;
        // 0x312dd8: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312DDCu;
    // 0x312ddc: 0x0  nop
    ctx->pc = 0x312ddcu;
    // NOP
    ctx->pc = 0x312de0u;
}
