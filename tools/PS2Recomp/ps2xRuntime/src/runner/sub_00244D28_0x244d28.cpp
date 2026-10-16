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

// Function: sub_00244D28
// Address: 0x244d28 - 0x244ed8
void sub_00244D28_0x244d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244D28_0x244d28");
#endif

    switch (ctx->pc) {
        case 0x244dc0u: goto label_244dc0;
        case 0x244eb8u: goto label_244eb8;
        default: break;
    }

    ctx->pc = 0x244d28u;

    // 0x244d28: 0x64c6000f  daddiu      $a2, $a2, 0xF
    ctx->pc = 0x244d28u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)15);
    // 0x244d2c: 0x24037fee  addiu       $v1, $zero, 0x7FEE
    ctx->pc = 0x244d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32750));
    // 0x244d30: 0x65738  dsll        $t2, $a2, 28
    ctx->pc = 0x244d30u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) << 28);
    // 0x244d34: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x244d34u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x244d38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x244d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x244d3c: 0x254b7fed  addiu       $t3, $t2, 0x7FED
    ctx->pc = 0x244d3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 32749));
    // 0x244d40: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x244d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x244d44: 0x163001a  div         $zero, $t3, $v1
    ctx->pc = 0x244d44u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 11);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x244d48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x244d48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244d4c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x244d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x244d50: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x244d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x244d54: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x244d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x244d58: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x244d58u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x244d5c: 0x35290001  ori         $t1, $t1, 0x1
    ctx->pc = 0x244d5cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
    // 0x244d60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x244d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x244d64: 0x3406a000  ori         $a2, $zero, 0xA000
    ctx->pc = 0x244d64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x244d68: 0x637b8  dsll        $a2, $a2, 30
    ctx->pc = 0x244d68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 30);
    // 0x244d6c: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x244d6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x244d70: 0x63478  dsll        $a2, $a2, 17
    ctx->pc = 0x244d70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 17);
    // 0x244d74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x244d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x244d78: 0x2604003f  addiu       $a0, $s0, 0x3F
    ctx->pc = 0x244d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
    // 0x244d7c: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x244d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
    // 0x244d80: 0x70c9c389  pcpyld      $t8, $a2, $t1
    ctx->pc = 0x244d80u;
    SET_GPR_VEC(ctx, 24, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 9)));
    // 0x244d84: 0x824024  and         $t0, $a0, $v0
    ctx->pc = 0x244d84u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x244d88: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x244D88u;
    {
        const bool branch_taken_0x244d88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x244d88) {
            ctx->pc = 0x244D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244D88u;
            // 0x244d8c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x244D90u;
            goto label_244d90;
        }
    }
    ctx->pc = 0x244D90u;
label_244d90:
    // 0x244d90: 0x30f300ff  andi        $s3, $a3, 0xFF
    ctx->pc = 0x244d90u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x244d94: 0x6012  mflo        $t4
    ctx->pc = 0x244d94u;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x244d98: 0x1980002d  blez        $t4, . + 4 + (0x2D << 2)
    ctx->pc = 0x244D98u;
    {
        const bool branch_taken_0x244d98 = (GPR_S64(ctx, 12) <= 0);
        ctx->pc = 0x244D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D98u;
        // 0x244d9c: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244d98) {
            ctx->pc = 0x244E50u;
            goto label_244e50;
        }
    }
    ctx->pc = 0x244DA0u;
    // 0x244da0: 0x3c0e0007  lui         $t6, 0x7
    ctx->pc = 0x244da0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)7 << 16));
    // 0x244da4: 0x34128000  ori         $s2, $zero, 0x8000
    ctx->pc = 0x244da4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x244da8: 0x12933c  dsll32      $s2, $s2, 12
    ctx->pc = 0x244da8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 12));
    // 0x244dac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x244dacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244db0: 0x3c075000  lui         $a3, 0x5000
    ctx->pc = 0x244db0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20480 << 16));
    // 0x244db4: 0x35cefee0  ori         $t6, $t6, 0xFEE0
    ctx->pc = 0x244db4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65248);
    // 0x244db8: 0x240f7fee  addiu       $t7, $zero, 0x7FEE
    ctx->pc = 0x244db8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 32750));
    // 0x244dbc: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x244dbcu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244dc0:
    // 0x244dc0: 0x7d180000  sq          $t8, 0x0($t0)
    ctx->pc = 0x244dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 24));
    // 0x244dc4: 0x29427fef  slti        $v0, $t2, 0x7FEF
    ctx->pc = 0x244dc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)32751) ? 1 : 0);
    // 0x244dc8: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x244dc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x244dcc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x244DCCu;
    {
        const bool branch_taken_0x244dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x244DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244DCCu;
        // 0x244dd0: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244dcc) {
            ctx->pc = 0x244DD8u;
            goto label_244dd8;
        }
    }
    ctx->pc = 0x244DD4u;
    // 0x244dd4: 0x24047fee  addiu       $a0, $zero, 0x7FEE
    ctx->pc = 0x244dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32750));
