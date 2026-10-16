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

// Function: sub_002A0080
// Address: 0x2a0080 - 0x2a0200
void sub_002A0080_0x2a0080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0080_0x2a0080");
#endif

    switch (ctx->pc) {
        case 0x2a00d0u: goto label_2a00d0;
        case 0x2a0108u: goto label_2a0108;
        case 0x2a0148u: goto label_2a0148;
        case 0x2a0190u: goto label_2a0190;
        case 0x2a01b8u: goto label_2a01b8;
        default: break;
    }

    ctx->pc = 0x2a0080u;

    // 0x2a0080: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a0080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a0084: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2a0084u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0088: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a0088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a008c: 0x53143  sra         $a2, $a1, 5
    ctx->pc = 0x2a008cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 5));
    // 0x2a0090: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a0090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a0094: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2a0094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2a0098: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2a0098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2a009c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a009cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a00a0: 0x8d440010  lw          $a0, 0x10($t2)
    ctx->pc = 0x2a00a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x2a00a4: 0x8d470004  lw          $a3, 0x4($t2)
    ctx->pc = 0x2a00a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x2a00a8: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x2a00a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2a00ac: 0x10a0004b  beqz        $a1, . + 4 + (0x4B << 2)
    ctx->pc = 0x2A00ACu;
    {
        const bool branch_taken_0x2a00ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A00B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A00ACu;
        // 0x2a00b0: 0x24500001  addiu       $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a00ac) {
            ctx->pc = 0x2A01DCu;
            goto label_2a01dc;
        }
    }
    ctx->pc = 0x2A00B4u;
    // 0x2a00b4: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x2a00b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x2a00b8: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x2a00b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2a00bc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A00BCu;
    {
        const bool branch_taken_0x2a00bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A00C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A00BCu;
        // 0x2a00c0: 0x49880  sll         $s3, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a00bc) {
            ctx->pc = 0x2A00F4u;
            goto label_2a00f4;
        }
    }
    ctx->pc = 0x2A00C4u;
    // 0x2a00c4: 0x69080  sll         $s2, $a2, 2
    ctx->pc = 0x2a00c4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2a00c8: 0x30b1001f  andi        $s1, $a1, 0x1F
    ctx->pc = 0x2a00c8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x2a00cc: 0x0  nop
    ctx->pc = 0x2a00ccu;
    // NOP
label_2a00d0:
    // 0x2a00d0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2a00d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2a00d4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2a00d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2a00d8: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x2a00d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2a00dc: 0x0  nop
    ctx->pc = 0x2a00dcu;
    // NOP
    // 0x2a00e0: 0x0  nop
    ctx->pc = 0x2a00e0u;
    // NOP
    // 0x2a00e4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A00E4u;
    {
        const bool branch_taken_0x2a00e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a00e4) {
            ctx->pc = 0x2A00D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a00d0;
        }
    }
    ctx->pc = 0x2A00ECu;
    // 0x2a00ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A00ECu;
    {
        const bool branch_taken_0x2a00ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A00F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A00ECu;
        // 0x2a00f0: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a00ec) {
            ctx->pc = 0x2A0100u;
            goto label_2a0100;
        }
    }
    ctx->pc = 0x2A00F4u;
label_2a00f4:
    // 0x2a00f4: 0x69080  sll         $s2, $a2, 2
    ctx->pc = 0x2a00f4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2a00f8: 0x30b1001f  andi        $s1, $a1, 0x1F
    ctx->pc = 0x2a00f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x2a00fc: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x2a00fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2a0100:
    // 0x2a0100: 0xc0a7e74  jal         func_29F9D0
    ctx->pc = 0x2A0100u;
    SET_GPR_U32(ctx, 31, 0x2A0108u);
    ctx->pc = 0x2A0104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0100u;
    // 0x2a0104: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F9D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F9D0u, 0x2A0100u, 0x2A0108u)) {
        return;
    }
    ctx->pc = 0x2A0108u;
