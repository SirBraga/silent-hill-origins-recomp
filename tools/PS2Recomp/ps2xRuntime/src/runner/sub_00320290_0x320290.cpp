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

// Function: sub_00320290
// Address: 0x320290 - 0x320498
void sub_00320290_0x320290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320290_0x320290");
#endif

    switch (ctx->pc) {
        case 0x3202f8u: goto label_3202f8;
        case 0x320320u: goto label_320320;
        case 0x320360u: goto label_320360;
        case 0x320380u: goto label_320380;
        case 0x3203f0u: goto label_3203f0;
        case 0x320450u: goto label_320450;
        default: break;
    }

    ctx->pc = 0x320290u;

    // 0x320290: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x320290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x320294: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x320294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x320298: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x320298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x32029c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x32029cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3202a0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3202a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3202a4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3202a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3202a8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3202a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3202ac: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3202acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x3202b0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3202b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x3202b4: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x3202b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x3202b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3202b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3202bc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3202bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3202c0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x3202c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3202c4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3202c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3202c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3202C8u;
    {
        const bool branch_taken_0x3202c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3202CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3202C8u;
        // 0x3202cc: 0x200c02d  daddu       $t8, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3202c8) {
            ctx->pc = 0x3202D8u;
            goto label_3202d8;
        }
    }
    ctx->pc = 0x3202D0u;
    // 0x3202d0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x3202d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3202d4: 0x300882d  daddu       $s1, $t8, $zero
    ctx->pc = 0x3202d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
label_3202d8:
    // 0x3202d8: 0x8e150010  lw          $s5, 0x10($s0)
    ctx->pc = 0x3202d8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3202dc: 0x8e330010  lw          $s3, 0x10($s1)
    ctx->pc = 0x3202dcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3202e0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3202e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3202e4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3202e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3202e8: 0x2b39021  addu        $s2, $s5, $s3
    ctx->pc = 0x3202e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x3202ec: 0xb2282a  slt         $a1, $a1, $s2
    ctx->pc = 0x3202ecu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x3202f0: 0xc0c7f7c  jal         func_31FDF0
    ctx->pc = 0x3202F0u;
    SET_GPR_U32(ctx, 31, 0x3202F8u);
    ctx->pc = 0x3202F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3202F0u;
    // 0x3202f4: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FDF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31FDF0u, 0x3202F0u, 0x3202F8u)) {
        return;
    }
    ctx->pc = 0x3202F8u;
label_3202f8:
    // 0x3202f8: 0x40c02d  daddu       $t8, $v0, $zero
    ctx->pc = 0x3202f8u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3202fc: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x3202fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x320300: 0x270a0014  addiu       $t2, $t8, 0x14
    ctx->pc = 0x320300u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 24), 20));
    // 0x320304: 0x26190014  addiu       $t9, $s0, 0x14
    ctx->pc = 0x320304u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x320308: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x320308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x32030c: 0x143102b  sltu        $v0, $t2, $v1
    ctx->pc = 0x32030cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x320310: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x320310u;
    {
        const bool branch_taken_0x320310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x320314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320310u;
        // 0x320314: 0x26260014  addiu       $a2, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320310) {
            ctx->pc = 0x320338u;
            goto label_320338;
        }
    }
    ctx->pc = 0x320318u;
    // 0x320318: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x320318u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
    // 0x32031c: 0x0  nop
    ctx->pc = 0x32031cu;
    // NOP
label_320320:
    // 0x320320: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x320320u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x320324: 0x143102b  sltu        $v0, $t2, $v1
    ctx->pc = 0x320324u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x320328: 0x0  nop
    ctx->pc = 0x320328u;
    // NOP
    // 0x32032c: 0x0  nop
    ctx->pc = 0x32032cu;
    // NOP
    // 0x320330: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x320330u;
    {
        const bool branch_taken_0x320330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x320330) {
            ctx->pc = 0x320334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320330u;
            // 0x320334: 0xad400000  sw          $zero, 0x0($t2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320320;
        }
    }
    ctx->pc = 0x320338u;
