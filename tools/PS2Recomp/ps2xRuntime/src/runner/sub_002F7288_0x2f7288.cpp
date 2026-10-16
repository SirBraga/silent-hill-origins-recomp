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

// Function: sub_002F7288
// Address: 0x2f7288 - 0x2f7460
void sub_002F7288_0x2f7288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7288_0x2f7288");
#endif

    switch (ctx->pc) {
        case 0x2f72e0u: goto label_2f72e0;
        case 0x2f7338u: goto label_2f7338;
        case 0x2f7344u: goto label_2f7344;
        case 0x2f7350u: goto label_2f7350;
        case 0x2f7364u: goto label_2f7364;
        case 0x2f7374u: goto label_2f7374;
        default: break;
    }

    ctx->pc = 0x2f7288u;

    // 0x2f7288: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2f7288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2f728c: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x2f728cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2f7290: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2f7290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2f7294: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2f7294u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7298: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2f7298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2f729c: 0x2c31818  mult        $v1, $s6, $v1
    ctx->pc = 0x2f729cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2f72a0: 0x3c1e0072  lui         $fp, 0x72
    ctx->pc = 0x2f72a0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)114 << 16));
    // 0x2f72a4: 0x27c214c8  addiu       $v0, $fp, 0x14C8
    ctx->pc = 0x2f72a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 5320));
    // 0x2f72a8: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2f72a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2f72ac: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2f72acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2f72b0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2f72b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2f72b4: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x2f72b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x2f72b8: 0x24170003  addiu       $s7, $zero, 0x3
    ctx->pc = 0x2f72b8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f72bc: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2f72bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2f72c0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2f72c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f72c4: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2f72c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2f72c8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2f72c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2f72cc: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2f72ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2f72d0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2f72d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2f72d4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f72d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f72d8: 0xc0be154  jal         func_2F8550
    ctx->pc = 0x2F72D8u;
    SET_GPR_U32(ctx, 31, 0x2F72E0u);
    ctx->pc = 0x2F72DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F72D8u;
    // 0x2f72dc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8550u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F8550u, 0x2F72D8u, 0x2F72E0u)) {
        return;
    }
    ctx->pc = 0x2F72E0u;
label_2f72e0:
    // 0x2f72e0: 0x10570028  beq         $v0, $s7, . + 4 + (0x28 << 2)
    ctx->pc = 0x2F72E0u;
    {
        const bool branch_taken_0x2f72e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        ctx->pc = 0x2F72E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F72E0u;
        // 0x2f72e4: 0x3c130072  lui         $s3, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)114 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f72e0) {
            ctx->pc = 0x2F7384u;
            goto label_2f7384;
        }
    }
    ctx->pc = 0x2F72E8u;
    // 0x2f72e8: 0x24032080  addiu       $v1, $zero, 0x2080
    ctx->pc = 0x2f72e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8320));
    // 0x2f72ec: 0x26621540  addiu       $v0, $s3, 0x1540
    ctx->pc = 0x2f72ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 5440));
    // 0x2f72f0: 0x3c100072  lui         $s0, 0x72
    ctx->pc = 0x2f72f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)114 << 16));
    // 0x2f72f4: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x2f72f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x2f72f8: 0x261035c0  addiu       $s0, $s0, 0x35C0
    ctx->pc = 0x2f72f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 13760));
    // 0x2f72fc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2f72fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2f7300: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f7300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7304: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2f7304u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2f7308: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f7308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f730c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2f730cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2f7310: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2f7310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2f7314: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x2f7314u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x2f7318: 0x3c110068  lui         $s1, 0x68
    ctx->pc = 0x2f7318u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)104 << 16));
    // 0x2f731c: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x2f731cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x2f7320: 0x3c15002f  lui         $s5, 0x2F
    ctx->pc = 0x2f7320u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)47 << 16));
    // 0x2f7324: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x2f7324u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x2f7328: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2f7328u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f732c: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x2f732cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x2f7330: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2F7330u;
    SET_GPR_U32(ctx, 31, 0x2F7338u);
    ctx->pc = 0x2F7334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7330u;
    // 0x2f7334: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2F7330u, 0x2F7338u)) {
        return;
    }
    ctx->pc = 0x2F7338u;
label_2f7338:
    // 0x2f7338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f7338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f733c: 0xc0c86e4  jal         func_321B90
    ctx->pc = 0x2F733Cu;
    SET_GPR_U32(ctx, 31, 0x2F7344u);
    ctx->pc = 0x2F7340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F733Cu;
    // 0x2f7340: 0x248500ff  addiu       $a1, $a0, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x2F733Cu, 0x2F7344u)) {
        return;
    }
    ctx->pc = 0x2F7344u;
label_2f7344:
    // 0x2f7344: 0xae37664c  sw          $s7, 0x664C($s1)
    ctx->pc = 0x2f7344u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26188), GPR_U32(ctx, 23));
    // 0x2f7348: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2f7348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f734c: 0x0  nop
    ctx->pc = 0x2f734cu;
    // NOP
label_2f7350:
    // 0x2f7350: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2f7350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7354: 0x8e25664c  lw          $a1, 0x664C($s1)
    ctx->pc = 0x2f7354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26188)));
    // 0x2f7358: 0x26671540  addiu       $a3, $s3, 0x1540
    ctx->pc = 0x2f7358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 5440));
    // 0x2f735c: 0xc0be19a  jal         func_2F8668
    ctx->pc = 0x2F735Cu;
    SET_GPR_U32(ctx, 31, 0x2F7364u);
    ctx->pc = 0x2F7360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F735Cu;
    // 0x2f7360: 0x26a870e8  addiu       $t0, $s5, 0x70E8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 28904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F8668u, 0x2F735Cu, 0x2F7364u)) {
        return;
    }
    ctx->pc = 0x2F7364u;