label_244dd8:
    // 0x244dd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x244dd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244ddc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x244ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x244de0: 0x16f001a  div         $zero, $t3, $t7
    ctx->pc = 0x244de0u;
    { int32_t divisor = GPR_S32(ctx, 15);    int32_t dividend = GPR_S32(ctx, 11);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x244de4: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x244de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x244de8: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x244de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x244dec: 0x31f00  sll         $v1, $v1, 28
    ctx->pc = 0x244decu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 28));
    // 0x244df0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x244df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x244df4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x244df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x244df8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x244df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x244dfc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x244dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x244e00: 0x524825  or          $t1, $v0, $s2
    ctx->pc = 0x244e00u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x244e04: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x244e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x244e08: 0x72293389  pcpyld      $a2, $s1, $t1
    ctx->pc = 0x244e08u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x244e0c: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x244e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x244e10: 0x7d060000  sq          $a2, 0x0($t0)
    ctx->pc = 0x244e10u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 6));
    // 0x244e14: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x244e14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x244e18: 0x624825  or          $t1, $v1, $v0
    ctx->pc = 0x244e18u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x244e1c: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x244e1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x244e20: 0x70c91389  pcpyld      $v0, $a2, $t1
    ctx->pc = 0x244e20u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 9)));
    // 0x244e24: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x244e24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x244e28: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x244e28u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x244e2c: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x244e2cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x244e30: 0x51f90001  beql        $t7, $t9, . + 4 + (0x1 << 2)
    ctx->pc = 0x244E30u;
    {
        const bool branch_taken_0x244e30 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 25));
        if (branch_taken_0x244e30) {
            ctx->pc = 0x244E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244E30u;
            // 0x244e34: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x244E38u;
            goto label_244e38;
        }
    }
    ctx->pc = 0x244E38u;
label_244e38:
    // 0x244e38: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x244e38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x244e3c: 0xae2821  addu        $a1, $a1, $t6
    ctx->pc = 0x244e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
    // 0x244e40: 0x6012  mflo        $t4
    ctx->pc = 0x244e40u;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x244e44: 0x1ac102a  slt         $v0, $t5, $t4
    ctx->pc = 0x244e44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x244e48: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x244E48u;
    {
        const bool branch_taken_0x244e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x244E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E48u;
        // 0x244e4c: 0x254a8012  addiu       $t2, $t2, -0x7FEE (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294934546));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244e48) {
            ctx->pc = 0x244DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244dc0;
        }
    }
    ctx->pc = 0x244E50u;
label_244e50:
    // 0x244e50: 0x3c096000  lui         $t1, 0x6000
    ctx->pc = 0x244e50u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)24576 << 16));
    // 0x244e54: 0x35290002  ori         $t1, $t1, 0x2
    ctx->pc = 0x244e54u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2);
    // 0x244e58: 0x3406a000  ori         $a2, $zero, 0xA000
    ctx->pc = 0x244e58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x244e5c: 0x63778  dsll        $a2, $a2, 29
    ctx->pc = 0x244e5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 29);
    // 0x244e60: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x244e60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x244e64: 0x634b8  dsll        $a2, $a2, 18
    ctx->pc = 0x244e64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 18);
    // 0x244e68: 0x70c91389  pcpyld      $v0, $a2, $t1
    ctx->pc = 0x244e68u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 9)));
    // 0x244e6c: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x244e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x244e70: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x244e70u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x244e74: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x244e74u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x244e78: 0x94b7c  dsll32      $t1, $t1, 13
    ctx->pc = 0x244e78u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 13));
    // 0x244e7c: 0x35298001  ori         $t1, $t1, 0x8001
    ctx->pc = 0x244e7cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32769);
    // 0x244e80: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x244e80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x244e84: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x244e84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x244e88: 0x70c93389  pcpyld      $a2, $a2, $t1
    ctx->pc = 0x244e88u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 9)));
    // 0x244e8c: 0x24634140  addiu       $v1, $v1, 0x4140
    ctx->pc = 0x244e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16704));
    // 0x244e90: 0x7d060000  sq          $a2, 0x0($t0)
    ctx->pc = 0x244e90u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 6));
    // 0x244e94: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x244e94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x244e98: 0x2605003f  addiu       $a1, $s0, 0x3F
    ctx->pc = 0x244e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
    // 0x244e9c: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x244e9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65472);
    // 0x244ea0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x244ea0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x244ea4: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x244ea4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x244ea8: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x244ea8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x244eac: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x244eacu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x244eb0: 0xc0c86e4  jal         func_321B90
    ctx->pc = 0x244EB0u;
    SET_GPR_U32(ctx, 31, 0x244EB8u);
    ctx->pc = 0x244EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244EB0u;
    // 0x244eb4: 0x2505008f  addiu       $a1, $t0, 0x8F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 143));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x244EB0u, 0x244EB8u)) {
        return;
    }
    ctx->pc = 0x244EB8u;
label_244eb8:
    // 0x244eb8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x244eb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244ebc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x244ebcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x244ec0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x244ec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x244ec4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x244ec4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x244ec8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x244ec8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244ecc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x244ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244ED0u;
        // 0x244ed4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244ED8u;
}