label_320338:
    // 0x320338: 0xc0702d  daddu       $t6, $a2, $zero
    ctx->pc = 0x320338u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32033c: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x32033cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x320340: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x320340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x320344: 0x1c2a021  addu        $s4, $t6, $v0
    ctx->pc = 0x320344u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x320348: 0x270f0014  addiu       $t7, $t8, 0x14
    ctx->pc = 0x320348u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 24), 20));
    // 0x32034c: 0x3238021  addu        $s0, $t9, $v1
    ctx->pc = 0x32034cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x320350: 0x1e0b02d  daddu       $s6, $t7, $zero
    ctx->pc = 0x320350u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320354: 0x1d4102b  sltu        $v0, $t6, $s4
    ctx->pc = 0x320354u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x320358: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x320358u;
    {
        const bool branch_taken_0x320358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320358u;
        // 0x32035c: 0x12a880  sll         $s5, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320358) {
            ctx->pc = 0x32044Cu;
            goto label_32044c;
        }
    }
    ctx->pc = 0x320360u;
label_320360:
    // 0x320360: 0x95cc0000  lhu         $t4, 0x0($t6)
    ctx->pc = 0x320360u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x320364: 0x25d30004  addiu       $s3, $t6, 0x4
    ctx->pc = 0x320364u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x320368: 0x1180001a  beqz        $t4, . + 4 + (0x1A << 2)
    ctx->pc = 0x320368u;
    {
        const bool branch_taken_0x320368 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x32036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320368u;
        // 0x32036c: 0x25f10004  addiu       $s1, $t7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320368) {
            ctx->pc = 0x3203D4u;
            goto label_3203d4;
        }
    }
    ctx->pc = 0x320370u;
    // 0x320370: 0x320502d  daddu       $t2, $t9, $zero
    ctx->pc = 0x320370u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320374: 0x1e0402d  daddu       $t0, $t7, $zero
    ctx->pc = 0x320374u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320378: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x320378u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32037c: 0x0  nop
    ctx->pc = 0x32037cu;
    // NOP
label_320380:
    // 0x320380: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x320380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x320384: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x320384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x320388: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x320388u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x32038c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x32038cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x320390: 0x150302b  sltu        $a2, $t2, $s0
    ctx->pc = 0x320390u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x320394: 0x4c1018  mult        $v0, $v0, $t4
    ctx->pc = 0x320394u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x320398: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x320398u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x32039c: 0x6c1818  mult        $v1, $v1, $t4
    ctx->pc = 0x32039cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3203a0: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x3203a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3203a4: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x3203a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x3203a8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3203a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3203ac: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x3203acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x3203b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3203b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3203b4: 0x26c02  srl         $t5, $v0, 16
    ctx->pc = 0x3203b4u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x3203b8: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x3203b8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3203bc: 0x6d2821  addu        $a1, $v1, $t5
    ctx->pc = 0x3203bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x3203c0: 0xa5050002  sh          $a1, 0x2($t0)
    ctx->pc = 0x3203c0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x3203c4: 0x56c02  srl         $t5, $a1, 16
    ctx->pc = 0x3203c4u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x3203c8: 0x14c0ffed  bnez        $a2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3203C8u;
    {
        const bool branch_taken_0x3203c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3203CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3203C8u;
        // 0x3203cc: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3203c8) {
            ctx->pc = 0x320380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320380;
        }
    }
    ctx->pc = 0x3203D0u;
    // 0x3203d0: 0xad0d0000  sw          $t5, 0x0($t0)
    ctx->pc = 0x3203d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 13));
label_3203d4:
    // 0x3203d4: 0x95cc0002  lhu         $t4, 0x2($t6)
    ctx->pc = 0x3203d4u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x3203d8: 0x11800018  beqz        $t4, . + 4 + (0x18 << 2)
    ctx->pc = 0x3203D8u;
    {
        const bool branch_taken_0x3203d8 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x3203DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3203D8u;
        // 0x3203dc: 0x1e0402d  daddu       $t0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3203d8) {
            ctx->pc = 0x32043Cu;
            goto label_32043c;
        }
    }
    ctx->pc = 0x3203E0u;
    // 0x3203e0: 0x320502d  daddu       $t2, $t9, $zero
    ctx->pc = 0x3203e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3203e4: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x3203e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3203e8: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x3203e8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3203ec: 0x0  nop
    ctx->pc = 0x3203ecu;
    // NOP