label_2f7364:
    // 0x2f7364: 0x5454fffa  bnel        $v0, $s4, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F7364u;
    {
        const bool branch_taken_0x2f7364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2f7364) {
            ctx->pc = 0x2F7368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7364u;
            // 0x2f7368: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f7350;
        }
    }
    ctx->pc = 0x2F736Cu;
    // 0x2f736c: 0xc0bdbf0  jal         func_2F6FC0
    ctx->pc = 0x2F736Cu;
    SET_GPR_U32(ctx, 31, 0x2F7374u);
    ctx->pc = 0x2F6FC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6FC0u, 0x2F736Cu, 0x2F7374u)) {
        return;
    }
    ctx->pc = 0x2F7374u;
label_2f7374:
    // 0x2f7374: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x2f7374u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7378: 0x8d820008  lw          $v0, 0x8($t4)
    ctx->pc = 0x2f7378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x2f737c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F737Cu;
    {
        const bool branch_taken_0x2f737c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F7380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F737Cu;
        // 0x2f7380: 0x24070024  addiu       $a3, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f737c) {
            ctx->pc = 0x2F738Cu;
            goto label_2f738c;
        }
    }
    ctx->pc = 0x2F7384u;
label_2f7384:
    // 0x2f7384: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2F7384u;
    {
        const bool branch_taken_0x2f7384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7384u;
        // 0x2f7388: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7384) {
            ctx->pc = 0x2F742Cu;
            goto label_2f742c;
        }
    }
    ctx->pc = 0x2F738Cu;
label_2f738c:
    // 0x2f738c: 0x9182000d  lbu         $v0, 0xD($t4)
    ctx->pc = 0x2f738cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 13)));
    // 0x2f7390: 0x2c73818  mult        $a3, $s6, $a3
    ctx->pc = 0x2f7390u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2f7394: 0x9183000c  lbu         $v1, 0xC($t4)
    ctx->pc = 0x2f7394u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x2f7398: 0x27c414c8  addiu       $a0, $fp, 0x14C8
    ctx->pc = 0x2f7398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 5320));
    // 0x2f739c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x2f739cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f73a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f73a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f73a4: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2f73a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f73a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f73a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f73ac: 0x872821  addu        $a1, $a0, $a3
    ctx->pc = 0x2f73acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2f73b0: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2f73b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x2f73b4: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x2f73b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2f73b8: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2f73b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f73bc: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2f73bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f73c0: 0x9183000f  lbu         $v1, 0xF($t4)
    ctx->pc = 0x2f73c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 15)));
    // 0x2f73c4: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2f73c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f73c8: 0x9184000e  lbu         $a0, 0xE($t4)
    ctx->pc = 0x2f73c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 14)));
    // 0x2f73cc: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2f73ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2f73d0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2f73d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2f73d4: 0xad04000c  sw          $a0, 0xC($t0)
    ctx->pc = 0x2f73d4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 4));
    // 0x2f73d8: 0x91860011  lbu         $a2, 0x11($t4)
    ctx->pc = 0x2f73d8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 17)));
    // 0x2f73dc: 0x91850013  lbu         $a1, 0x13($t4)
    ctx->pc = 0x2f73dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 19)));
    // 0x2f73e0: 0x91840012  lbu         $a0, 0x12($t4)
    ctx->pc = 0x2f73e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 18)));
    // 0x2f73e4: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x2f73e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x2f73e8: 0x91830010  lbu         $v1, 0x10($t4)
    ctx->pc = 0x2f73e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x2f73ec: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2f73ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2f73f0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2f73f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2f73f4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2f73f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2f73f8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2f73f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2f73fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f73fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f7400: 0xad230010  sw          $v1, 0x10($t1)
    ctx->pc = 0x2f7400u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 3));
    // 0x2f7404: 0xad4b0014  sw          $t3, 0x14($t2)
    ctx->pc = 0x2f7404u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 11));
    // 0x2f7408: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2f7408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2f740c: 0x68e4000f  ldl         $a0, 0xF($a3)
    ctx->pc = 0x2f740cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2f7410: 0x6ce40008  ldr         $a0, 0x8($a3)
    ctx->pc = 0x2f7410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2f7414: 0x68e50017  ldl         $a1, 0x17($a3)
    ctx->pc = 0x2f7414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2f7418: 0x6ce50010  ldr         $a1, 0x10($a3)
    ctx->pc = 0x2f7418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2f741c: 0xb0640007  sdl         $a0, 0x7($v1)
    ctx->pc = 0x2f741cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f7420: 0xb4640000  sdr         $a0, 0x0($v1)
    ctx->pc = 0x2f7420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f7424: 0xb065000f  sdl         $a1, 0xF($v1)
    ctx->pc = 0x2f7424u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f7428: 0xb4650008  sdr         $a1, 0x8($v1)
    ctx->pc = 0x2f7428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f742c:
    // 0x2f742c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2f742cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f7430: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2f7430u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f7434: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2f7434u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f7438: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2f7438u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f743c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2f743cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f7440: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2f7440u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f7444: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2f7444u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f7448: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2f7448u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f744c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2f744cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f7450: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f7450u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f7454: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7454u;
        // 0x2f7458: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F745Cu;
    // 0x2f745c: 0x0  nop
    ctx->pc = 0x2f745cu;
    // NOP
    ctx->pc = 0x2f7460u;
}
