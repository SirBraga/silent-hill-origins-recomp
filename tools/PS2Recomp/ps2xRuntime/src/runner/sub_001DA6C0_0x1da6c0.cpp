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

// Function: sub_001DA6C0
// Address: 0x1da6c0 - 0x1da7c8
void sub_001DA6C0_0x1da6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA6C0_0x1da6c0");
#endif

    switch (ctx->pc) {
        case 0x1da6ecu: goto label_1da6ec;
        case 0x1da710u: goto label_1da710;
        case 0x1da75cu: goto label_1da75c;
        case 0x1da798u: goto label_1da798;
        default: break;
    }

    ctx->pc = 0x1da6c0u;

    // 0x1da6c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1da6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1da6c4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1da6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1da6c8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1da6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1da6cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1da6ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da6d0: 0x8c461a68  lw          $a2, 0x1A68($v0)
    ctx->pc = 0x1da6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x701A68u));
    // 0x1da6d4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1da6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1da6d8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1da6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1da6dc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1da6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1da6e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1da6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1da6e4: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x1DA6E4u;
    SET_GPR_U32(ctx, 31, 0x1DA6ECu);
    ctx->pc = 0x1DA6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA6E4u;
    // 0x1da6e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x1DA6E4u, 0x1DA6ECu)) {
        return;
    }
    ctx->pc = 0x1DA6ECu;
label_1da6ec:
    // 0x1da6ec: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1da6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da6f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1da6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1da6f4: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1DA6F4u;
    {
        const bool branch_taken_0x1da6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA6F4u;
        // 0x1da6f8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da6f4) {
            ctx->pc = 0x1DA7A8u;
            goto label_1da7a8;
        }
    }
    ctx->pc = 0x1DA6FCu;
    // 0x1da6fc: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x1da6fcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x1da700: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x1da700u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1da704: 0x3631fffb  ori         $s1, $s1, 0xFFFB
    ctx->pc = 0x1da704u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65531);
    // 0x1da708: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1da708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da70c: 0x0  nop
    ctx->pc = 0x1da70cu;
    // NOP
label_1da710:
    // 0x1da710: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1da710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1da714: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x1da714u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1da718: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DA718u;
    {
        const bool branch_taken_0x1da718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA718u;
        // 0x1da71c: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da718) {
            ctx->pc = 0x1DA738u;
            goto label_1da738;
        }
    }
    ctx->pc = 0x1DA720u;
    // 0x1da720: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1DA720u;
    {
        const bool branch_taken_0x1da720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da720) {
            ctx->pc = 0x1DA724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA720u;
            // 0x1da724: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA780u;
            goto label_1da780;
        }
    }
    ctx->pc = 0x1DA728u;
    // 0x1da728: 0x10730007  beq         $v1, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DA728u;
    {
        const bool branch_taken_0x1da728 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x1DA72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA728u;
        // 0x1da72c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da728) {
            ctx->pc = 0x1DA748u;
            goto label_1da748;
        }
    }
    ctx->pc = 0x1DA730u;
    // 0x1da730: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1DA730u;
    {
        const bool branch_taken_0x1da730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA730u;
        // 0x1da734: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da730) {
            ctx->pc = 0x1DA784u;
            goto label_1da784;
        }
    }
    ctx->pc = 0x1DA738u;
label_1da738:
    // 0x1da738: 0x5072000a  beql        $v1, $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x1DA738u;
    {
        const bool branch_taken_0x1da738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        if (branch_taken_0x1da738) {
            ctx->pc = 0x1DA73Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA738u;
            // 0x1da73c: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA764u;
            goto label_1da764;
        }
    }
    ctx->pc = 0x1DA740u;
    // 0x1da740: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1DA740u;
    {
        const bool branch_taken_0x1da740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA740u;
        // 0x1da744: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da740) {
            ctx->pc = 0x1DA780u;
            goto label_1da780;
        }
    }
    ctx->pc = 0x1DA748u;
label_1da748:
    // 0x1da748: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1da748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1da74c: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1DA74Cu;
    {
        const bool branch_taken_0x1da74c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da74c) {
            ctx->pc = 0x1DA750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA74Cu;
            // 0x1da750: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA784u;
            goto label_1da784;
        }
    }
    ctx->pc = 0x1DA754u;
    // 0x1da754: 0xc07f960  jal         func_1FE580
    ctx->pc = 0x1DA754u;
    SET_GPR_U32(ctx, 31, 0x1DA75Cu);
    ctx->pc = 0x1FE580u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE580u, 0x1DA754u, 0x1DA75Cu)) {
        return;
    }
    ctx->pc = 0x1DA75Cu;
label_1da75c:
    // 0x1da75c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DA75Cu;
    {
        const bool branch_taken_0x1da75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA75Cu;
        // 0x1da760: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da75c) {
            ctx->pc = 0x1DA780u;
            goto label_1da780;
        }
    }
    ctx->pc = 0x1DA764u;
label_1da764:
    // 0x1da764: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA764u;
    {
        const bool branch_taken_0x1da764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA764u;
        // 0x1da768: 0x92030002  lbu         $v1, 0x2($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da764) {
            ctx->pc = 0x1DA774u;
            goto label_1da774;
        }
    }
    ctx->pc = 0x1DA76Cu;
    // 0x1da76c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DA76Cu;
    {
        const bool branch_taken_0x1da76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA76Cu;
        // 0x1da770: 0x34630004  ori         $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da76c) {
            ctx->pc = 0x1DA778u;
            goto label_1da778;
        }
    }
    ctx->pc = 0x1DA774u;
label_1da774:
    // 0x1da774: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x1da774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
label_1da778:
    // 0x1da778: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x1da778u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1da77c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1da77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1da780:
    // 0x1da780: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1da780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1da784:
    // 0x1da784: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1da784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da788: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1da788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1da78c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1da78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1da790: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x1DA790u;
    SET_GPR_U32(ctx, 31, 0x1DA798u);
    ctx->pc = 0x1DA794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA790u;
    // 0x1da794: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x1DA790u, 0x1DA798u)) {
        return;
    }
    ctx->pc = 0x1DA798u;
label_1da798:
    // 0x1da798: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1da798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da79c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1da79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1da7a0: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1DA7A0u;
    {
        const bool branch_taken_0x1da7a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA7A0u;
        // 0x1da7a4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da7a0) {
            ctx->pc = 0x1DA710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da710;
        }
    }
    ctx->pc = 0x1DA7A8u;
label_1da7a8:
    // 0x1da7a8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1da7a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1da7ac: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1da7acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1da7b0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1da7b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1da7b4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1da7b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1da7b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1da7b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da7bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA7BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA7BCu;
        // 0x1da7c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA7BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA7C4u;
    // 0x1da7c4: 0x0  nop
    ctx->pc = 0x1da7c4u;
    // NOP
    ctx->pc = 0x1da7c8u;
}