label_3203f0:
    // 0x3203f0: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x3203f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3203f4: 0x95030002  lhu         $v1, 0x2($t0)
    ctx->pc = 0x3203f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x3203f8: 0x4c1018  mult        $v0, $v0, $t4
    ctx->pc = 0x3203f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3203fc: 0xa5050000  sh          $a1, 0x0($t0)
    ctx->pc = 0x3203fcu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x320400: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x320400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x320404: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x320404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x320408: 0xa5020002  sh          $v0, 0x2($t0)
    ctx->pc = 0x320408u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x32040c: 0x26c02  srl         $t5, $v0, 16
    ctx->pc = 0x32040cu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x320410: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x320410u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x320414: 0x95420002  lhu         $v0, 0x2($t2)
    ctx->pc = 0x320414u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x320418: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x320418u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x32041c: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x32041cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x320420: 0x4c1018  mult        $v0, $v0, $t4
    ctx->pc = 0x320420u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x320424: 0x150202b  sltu        $a0, $t2, $s0
    ctx->pc = 0x320424u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x320428: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x320428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32042c: 0x4d2821  addu        $a1, $v0, $t5
    ctx->pc = 0x32042cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x320430: 0x1480ffef  bnez        $a0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x320430u;
    {
        const bool branch_taken_0x320430 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x320434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320430u;
        // 0x320434: 0x56c02  srl         $t5, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320430) {
            ctx->pc = 0x3203F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3203f0;
        }
    }
    ctx->pc = 0x320438u;
    // 0x320438: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x320438u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
label_32043c:
    // 0x32043c: 0x260702d  daddu       $t6, $s3, $zero
    ctx->pc = 0x32043cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320440: 0x1d4102b  sltu        $v0, $t6, $s4
    ctx->pc = 0x320440u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x320444: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x320444u;
    {
        const bool branch_taken_0x320444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320444u;
        // 0x320448: 0x220782d  daddu       $t7, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320444) {
            ctx->pc = 0x320360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320360;
        }
    }
    ctx->pc = 0x32044Cu;
label_32044c:
    // 0x32044c: 0x2d54021  addu        $t0, $s6, $s5
    ctx->pc = 0x32044cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
label_320450:
    // 0x320450: 0x5a400006  blezl       $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x320450u;
    {
        const bool branch_taken_0x320450 = (GPR_S64(ctx, 18) <= 0);
        if (branch_taken_0x320450) {
            ctx->pc = 0x320454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320450u;
            // 0x320454: 0xaf120010  sw          $s2, 0x10($t8) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 24), 16), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32046Cu;
            goto label_32046c;
        }
    }
    ctx->pc = 0x320458u;
    // 0x320458: 0x2508fffc  addiu       $t0, $t0, -0x4
    ctx->pc = 0x320458u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x32045c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x32045cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x320460: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x320460u;
    {
        const bool branch_taken_0x320460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320460) {
            ctx->pc = 0x320464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320460u;
            // 0x320464: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320450;
        }
    }
    ctx->pc = 0x320468u;
    // 0x320468: 0xaf120010  sw          $s2, 0x10($t8)
    ctx->pc = 0x320468u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 16), GPR_U32(ctx, 18));
label_32046c:
    // 0x32046c: 0x300102d  daddu       $v0, $t8, $zero
    ctx->pc = 0x32046cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320470: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x320470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x320474: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x320474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x320478: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x320478u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32047c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x32047cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x320480: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x320480u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x320484: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x320484u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x320488: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x320488u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32048c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32048cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320490: 0x3e00008  jr          $ra
    ctx->pc = 0x320490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320490u;
        // 0x320494: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320498u;
}