label_2a0108:
    // 0x2a0108: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2a0108u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a010c: 0x25490014  addiu       $t1, $t2, 0x14
    ctx->pc = 0x2a010cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 20));
    // 0x2a0110: 0x1333021  addu        $a2, $t1, $s3
    ctx->pc = 0x2a0110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 19)));
    // 0x2a0114: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2A0114u;
    {
        const bool branch_taken_0x2a0114 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0114u;
        // 0x2a0118: 0xd23821  addu        $a3, $a2, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0114) {
            ctx->pc = 0x2A018Cu;
            goto label_2a018c;
        }
    }
    ctx->pc = 0x2A011Cu;
    // 0x2a011c: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x2a011cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x2a0120: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2a0120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2a0124: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x2a0124u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a0128: 0x515823  subu        $t3, $v0, $s1
    ctx->pc = 0x2a0128u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2a012c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2a012cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2a0130: 0x126202b  sltu        $a0, $t1, $a2
    ctx->pc = 0x2a0130u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2a0134: 0x1681006  srlv        $v0, $t0, $t3
    ctx->pc = 0x2a0134u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 11) & 0x1F));
    // 0x2a0138: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x2a0138u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3));
    // 0x2a013c: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2A013Cu;
    {
        const bool branch_taken_0x2a013c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A013Cu;
        // 0x2a0140: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a013c) {
            ctx->pc = 0x2A0178u;
            goto label_2a0178;
        }
    }
    ctx->pc = 0x2A0144u;
    // 0x2a0144: 0x260cffff  addiu       $t4, $s0, -0x1
    ctx->pc = 0x2a0144u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2a0148:
    // 0x2a0148: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x2a0148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x2a014c: 0x2281804  sllv        $v1, $t0, $s1
    ctx->pc = 0x2a014cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 17) & 0x1F));
    // 0x2a0150: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2a0150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a0154: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x2a0154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x2a0158: 0x126282b  sltu        $a1, $t1, $a2
    ctx->pc = 0x2a0158u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2a015c: 0x1641006  srlv        $v0, $a0, $t3
    ctx->pc = 0x2a015cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 11) & 0x1F));
    // 0x2a0160: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2a0160u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0164: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a0164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a0168: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2A0168u;
    {
        const bool branch_taken_0x2a0168 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0168u;
        // 0x2a016c: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0168) {
            ctx->pc = 0x2A0148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0148;
        }
    }
    ctx->pc = 0x2A0170u;
    // 0x2a0170: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A0170u;
    {
        const bool branch_taken_0x2a0170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0170u;
        // 0x2a0174: 0x2281004  sllv        $v0, $t0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 17) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0170) {
            ctx->pc = 0x2A0180u;
            goto label_2a0180;
        }
    }
    ctx->pc = 0x2A0178u;
label_2a0178:
    // 0x2a0178: 0x260cffff  addiu       $t4, $s0, -0x1
    ctx->pc = 0x2a0178u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2a017c: 0x2281004  sllv        $v0, $t0, $s1
    ctx->pc = 0x2a017cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 17) & 0x1F));
label_2a0180:
    // 0x2a0180: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x2a0180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x2a0184: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2A0184u;
    {
        const bool branch_taken_0x2a0184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0184u;
        // 0x2a0188: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0184) {
            ctx->pc = 0x2A01BCu;
            goto label_2a01bc;
        }
    }
    ctx->pc = 0x2A018Cu;
label_2a018c:
    // 0x2a018c: 0x260cffff  addiu       $t4, $s0, -0x1
    ctx->pc = 0x2a018cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2a0190:
    // 0x2a0190: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x2a0190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x2a0194: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x2a0194u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x2a0198: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2a0198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a019c: 0x126182b  sltu        $v1, $t1, $a2
    ctx->pc = 0x2a019cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2a01a0: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x2a01a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x2a01a4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A01A4u;
    {
        const bool branch_taken_0x2a01a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a01a4) {
            ctx->pc = 0x2A0190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0190;
        }
    }
    ctx->pc = 0x2A01ACu;
    // 0x2a01ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A01ACu;
    {
        const bool branch_taken_0x2a01ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A01B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A01ACu;
        // 0x2a01b0: 0x127102b  sltu        $v0, $t1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a01ac) {
            ctx->pc = 0x2A01D0u;
            goto label_2a01d0;
        }
    }
    ctx->pc = 0x2A01B4u;
    // 0x2a01b4: 0x0  nop
    ctx->pc = 0x2a01b4u;
    // NOP
label_2a01b8:
    // 0x2a01b8: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x2a01b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_2a01bc:
    // 0x2a01bc: 0x127102b  sltu        $v0, $t1, $a3
    ctx->pc = 0x2a01bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2a01c0: 0x0  nop
    ctx->pc = 0x2a01c0u;
    // NOP
    // 0x2a01c4: 0x0  nop
    ctx->pc = 0x2a01c4u;
    // NOP
    // 0x2a01c8: 0x0  nop
    ctx->pc = 0x2a01c8u;
    // NOP
    // 0x2a01cc: 0x0  nop
    ctx->pc = 0x2a01ccu;
    // NOP
label_2a01d0:
    // 0x2a01d0: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2A01D0u;
    {
        const bool branch_taken_0x2a01d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a01d0) {
            ctx->pc = 0x2A01D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A01D0u;
            // 0x2a01d4: 0x24e7fffc  addiu       $a3, $a3, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A01B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a01b8;
        }
    }
    ctx->pc = 0x2A01D8u;
    // 0x2a01d8: 0xad4c0010  sw          $t4, 0x10($t2)
    ctx->pc = 0x2a01d8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 12));
label_2a01dc:
    // 0x2a01dc: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x2a01dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a01e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a01e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a01e4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2a01e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a01e8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2a01e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a01ec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a01ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a01f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a01f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a01f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A01F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A01F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A01F4u;
        // 0x2a01f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A01F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A01FCu;
    // 0x2a01fc: 0x0  nop
    ctx->pc = 0x2a01fcu;
    // NOP
    ctx->pc = 0x2a0200u;
}
