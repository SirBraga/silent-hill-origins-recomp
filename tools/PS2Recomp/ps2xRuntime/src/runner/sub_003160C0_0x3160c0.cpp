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

// Function: sub_003160C0
// Address: 0x3160c0 - 0x316fb8
void sub_003160C0_0x3160c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003160C0_0x3160c0");
#endif

    switch (ctx->pc) {
        case 0x316108u: goto label_316108;
        case 0x316170u: goto label_316170;
        case 0x3161c8u: goto label_3161c8;
        case 0x316248u: goto label_316248;
        case 0x316280u: goto label_316280;
        case 0x3162a8u: goto label_3162a8;
        case 0x3163c8u: goto label_3163c8;
        case 0x31640cu: goto label_31640c;
        case 0x3164acu: goto label_3164ac;
        case 0x3164ccu: goto label_3164cc;
        case 0x3164fcu: goto label_3164fc;
        case 0x31650cu: goto label_31650c;
        case 0x316524u: goto label_316524;
        case 0x316530u: goto label_316530;
        case 0x31653cu: goto label_31653c;
        case 0x3165c8u: goto label_3165c8;
        case 0x3165e8u: goto label_3165e8;
        case 0x316624u: goto label_316624;
        case 0x31665cu: goto label_31665c;
        case 0x316678u: goto label_316678;
        case 0x31667cu: goto label_31667c;
        case 0x3166b0u: goto label_3166b0;
        case 0x3166c8u: goto label_3166c8;
        case 0x316714u: goto label_316714;
        case 0x3167a8u: goto label_3167a8;
        case 0x3167d8u: goto label_3167d8;
        case 0x3167f0u: goto label_3167f0;
        case 0x31682cu: goto label_31682c;
        case 0x31683cu: goto label_31683c;
        case 0x316850u: goto label_316850;
        case 0x31685cu: goto label_31685c;
        case 0x31686cu: goto label_31686c;
        case 0x316874u: goto label_316874;
        case 0x316878u: goto label_316878;
        case 0x316890u: goto label_316890;
        case 0x316898u: goto label_316898;
        case 0x3168a4u: goto label_3168a4;
        case 0x3168c4u: goto label_3168c4;
        case 0x3168e8u: goto label_3168e8;
        case 0x3168f4u: goto label_3168f4;
        case 0x316904u: goto label_316904;
        case 0x316914u: goto label_316914;
        case 0x3169e8u: goto label_3169e8;
        case 0x3169f4u: goto label_3169f4;
        case 0x316a04u: goto label_316a04;
        case 0x316a1cu: goto label_316a1c;
        case 0x316a30u: goto label_316a30;
        case 0x316a94u: goto label_316a94;
        case 0x316abcu: goto label_316abc;
        case 0x316ad4u: goto label_316ad4;
        case 0x316aecu: goto label_316aec;
        case 0x316b38u: goto label_316b38;
        case 0x316b44u: goto label_316b44;
        case 0x316b50u: goto label_316b50;
        case 0x316be4u: goto label_316be4;
        case 0x316bfcu: goto label_316bfc;
        case 0x316c04u: goto label_316c04;
        case 0x316c0cu: goto label_316c0c;
        case 0x316c20u: goto label_316c20;
        case 0x316c2cu: goto label_316c2c;
        case 0x316c38u: goto label_316c38;
        case 0x316c44u: goto label_316c44;
        case 0x316c70u: goto label_316c70;
        case 0x316c78u: goto label_316c78;
        case 0x316c84u: goto label_316c84;
        case 0x316cc4u: goto label_316cc4;
        case 0x316ce8u: goto label_316ce8;
        case 0x316d1cu: goto label_316d1c;
        case 0x316d30u: goto label_316d30;
        case 0x316d3cu: goto label_316d3c;
        case 0x316d48u: goto label_316d48;
        case 0x316d54u: goto label_316d54;
        case 0x316d64u: goto label_316d64;
        case 0x316d84u: goto label_316d84;
        case 0x316d98u: goto label_316d98;
        case 0x316da8u: goto label_316da8;
        case 0x316e54u: goto label_316e54;
        case 0x316e68u: goto label_316e68;
        case 0x316e78u: goto label_316e78;
        case 0x316e8cu: goto label_316e8c;
        case 0x316ea4u: goto label_316ea4;
        case 0x316ebcu: goto label_316ebc;
        case 0x316ed4u: goto label_316ed4;
        case 0x316ee8u: goto label_316ee8;
        case 0x316f00u: goto label_316f00;
        case 0x316f34u: goto label_316f34;
        case 0x316f40u: goto label_316f40;
        case 0x316f4cu: goto label_316f4c;
        case 0x316f58u: goto label_316f58;
        case 0x316f64u: goto label_316f64;
        case 0x316f88u: goto label_316f88;
        default: break;
    }

    ctx->pc = 0x3160c0u;

    // 0x3160c0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3160c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x3160c4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3160c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3160c8: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x3160c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x3160cc: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x3160ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x3160d0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3160d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3160d4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3160d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3160d8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3160d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3160dc: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x3160dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x3160e0: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x3160e0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3160e4: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x3160e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x3160e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3160e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3160ec: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x3160ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x3160f0: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x3160f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x3160f4: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x3160f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x3160f8: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x3160f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x3160fc: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x3160fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x316100: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x316100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x316104: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x316104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_316108:
    // 0x316108: 0x82a30000  lb          $v1, 0x0($s5)
    ctx->pc = 0x316108u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x31610c: 0x2c62002e  sltiu       $v0, $v1, 0x2E
    ctx->pc = 0x31610cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)46) ? 1 : 0);
    // 0x316110: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x316110u;
    {
        const bool branch_taken_0x316110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x316114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316110u;
        // 0x316114: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316110) {
            ctx->pc = 0x31615Cu;
            goto label_31615c;
        }
    }
    ctx->pc = 0x316118u;
    // 0x316118: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x316118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31611c: 0x244217a0  addiu       $v0, $v0, 0x17A0
    ctx->pc = 0x31611cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6048));
    // 0x316120: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x316120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x316124: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x316124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x316128: 0x800008  jr          $a0
    ctx->pc = 0x316128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x316130u: goto label_316130;
            case 0x316138u: goto label_316138;
            case 0x316150u: goto label_316150;
            case 0x316158u: goto label_316158;
            case 0x316374u: goto label_316374;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316128u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x316130u;
label_316130:
    // 0x316130: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x316130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x316134: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x316134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_316138:
    // 0x316138: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x316138u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x31613c: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x31613cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x316140: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x316140u;
    {
        const bool branch_taken_0x316140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x316140) {
            ctx->pc = 0x316144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x316140u;
            // 0x316144: 0x82a30000  lb          $v1, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31615Cu;
            goto label_31615c;
        }
    }
    ctx->pc = 0x316148u;
    // 0x316148: 0x10000386  b           . + 4 + (0x386 << 2)
    ctx->pc = 0x316148u;
    {
        const bool branch_taken_0x316148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316148u;
        // 0x31614c: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316148) {
            ctx->pc = 0x316F64u;
            goto label_316f64;
        }
    }
    ctx->pc = 0x316150u;
label_316150:
    // 0x316150: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x316150u;
    {
        const bool branch_taken_0x316150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316150u;
        // 0x316154: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316150) {
            ctx->pc = 0x316108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_316108;
        }
    }
    ctx->pc = 0x316158u;
label_316158:
    // 0x316158: 0x82a30000  lb          $v1, 0x0($s5)
    ctx->pc = 0x316158u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_31615c:
    // 0x31615c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x31615cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x316160: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x316160u;
    {
        const bool branch_taken_0x316160 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x316164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316160u;
        // 0x316164: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316160) {
            ctx->pc = 0x316190u;
            goto label_316190;
        }
    }
    ctx->pc = 0x316168u;
    // 0x316168: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x316168u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31616c: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x31616cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_316170:
    // 0x316170: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x316170u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x316174: 0x82a30000  lb          $v1, 0x0($s5)
    ctx->pc = 0x316174u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x316178: 0x0  nop
    ctx->pc = 0x316178u;
    // NOP
    // 0x31617c: 0x0  nop
    ctx->pc = 0x31617cu;
    // NOP
    // 0x316180: 0x1064fffb  beq         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x316180u;
    {
        const bool branch_taken_0x316180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x316184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316180u;
        // 0x316184: 0x92a20000  lbu         $v0, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316180) {
            ctx->pc = 0x316170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_316170;
        }
    }
    ctx->pc = 0x316188u;
    // 0x316188: 0x10600376  beqz        $v1, . + 4 + (0x376 << 2)
    ctx->pc = 0x316188u;
    {
        const bool branch_taken_0x316188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31618Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316188u;
        // 0x31618c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316188) {
            ctx->pc = 0x316F64u;
            goto label_316f64;
        }
    }
    ctx->pc = 0x316190u;
label_316190:
    // 0x316190: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x316190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x316194: 0xafb50018  sw          $s5, 0x18($sp)
    ctx->pc = 0x316194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 21));
    // 0x316198: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x316198u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x31619c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x31619cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3161a0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x3161a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x3161a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3161a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3161a8: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x3161a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x3161ac: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3161ACu;
    {
        const bool branch_taken_0x3161ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3161B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3161ACu;
        // 0x3161b0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3161ac) {
            ctx->pc = 0x316220u;
            goto label_316220;
        }
    }
    ctx->pc = 0x3161B4u;
    // 0x3161b4: 0x2882003a  slti        $v0, $a0, 0x3A
    ctx->pc = 0x3161b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x3161b8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3161B8u;
    {
        const bool branch_taken_0x3161b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3161BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3161B8u;
        // 0x3161bc: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3161b8) {
            ctx->pc = 0x316224u;
            goto label_316224;
        }
    }
    ctx->pc = 0x3161C0u;
    // 0x3161c0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3161c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3161c4: 0x2a820009  slti        $v0, $s4, 0x9
    ctx->pc = 0x3161c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)9) ? 1 : 0);
label_3161c8:
    // 0x3161c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3161C8u;
    {
        const bool branch_taken_0x3161c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3161CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3161C8u;
        // 0x3161cc: 0x8fa70020  lw          $a3, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3161c8) {
            ctx->pc = 0x3161E4u;
            goto label_3161e4;
        }
    }
    ctx->pc = 0x3161D0u;
    // 0x3161d0: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x3161d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3161d4: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x3161d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x3161d8: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x3161d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x3161dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3161DCu;
    {
        const bool branch_taken_0x3161dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3161E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3161DCu;
        // 0x3161e0: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3161dc) {
            ctx->pc = 0x316200u;
            goto label_316200;
        }
    }
    ctx->pc = 0x3161E4u;
label_3161e4:
    // 0x3161e4: 0x2a820010  slti        $v0, $s4, 0x10
    ctx->pc = 0x3161e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3161e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3161E8u;
    {
        const bool branch_taken_0x3161e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3161ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3161E8u;
        // 0x3161ec: 0x1210b8  dsll        $v0, $s2, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3161e8) {
            ctx->pc = 0x316200u;
            goto label_316200;
        }
    }
    ctx->pc = 0x3161F0u;
    // 0x3161f0: 0x52102d  daddu       $v0, $v0, $s2
    ctx->pc = 0x3161f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 18));
    // 0x3161f4: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x3161f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x3161f8: 0x82102d  daddu       $v0, $a0, $v0
    ctx->pc = 0x3161f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3161fc: 0x6452ffd0  daddiu      $s2, $v0, -0x30
    ctx->pc = 0x3161fcu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967248);
label_316200:
    // 0x316200: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x316200u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x316204: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x316204u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x316208: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x316208u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x31620c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31620Cu;
    {
        const bool branch_taken_0x31620c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x316210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31620Cu;
        // 0x316210: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31620c) {
            ctx->pc = 0x316220u;
            goto label_316220;
        }
    }
    ctx->pc = 0x316214u;
    // 0x316214: 0x2882003a  slti        $v0, $a0, 0x3A
    ctx->pc = 0x316214u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x316218: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x316218u;
    {
        const bool branch_taken_0x316218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31621Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316218u;
        // 0x31621c: 0x2a820009  slti        $v0, $s4, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x316218) {
            ctx->pc = 0x3161C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3161c8;
        }
    }
    ctx->pc = 0x316220u;
label_316220:
    // 0x316220: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x316220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_316224:
    // 0x316224: 0x14820047  bne         $a0, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x316224u;
    {
        const bool branch_taken_0x316224 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x316228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316224u;
        // 0x316228: 0x280f02d  daddu       $fp, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316224) {
            ctx->pc = 0x316344u;
            goto label_316344;
        }
    }
    ctx->pc = 0x31622Cu;
    // 0x31622c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x31622cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x316230: 0x16800040  bnez        $s4, . + 4 + (0x40 << 2)
    ctx->pc = 0x316230u;
    {
        const bool branch_taken_0x316230 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x316234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316230u;
        // 0x316234: 0x82a40000  lb          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316230) {
            ctx->pc = 0x316334u;
            goto label_316334;
        }
    }
    ctx->pc = 0x316238u;
    // 0x316238: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x316238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x31623c: 0x54820009  bnel        $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31623Cu;
    {
        const bool branch_taken_0x31623c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x31623c) {
            ctx->pc = 0x316240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31623Cu;
            // 0x316240: 0x2482ffcf  addiu       $v0, $a0, -0x31 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
            ctx->in_delay_slot = false;
            ctx->pc = 0x316264u;
            goto label_316264;
        }
    }
    ctx->pc = 0x316244u;
    // 0x316244: 0x0  nop
    ctx->pc = 0x316244u;
    // NOP
label_316248:
    // 0x316248: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x316248u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x31624c: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x31624cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x316250: 0x0  nop
    ctx->pc = 0x316250u;
    // NOP
    // 0x316254: 0x0  nop
    ctx->pc = 0x316254u;
    // NOP
    // 0x316258: 0x1082fffb  beq         $a0, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x316258u;
    {
        const bool branch_taken_0x316258 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x31625Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316258u;
        // 0x31625c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316258) {
            ctx->pc = 0x316248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_316248;
        }
    }
    ctx->pc = 0x316260u;
    // 0x316260: 0x2482ffcf  addiu       $v0, $a0, -0x31
    ctx->pc = 0x316260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
label_316264:
    // 0x316264: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x316264u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x316268: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x316268u;
    {
        const bool branch_taken_0x316268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316268u;
        // 0x31626c: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316268) {
            ctx->pc = 0x316348u;
            goto label_316348;
        }
    }
    ctx->pc = 0x316270u;
    // 0x316270: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x316270u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316274: 0xafb50018  sw          $s5, 0x18($sp)
    ctx->pc = 0x316274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 21));
    // 0x316278: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x316278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31627c: 0x26a80001  addiu       $t0, $s5, 0x1
    ctx->pc = 0x31627cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_316280:
    // 0x316280: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x316280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x316284: 0x10800029  beqz        $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x316284u;
    {
        const bool branch_taken_0x316284 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x316288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316284u;
        // 0x316288: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316284) {
            ctx->pc = 0x31632Cu;
            goto label_31632c;
        }
    }
    ctx->pc = 0x31628Cu;
    // 0x31628c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x31628cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x316290: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x316290u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x316294: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x316294u;
    {
        const bool branch_taken_0x316294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x316298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316294u;
        // 0x316298: 0x1264821  addu        $t1, $t1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316294) {
            ctx->pc = 0x3162E4u;
            goto label_3162e4;
        }
    }
    ctx->pc = 0x31629Cu;
    // 0x31629c: 0x24c7ffff  addiu       $a3, $a2, -0x1
    ctx->pc = 0x31629cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3162a0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3162a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3162a4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3162a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3162a8:
    // 0x3162a8: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x3162a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x3162ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3162ACu;
    {
        const bool branch_taken_0x3162ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3162B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3162ACu;
        // 0x3162b0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3162ac) {
            ctx->pc = 0x3162C4u;
            goto label_3162c4;
        }
    }
    ctx->pc = 0x3162B4u;
    // 0x3162b4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3162b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3162b8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3162b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3162bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3162BCu;
    {
        const bool branch_taken_0x3162bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3162C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3162BCu;
        // 0x3162c0: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3162bc) {
            ctx->pc = 0x3162D8u;
            goto label_3162d8;
        }
    }
    ctx->pc = 0x3162C4u;
label_3162c4:
    // 0x3162c4: 0x2a820011  slti        $v0, $s4, 0x11
    ctx->pc = 0x3162c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3162c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3162C8u;
    {
        const bool branch_taken_0x3162c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3162CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3162C8u;
        // 0x3162cc: 0x1210b8  dsll        $v0, $s2, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3162c8) {
            ctx->pc = 0x3162D8u;
            goto label_3162d8;
        }
    }
    ctx->pc = 0x3162D0u;
    // 0x3162d0: 0x52102d  daddu       $v0, $v0, $s2
    ctx->pc = 0x3162d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 18));
    // 0x3162d4: 0x29078  dsll        $s2, $v0, 1
    ctx->pc = 0x3162d4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << 1);
label_3162d8:
    // 0x3162d8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3162d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3162dc: 0x14e0fff2  bnez        $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x3162DCu;
    {
        const bool branch_taken_0x3162dc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3162E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3162DCu;
        // 0x3162e0: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3162dc) {
            ctx->pc = 0x3162A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3162a8;
        }
    }
    ctx->pc = 0x3162E4u;
label_3162e4:
    // 0x3162e4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3162e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3162e8: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x3162e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x3162ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3162ECu;
    {
        const bool branch_taken_0x3162ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3162F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3162ECu;
        // 0x3162f0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3162ec) {
            ctx->pc = 0x316310u;
            goto label_316310;
        }
    }
    ctx->pc = 0x3162F4u;
    // 0x3162f4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x3162f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3162f8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3162f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3162fc: 0x800013  mtlo        $a0
    ctx->pc = 0x3162fcu;
    ctx->lo = GPR_U64(ctx, 4);
    // 0x316300: 0x70620000  madd        $zero, $v1, $v0
    ctx->pc = 0x316300u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x316304: 0x1812  mflo        $v1
    ctx->pc = 0x316304u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x316308: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x316308u;
    {
        const bool branch_taken_0x316308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316308u;
        // 0x31630c: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316308) {
            ctx->pc = 0x316328u;
            goto label_316328;
        }
    }
    ctx->pc = 0x316310u;
label_316310:
    // 0x316310: 0x2a820011  slti        $v0, $s4, 0x11
    ctx->pc = 0x316310u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x316314: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x316314u;
    {
        const bool branch_taken_0x316314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x316318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316314u;
        // 0x316318: 0x1210b8  dsll        $v0, $s2, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x316314) {
            ctx->pc = 0x316328u;
            goto label_316328;
        }
    }
    ctx->pc = 0x31631Cu;
    // 0x31631c: 0x52102d  daddu       $v0, $v0, $s2
    ctx->pc = 0x31631cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 18));
    // 0x316320: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x316320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x316324: 0x82902d  daddu       $s2, $a0, $v0
    ctx->pc = 0x316324u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
label_316328:
    // 0x316328: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x316328u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31632c:
    // 0x31632c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x31632cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316330: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x316330u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_316334:
    // 0x316334: 0x2482ffd0  addiu       $v0, $a0, -0x30
    ctx->pc = 0x316334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x316338: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x316338u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x31633c: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x31633Cu;
    {
        const bool branch_taken_0x31633c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x316340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31633Cu;
        // 0x316340: 0x26a80001  addiu       $t0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31633c) {
            ctx->pc = 0x316280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_316280;
        }
    }
    ctx->pc = 0x316344u;
label_316344:
    // 0x316344: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x316344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_316348:
    // 0x316348: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x316348u;
    {
        const bool branch_taken_0x316348 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x31634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316348u;
        // 0x31634c: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316348) {
            ctx->pc = 0x31635Cu;
            goto label_31635c;
        }
    }
    ctx->pc = 0x316350u;
    // 0x316350: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x316350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x316354: 0x14820047  bne         $a0, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x316354u;
    {
        const bool branch_taken_0x316354 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x316354) {
            ctx->pc = 0x316474u;
            goto label_316474;
        }
    }
    ctx->pc = 0x31635Cu;
label_31635c:
    // 0x31635c: 0x56800007  bnel        $s4, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x31635Cu;
    {
        const bool branch_taken_0x31635c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x31635c) {
            ctx->pc = 0x316360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31635Cu;
            // 0x316360: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31637Cu;
            goto label_31637c;
        }
    }
    ctx->pc = 0x316364u;
    // 0x316364: 0x54c00005  bnel        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x316364u;
    {
        const bool branch_taken_0x316364 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x316364) {
            ctx->pc = 0x316368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x316364u;
            // 0x316368: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31637Cu;
            goto label_31637c;
        }
    }
    ctx->pc = 0x31636Cu;
    // 0x31636c: 0x55400003  bnel        $t2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x31636Cu;
    {
        const bool branch_taken_0x31636c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x31636c) {
            ctx->pc = 0x316370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31636Cu;
            // 0x316370: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31637Cu;
            goto label_31637c;
        }
    }
    ctx->pc = 0x316374u;
label_316374:
    // 0x316374: 0x100002fb  b           . + 4 + (0x2FB << 2)
    ctx->pc = 0x316374u;
    {
        const bool branch_taken_0x316374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316374u;
        // 0x316378: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316374) {
            ctx->pc = 0x316F64u;
            goto label_316f64;
        }
    }
    ctx->pc = 0x31637Cu;
label_31637c:
    // 0x31637c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x31637cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x316380: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x316380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x316384: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x316384u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x316388: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x316388u;
    {
        const bool branch_taken_0x316388 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x31638Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316388u;
        // 0x31638c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316388) {
            ctx->pc = 0x3163A0u;
            goto label_3163a0;
        }
    }
    ctx->pc = 0x316390u;
    // 0x316390: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x316390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x316394: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x316394u;
    {
        const bool branch_taken_0x316394 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x316398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316394u;
        // 0x316398: 0x2482ffd0  addiu       $v0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316394) {
            ctx->pc = 0x3163ACu;
            goto label_3163ac;
        }
    }
    ctx->pc = 0x31639Cu;
    // 0x31639c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x31639cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3163a0:
    // 0x3163a0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3163a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3163a4: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x3163a4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3163a8: 0x2482ffd0  addiu       $v0, $a0, -0x30
    ctx->pc = 0x3163a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
label_3163ac:
    // 0x3163ac: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x3163acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3163b0: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x3163B0u;
    {
        const bool branch_taken_0x3163b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3163B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3163B0u;
        // 0x3163b4: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3163b0) {
            ctx->pc = 0x316470u;
            goto label_316470;
        }
    }
    ctx->pc = 0x3163B8u;
    // 0x3163b8: 0x5482000a  bnel        $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3163B8u;
    {
        const bool branch_taken_0x3163b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3163b8) {
            ctx->pc = 0x3163BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3163B8u;
            // 0x3163bc: 0x2482ffcf  addiu       $v0, $a0, -0x31 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3163E4u;
            goto label_3163e4;
        }
    }
    ctx->pc = 0x3163C0u;
    // 0x3163c0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3163c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3163c4: 0x0  nop
    ctx->pc = 0x3163c4u;
    // NOP
label_3163c8:
    // 0x3163c8: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x3163c8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3163cc: 0x0  nop
    ctx->pc = 0x3163ccu;
    // NOP
    // 0x3163d0: 0x0  nop
    ctx->pc = 0x3163d0u;
    // NOP
    // 0x3163d4: 0x0  nop
    ctx->pc = 0x3163d4u;
    // NOP
    // 0x3163d8: 0x5082fffb  beql        $a0, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3163D8u;
    {
        const bool branch_taken_0x3163d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3163d8) {
            ctx->pc = 0x3163DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3163D8u;
            // 0x3163dc: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3163C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3163c8;
        }
    }
    ctx->pc = 0x3163E0u;
    // 0x3163e0: 0x2482ffcf  addiu       $v0, $a0, -0x31
    ctx->pc = 0x3163e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
label_3163e4:
    // 0x3163e4: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x3163e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x3163e8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3163E8u;
    {
        const bool branch_taken_0x3163e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3163ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3163E8u;
        // 0x3163ec: 0x2484ffd0  addiu       $a0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3163e8) {
            ctx->pc = 0x316468u;
            goto label_316468;
        }
    }
    ctx->pc = 0x3163F0u;
    // 0x3163f0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3163f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3163f4: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x3163f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
    // 0x3163f8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3163f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3163fc: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x3163fcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x316400: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x316400u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x316404: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x316404u;
    {
        const bool branch_taken_0x316404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x316408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316404u;
        // 0x316408: 0x2a71023  subu        $v0, $s5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316404) {
            ctx->pc = 0x316444u;
            goto label_316444;
        }
    }
    ctx->pc = 0x31640Cu;
label_31640c:
    // 0x31640c: 0x2882003a  slti        $v0, $a0, 0x3A
    ctx->pc = 0x31640cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x316410: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x316410u;
    {
        const bool branch_taken_0x316410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x316414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316410u;
        // 0x316414: 0xdfa30010  ld          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316410) {
            ctx->pc = 0x316440u;
            goto label_316440;
        }
    }
    ctx->pc = 0x316418u;
    // 0x316418: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x316418u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x31641c: 0x310b8  dsll        $v0, $v1, 2
    ctx->pc = 0x31641cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 2);
    // 0x316420: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x316420u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x316424: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x316424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x316428: 0x82102d  daddu       $v0, $a0, $v0
    ctx->pc = 0x316428u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x31642c: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x31642cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x316430: 0x6442ffd0  daddiu      $v0, $v0, -0x30
    ctx->pc = 0x316430u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967248);
    // 0x316434: 0x28830030  slti        $v1, $a0, 0x30
    ctx->pc = 0x316434u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x316438: 0x1060fff4  beqz        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x316438u;
    {
        const bool branch_taken_0x316438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31643Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316438u;
        // 0x31643c: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316438) {
            ctx->pc = 0x31640Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31640c;
        }
    }
    ctx->pc = 0x316440u;
label_316440:
    // 0x316440: 0x2a71023  subu        $v0, $s5, $a3
    ctx->pc = 0x316440u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
label_316444:
    // 0x316444: 0x3c040098  lui         $a0, 0x98
    ctx->pc = 0x316444u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)152 << 16));
    // 0x316448: 0x3484967f  ori         $a0, $a0, 0x967F
    ctx->pc = 0x316448u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)38527);
    // 0x31644c: 0xdfa70010  ld          $a3, 0x10($sp)
    ctx->pc = 0x31644cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x316450: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x316450u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x316454: 0x82380a  movz        $a3, $a0, $v0
    ctx->pc = 0x316454u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4));
    // 0x316458: 0x7182f  dsubu       $v1, $zero, $a3
    ctx->pc = 0x316458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 7));
    // 0x31645c: 0x68380b  movn        $a3, $v1, $t0
    ctx->pc = 0x31645cu;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3));
    // 0x316460: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x316460u;
    {
        const bool branch_taken_0x316460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316460u;
        // 0x316464: 0xffa70010  sd          $a3, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316460) {
            ctx->pc = 0x316474u;
            goto label_316474;
        }
    }
    ctx->pc = 0x316468u;
label_316468:
    // 0x316468: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x316468u;
    {
        const bool branch_taken_0x316468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31646Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316468u;
        // 0x31646c: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316468) {
            ctx->pc = 0x316474u;
            goto label_316474;
        }
    }
    ctx->pc = 0x316470u;
label_316470:
    // 0x316470: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x316470u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_316474:
    // 0x316474: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x316474u;
    {
        const bool branch_taken_0x316474 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x316478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316474u;
        // 0x316478: 0xdfa30010  ld          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316474) {
            ctx->pc = 0x316488u;
            goto label_316488;
        }
    }
    ctx->pc = 0x31647Cu;
    // 0x31647c: 0x2aa280b  movn        $a1, $s5, $t2
    ctx->pc = 0x31647cu;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21));
    // 0x316480: 0x100002b8  b           . + 4 + (0x2B8 << 2)
    ctx->pc = 0x316480u;
    {
        const bool branch_taken_0x316480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316480u;
        // 0x316484: 0xa6a80a  movz        $s5, $a1, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) == 0) SET_GPR_U64(ctx, 21, GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316480) {
            ctx->pc = 0x316F64u;
            goto label_316f64;
        }
    }
    ctx->pc = 0x316488u;
label_316488:
    // 0x316488: 0x2a820011  slti        $v0, $s4, 0x11
    ctx->pc = 0x316488u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x31648c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x31648cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x316490: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x316490u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x316494: 0x69182f  dsubu       $v1, $v1, $t1
    ctx->pc = 0x316494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 9));
    // 0x316498: 0x282980b  movn        $s3, $s4, $v0
    ctx->pc = 0x316498u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 20));
    // 0x31649c: 0x3803c  dsll32      $s0, $v1, 0
    ctx->pc = 0x31649cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3164a0: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x3164a0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x3164a4: 0xc07df10  jal         func_1F7C40
    ctx->pc = 0x3164A4u;
    SET_GPR_U32(ctx, 31, 0x3164ACu);
    ctx->pc = 0x3164A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3164A4u;
    // 0x3164a8: 0xffa30010  sd          $v1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7C40u, 0x3164A4u, 0x3164ACu)) {
        return;
    }
    ctx->pc = 0x3164ACu;
label_3164ac:
    // 0x3164ac: 0x29ef00a  movz        $fp, $s4, $fp
    ctx->pc = 0x3164acu;
    if (GPR_U64(ctx, 30) == 0) SET_GPR_U64(ctx, 30, GPR_U64(ctx, 20));
    // 0x3164b0: 0x8fa70020  lw          $a3, 0x20($sp)
    ctx->pc = 0x3164b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3164b4: 0x4e10006  bgez        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x3164B4u;
    {
        const bool branch_taken_0x3164b4 = (GPR_S64(ctx, 7) >= 0);
        ctx->pc = 0x3164B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3164B4u;
        // 0x3164b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3164b4) {
            ctx->pc = 0x3164D0u;
            goto label_3164d0;
        }
    }
    ctx->pc = 0x3164BCu;
    // 0x3164bc: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x3164bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x3164c0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3164c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3164c4: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x3164C4u;
    SET_GPR_U32(ctx, 31, 0x3164CCu);
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x3164C4u, 0x3164CCu)) {
        return;
    }
    ctx->pc = 0x3164CCu;
label_3164cc:
    // 0x3164cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3164ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3164d0:
    // 0x3164d0: 0x2a62000a  slti        $v0, $s3, 0xA
    ctx->pc = 0x3164d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x3164d4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3164D4u;
    {
        const bool branch_taken_0x3164d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3164D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3164D4u;
        // 0x3164d8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3164d4) {
            ctx->pc = 0x316540u;
            goto label_316540;
        }
    }
    ctx->pc = 0x3164DCu;
    // 0x3164dc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3164dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3164e0: 0x2662fff7  addiu       $v0, $s3, -0x9
    ctx->pc = 0x3164e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967287));
    // 0x3164e4: 0x246323a8  addiu       $v1, $v1, 0x23A8
    ctx->pc = 0x3164e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9128));
    // 0x3164e8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3164e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3164ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3164ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3164f0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3164f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3164f4: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x3164F4u;
    SET_GPR_U32(ctx, 31, 0x3164FCu);
    ctx->pc = 0x3164F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3164F4u;
    // 0x3164f8: 0xdc440000  ld          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x3164F4u, 0x3164FCu)) {
        return;
    }
    ctx->pc = 0x3164FCu;
label_3164fc:
    // 0x3164fc: 0x6400005  bltz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3164FCu;
    {
        const bool branch_taken_0x3164fc = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x316500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3164FCu;
        // 0x316500: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3164fc) {
            ctx->pc = 0x316514u;
            goto label_316514;
        }
    }
    ctx->pc = 0x316504u;
    // 0x316504: 0xc07daaa  jal         func_1F6AA8
    ctx->pc = 0x316504u;
    SET_GPR_U32(ctx, 31, 0x31650Cu);
    ctx->pc = 0x316508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316504u;
    // 0x316508: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6AA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6AA8u, 0x316504u, 0x31650Cu)) {
        return;
    }
    ctx->pc = 0x31650Cu;
label_31650c:
    // 0x31650c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x31650Cu;
    {
        const bool branch_taken_0x31650c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31650Cu;
        // 0x316510: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31650c) {
            ctx->pc = 0x316534u;
            goto label_316534;
        }
    }
    ctx->pc = 0x316514u;
label_316514:
    // 0x316514: 0x12107a  dsrl        $v0, $s2, 1
    ctx->pc = 0x316514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) >> 1);
    // 0x316518: 0x32440001  andi        $a0, $s2, 0x1
    ctx->pc = 0x316518u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x31651c: 0xc07daaa  jal         func_1F6AA8
    ctx->pc = 0x31651Cu;
    SET_GPR_U32(ctx, 31, 0x316524u);
    ctx->pc = 0x316520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31651Cu;
    // 0x316520: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6AA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6AA8u, 0x31651Cu, 0x316524u)) {
        return;
    }
    ctx->pc = 0x316524u;
label_316524:
    // 0x316524: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x316524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316528: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x316528u;
    SET_GPR_U32(ctx, 31, 0x316530u);
    ctx->pc = 0x31652Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316528u;
    // 0x31652c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x316528u, 0x316530u)) {
        return;
    }
    ctx->pc = 0x316530u;
label_316530:
    // 0x316530: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x316530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_316534:
    // 0x316534: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x316534u;
    SET_GPR_U32(ctx, 31, 0x31653Cu);
    ctx->pc = 0x316538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316534u;
    // 0x316538: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x316534u, 0x31653Cu)) {
        return;
    }
    ctx->pc = 0x31653Cu;
label_31653c:
    // 0x31653c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31653cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_316540:
    // 0x316540: 0x2a820010  slti        $v0, $s4, 0x10
    ctx->pc = 0x316540u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x316544: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x316544u;
    {
        const bool branch_taken_0x316544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x316548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316544u;
        // 0x316548: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316544) {
            ctx->pc = 0x31662Cu;
            goto label_31662c;
        }
    }
    ctx->pc = 0x31654Cu;
    // 0x31654c: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x31654cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x316550: 0x10400285  beqz        $v0, . + 4 + (0x285 << 2)
    ctx->pc = 0x316550u;
    {
        const bool branch_taken_0x316550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x316554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316550u;
        // 0x316554: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316550) {
            ctx->pc = 0x316F68u;
            goto label_316f68;
        }
    }
    ctx->pc = 0x316558u;
    // 0x316558: 0x18400025  blez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x316558u;
    {
        const bool branch_taken_0x316558 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x31655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316558u;
        // 0x31655c: 0x28420017  slti        $v0, $v0, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)23) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x316558) {
            ctx->pc = 0x3165F0u;
            goto label_3165f0;
        }
    }
    ctx->pc = 0x316560u;
    // 0x316560: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x316560u;
    {
        const bool branch_taken_0x316560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x316564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316560u;
        // 0x316564: 0xdfa40010  ld          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316560) {
            ctx->pc = 0x316588u;
            goto label_316588;
        }
    }
    ctx->pc = 0x316568u;
    // 0x316568: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x316568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x31656c: 0x244223a8  addiu       $v0, $v0, 0x23A8
    ctx->pc = 0x31656cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9128));
    // 0x316570: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x316570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316574: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x316574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x316578: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x316578u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x31657c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x31657cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x316580: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x316580u;
    {
        const bool branch_taken_0x316580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316580u;
        // 0x316584: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316580) {
            ctx->pc = 0x3165E0u;
            goto label_3165e0;
        }
    }
    ctx->pc = 0x316588u;
label_316588:
    // 0x316588: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x316588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x31658c: 0x743823  subu        $a3, $v1, $s4
    ctx->pc = 0x31658cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x316590: 0xdfa30010  ld          $v1, 0x10($sp)
    ctx->pc = 0x316590u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x316594: 0x24e20016  addiu       $v0, $a3, 0x16
    ctx->pc = 0x316594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 22));
    // 0x316598: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x316598u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x31659c: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x31659Cu;
    {
        const bool branch_taken_0x31659c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3165A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31659Cu;
        // 0x3165a0: 0x2931023  subu        $v0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31659c) {
            ctx->pc = 0x316630u;
            goto label_316630;
        }
    }
    ctx->pc = 0x3165A4u;
    // 0x3165a4: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x3165a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    // 0x3165a8: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x3165a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3165ac: 0x261023a8  addiu       $s0, $s0, 0x23A8
    ctx->pc = 0x3165acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9128));
    // 0x3165b0: 0x67182f  dsubu       $v1, $v1, $a3
    ctx->pc = 0x3165b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 7));
    // 0x3165b4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3165b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3165b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3165b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3165bc: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x3165bcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3165c0: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x3165C0u;
    SET_GPR_U32(ctx, 31, 0x3165C8u);
    ctx->pc = 0x3165C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3165C0u;
    // 0x3165c4: 0xffa30010  sd          $v1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x3165C0u, 0x3165C8u)) {
        return;
    }
    ctx->pc = 0x3165C8u;
label_3165c8:
    // 0x3165c8: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x3165c8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3165cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3165ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3165d0: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x3165d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3165d4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3165d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3165d8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3165d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3165dc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3165dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3165e0:
    // 0x3165e0: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x3165E0u;
    SET_GPR_U32(ctx, 31, 0x3165E8u);
    ctx->pc = 0x3165E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3165E0u;
    // 0x3165e4: 0xdc640000  ld          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x3165E0u, 0x3165E8u)) {
        return;
    }
    ctx->pc = 0x3165E8u;
label_3165e8:
    // 0x3165e8: 0x1000025e  b           . + 4 + (0x25E << 2)
    ctx->pc = 0x3165E8u;
    {
        const bool branch_taken_0x3165e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3165ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3165E8u;
        // 0x3165ec: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3165e8) {
            ctx->pc = 0x316F64u;
            goto label_316f64;
        }
    }
    ctx->pc = 0x3165F0u;
label_3165f0:
    // 0x3165f0: 0xdfa70010  ld          $a3, 0x10($sp)
    ctx->pc = 0x3165f0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3165f4: 0x28e2ffea  slti        $v0, $a3, -0x16
    ctx->pc = 0x3165f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4294967274) ? 1 : 0);
    // 0x3165f8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3165F8u;
    {
        const bool branch_taken_0x3165f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3165FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3165F8u;
        // 0x3165fc: 0x2931023  subu        $v0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3165f8) {
            ctx->pc = 0x316630u;
            goto label_316630;
        }
    }
    ctx->pc = 0x316600u;
    // 0x316600: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x316600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x316604: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x316604u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x316608: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x316608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x31660c: 0x244223a8  addiu       $v0, $v0, 0x23A8
    ctx->pc = 0x31660cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9128));
    // 0x316610: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x316610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x316614: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x316614u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x316618: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x316618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31661c: 0xc07de5c  jal         func_1F7970
    ctx->pc = 0x31661Cu;
    SET_GPR_U32(ctx, 31, 0x316624u);
    ctx->pc = 0x316620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31661Cu;
    // 0x316620: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7970u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7970u, 0x31661Cu, 0x316624u)) {
        return;
    }
    ctx->pc = 0x316624u;
label_316624:
    // 0x316624: 0x1000024f  b           . + 4 + (0x24F << 2)
    ctx->pc = 0x316624u;
    {
        const bool branch_taken_0x316624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316624u;
        // 0x316628: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316624) {
            ctx->pc = 0x316F64u;
            goto label_316f64;
        }
    }
    ctx->pc = 0x31662Cu;
label_31662c:
    // 0x31662c: 0x2931023  subu        $v0, $s4, $s3
    ctx->pc = 0x31662cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_316630:
    // 0x316630: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x316630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x316634: 0x1a000050  blez        $s0, . + 4 + (0x50 << 2)
    ctx->pc = 0x316634u;
    {
        const bool branch_taken_0x316634 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x316638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316634u;
        // 0x316638: 0x3207000f  andi        $a3, $s0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x316634) {
            ctx->pc = 0x316778u;
            goto label_316778;
        }
    }
    ctx->pc = 0x31663Cu;
    // 0x31663c: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x31663Cu;
    {
        const bool branch_taken_0x31663c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x316640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31663Cu;
        // 0x316640: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31663c) {
            ctx->pc = 0x316660u;
            goto label_316660;
        }
    }
    ctx->pc = 0x316644u;
    // 0x316644: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x316644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x316648: 0x244223a8  addiu       $v0, $v0, 0x23A8
    ctx->pc = 0x316648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9128));
    // 0x31664c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31664cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316650: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x316650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x316654: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x316654u;
    SET_GPR_U32(ctx, 31, 0x31665Cu);
    ctx->pc = 0x316658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316654u;
    // 0x316658: 0xdc640000  ld          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x316654u, 0x31665Cu)) {
        return;
    }
    ctx->pc = 0x31665Cu;
label_31665c:
    // 0x31665c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31665cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_316660:
    // 0x316660: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x316660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x316664: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x316664u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x316668: 0x12000090  beqz        $s0, . + 4 + (0x90 << 2)
    ctx->pc = 0x316668u;
    {
        const bool branch_taken_0x316668 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31666Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316668u;
        // 0x31666c: 0x2a020135  slti        $v0, $s0, 0x135 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)309) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x316668) {
            ctx->pc = 0x3168ACu;
            goto label_3168ac;
        }
    }
    ctx->pc = 0x316670u;
    // 0x316670: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x316670u;
    {
        const bool branch_taken_0x316670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x316670) {
            ctx->pc = 0x316674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x316670u;
            // 0x316674: 0x108103  sra         $s0, $s0, 4 (Delay Slot)
            SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x316698u;
            goto label_316698;
        }
    }
    ctx->pc = 0x316678u;
label_316678:
    // 0x316678: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x316678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_31667c:
    // 0x31667c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x31667cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x316680: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x316680u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x316684: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x316684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316688: 0x14400227  bnez        $v0, . + 4 + (0x227 << 2)
    ctx->pc = 0x316688u;
    {
        const bool branch_taken_0x316688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316688u;
        // 0x31668c: 0xdc712348  ld          $s1, 0x2348($v1) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 9032)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316688) {
            ctx->pc = 0x316F28u;
            goto label_316f28;
        }
    }
    ctx->pc = 0x316690u;
    // 0x316690: 0x10000235  b           . + 4 + (0x235 << 2)
    ctx->pc = 0x316690u;
    {
        const bool branch_taken_0x316690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316690u;
        // 0x316694: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316690) {
            ctx->pc = 0x316F68u;
            goto label_316f68;
        }
    }
    ctx->pc = 0x316698u;
label_316698:
    // 0x316698: 0x12000084  beqz        $s0, . + 4 + (0x84 << 2)
    ctx->pc = 0x316698u;
    {
        const bool branch_taken_0x316698 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31669Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316698u;
        // 0x31669c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316698) {
            ctx->pc = 0x3168ACu;
            goto label_3168ac;
        }
    }
    ctx->pc = 0x3166A0u;
    // 0x3166a0: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x3166a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3166a4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3166A4u;
    {
        const bool branch_taken_0x3166a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3166A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3166A4u;
        // 0x3166a8: 0x3c16006b  lui         $s6, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3166a4) {
            ctx->pc = 0x3166E0u;
            goto label_3166e0;
        }
    }
    ctx->pc = 0x3166ACu;
    // 0x3166ac: 0x26d22470  addiu       $s2, $s6, 0x2470
    ctx->pc = 0x3166acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 9328));
label_3166b0:
    // 0x3166b0: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x3166b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3166b4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3166B4u;
    {
        const bool branch_taken_0x3166b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3166b4) {
            ctx->pc = 0x3166B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3166B4u;
            // 0x3166b8: 0x108043  sra         $s0, $s0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3166D0u;
            goto label_3166d0;
        }
    }
    ctx->pc = 0x3166BCu;
    // 0x3166bc: 0xde440000  ld          $a0, 0x0($s2)
    ctx->pc = 0x3166bcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3166c0: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x3166C0u;
    SET_GPR_U32(ctx, 31, 0x3166C8u);
    ctx->pc = 0x3166C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3166C0u;
    // 0x3166c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x3166C0u, 0x3166C8u)) {
        return;
    }
    ctx->pc = 0x3166C8u;
label_3166c8:
    // 0x3166c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3166c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3166cc: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x3166ccu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
label_3166d0:
    // 0x3166d0: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x3166d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x3166d4: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x3166d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3166d8: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3166D8u;
    {
        const bool branch_taken_0x3166d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3166DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3166D8u;
        // 0x3166dc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3166d8) {
            ctx->pc = 0x3166B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3166b0;
        }
    }
    ctx->pc = 0x3166E0u;
label_3166e0:
    // 0x3166e0: 0x26c42470  addiu       $a0, $s6, 0x2470
    ctx->pc = 0x3166e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 9328));
    // 0x3166e4: 0x11283f  dsra32      $a1, $s1, 0
    ctx->pc = 0x3166e4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x3166e8: 0x3c02fcb0  lui         $v0, 0xFCB0
    ctx->pc = 0x3166e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64688 << 16));
    // 0x3166ec: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x3166ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x3166f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3166f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3166f4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3166f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3166f8: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x3166f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3166fc: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x3166fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x316700: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x316700u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x316704: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x316704u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x316708: 0x2308824  and         $s1, $s1, $s0
    ctx->pc = 0x316708u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x31670c: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x31670Cu;
    SET_GPR_U32(ctx, 31, 0x316714u);
    ctx->pc = 0x316710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31670Cu;
    // 0x316710: 0x2252825  or          $a1, $s1, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x31670Cu, 0x316714u)) {
        return;
    }
    ctx->pc = 0x316714u;
label_316714:
    // 0x316714: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x316714u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316718: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x316718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x31671c: 0x11203f  dsra32      $a0, $s1, 0
    ctx->pc = 0x31671cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x316720: 0x3c027ca0  lui         $v0, 0x7CA0
    ctx->pc = 0x316720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31904 << 16));
    // 0x316724: 0x839024  and         $s2, $a0, $v1
    ctx->pc = 0x316724u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x316728: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x316728u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x31672c: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x31672Cu;
    {
        const bool branch_taken_0x31672c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x316730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31672Cu;
        // 0x316730: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31672c) {
            ctx->pc = 0x31667Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31667c;
        }
    }
    ctx->pc = 0x316734u;
    // 0x316734: 0x3c027c90  lui         $v0, 0x7C90
    ctx->pc = 0x316734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31888 << 16));
    // 0x316738: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x316738u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x31673c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31673Cu;
    {
        const bool branch_taken_0x31673c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x316740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31673Cu;
        // 0x316740: 0x3c020350  lui         $v0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)848 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31673c) {
            ctx->pc = 0x316764u;
            goto label_316764;
        }
    }
    ctx->pc = 0x316744u;
    // 0x316744: 0x2308824  and         $s1, $s1, $s0
    ctx->pc = 0x316744u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x316748: 0x3402ffdf  ori         $v0, $zero, 0xFFDF
    ctx->pc = 0x316748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65503);
    // 0x31674c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31674cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x316750: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x316750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x316754: 0x217f8  dsll        $v0, $v0, 31
    ctx->pc = 0x316754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x316758: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x316758u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x31675c: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x31675Cu;
    {
        const bool branch_taken_0x31675c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31675Cu;
        // 0x316760: 0x2308825  or          $s1, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31675c) {
            ctx->pc = 0x3168ACu;
            goto label_3168ac;
        }
    }
    ctx->pc = 0x316764u;
label_316764:
    // 0x316764: 0x2308824  and         $s1, $s1, $s0
    ctx->pc = 0x316764u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x316768: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x316768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x31676c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31676cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x316770: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x316770u;
    {
        const bool branch_taken_0x316770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316770u;
        // 0x316774: 0x2228825  or          $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316770) {
            ctx->pc = 0x3168ACu;
            goto label_3168ac;
        }
    }
    ctx->pc = 0x316778u;
label_316778:
    // 0x316778: 0x601004d  bgez        $s0, . + 4 + (0x4D << 2)
    ctx->pc = 0x316778u;
    {
        const bool branch_taken_0x316778 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x31677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316778u;
        // 0x31677c: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316778) {
            ctx->pc = 0x3168B0u;
            goto label_3168b0;
        }
    }
    ctx->pc = 0x316780u;
    // 0x316780: 0x108023  negu        $s0, $s0
    ctx->pc = 0x316780u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x316784: 0x3207000f  andi        $a3, $s0, 0xF
    ctx->pc = 0x316784u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x316788: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x316788u;
    {
        const bool branch_taken_0x316788 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x31678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316788u;
        // 0x31678c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316788) {
            ctx->pc = 0x3167ACu;
            goto label_3167ac;
        }
    }
    ctx->pc = 0x316790u;
    // 0x316790: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x316790u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x316794: 0x244223a8  addiu       $v0, $v0, 0x23A8
    ctx->pc = 0x316794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9128));
    // 0x316798: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x316798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31679c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31679cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3167a0: 0xc07de5c  jal         func_1F7970
    ctx->pc = 0x3167A0u;
    SET_GPR_U32(ctx, 31, 0x3167A8u);
    ctx->pc = 0x3167A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3167A0u;
    // 0x3167a4: 0xdc650000  ld          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7970u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7970u, 0x3167A0u, 0x3167A8u)) {
        return;
    }
    ctx->pc = 0x3167A8u;
label_3167a8:
    // 0x3167a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3167a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3167ac:
    // 0x3167ac: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x3167acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x3167b0: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x3167b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x3167b4: 0x1200003d  beqz        $s0, . + 4 + (0x3D << 2)
    ctx->pc = 0x3167B4u;
    {
        const bool branch_taken_0x3167b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3167B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3167B4u;
        // 0x3167b8: 0x108103  sra         $s0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3167b4) {
            ctx->pc = 0x3168ACu;
            goto label_3168ac;
        }
    }
    ctx->pc = 0x3167BCu;
    // 0x3167bc: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x3167bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3167c0: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3167C0u;
    {
        const bool branch_taken_0x3167c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3167C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3167C0u;
        // 0x3167c4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3167c0) {
            ctx->pc = 0x316874u;
            goto label_316874;
        }
    }
    ctx->pc = 0x3167C8u;
    // 0x3167c8: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x3167c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3167cc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3167CCu;
    {
        const bool branch_taken_0x3167cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3167D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3167CCu;
        // 0x3167d0: 0x3c16006b  lui         $s6, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3167cc) {
            ctx->pc = 0x316808u;
            goto label_316808;
        }
    }
    ctx->pc = 0x3167D4u;
    // 0x3167d4: 0x26d22498  addiu       $s2, $s6, 0x2498
    ctx->pc = 0x3167d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 9368));
label_3167d8:
    // 0x3167d8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x3167d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3167dc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3167DCu;
    {
        const bool branch_taken_0x3167dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3167dc) {
            ctx->pc = 0x3167E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3167DCu;
            // 0x3167e0: 0x108043  sra         $s0, $s0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3167F8u;
            goto label_3167f8;
        }
    }
    ctx->pc = 0x3167E4u;
    // 0x3167e4: 0xde440000  ld          $a0, 0x0($s2)
    ctx->pc = 0x3167e4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3167e8: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x3167E8u;
    SET_GPR_U32(ctx, 31, 0x3167F0u);
    ctx->pc = 0x3167ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3167E8u;
    // 0x3167ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x3167E8u, 0x3167F0u)) {
        return;
    }
    ctx->pc = 0x3167F0u;
label_3167f0:
    // 0x3167f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3167f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3167f4: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x3167f4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
label_3167f8:
    // 0x3167f8: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x3167f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x3167fc: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x3167fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x316800: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x316800u;
    {
        const bool branch_taken_0x316800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x316804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316800u;
        // 0x316804: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316800) {
            ctx->pc = 0x3167D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3167d8;
        }
    }
    ctx->pc = 0x316808u;
label_316808:
    // 0x316808: 0x26c22498  addiu       $v0, $s6, 0x2498
    ctx->pc = 0x316808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 9368));
    // 0x31680c: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x31680cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x316810: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x316810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x316814: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x316814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316818: 0xdc700000  ld          $s0, 0x0($v1)
    ctx->pc = 0x316818u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31681c: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x31681cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316820: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x316820u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316824: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x316824u;
    SET_GPR_U32(ctx, 31, 0x31682Cu);
    ctx->pc = 0x316828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316824u;
    // 0x316828: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x316824u, 0x31682Cu)) {
        return;
    }
    ctx->pc = 0x31682Cu;
label_31682c:
    // 0x31682c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31682cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316830: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x316830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316834: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x316834u;
    SET_GPR_U32(ctx, 31, 0x31683Cu);
    ctx->pc = 0x316838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316834u;
    // 0x316838: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x316834u, 0x31683Cu)) {
        return;
    }
    ctx->pc = 0x31683Cu;
label_31683c:
    // 0x31683c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x31683Cu;
    {
        const bool branch_taken_0x31683c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x316840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31683Cu;
        // 0x316840: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31683c) {
            ctx->pc = 0x3168B0u;
            goto label_3168b0;
        }
    }
    ctx->pc = 0x316844u;
    // 0x316844: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x316844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316848: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x316848u;
    SET_GPR_U32(ctx, 31, 0x316850u);
    ctx->pc = 0x31684Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316848u;
    // 0x31684c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x316848u, 0x316850u)) {
        return;
    }
    ctx->pc = 0x316850u;
label_316850:
    // 0x316850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x316850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316854: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x316854u;
    SET_GPR_U32(ctx, 31, 0x31685Cu);
    ctx->pc = 0x316858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316854u;
    // 0x316858: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x316854u, 0x31685Cu)) {
        return;
    }
    ctx->pc = 0x31685Cu;
label_31685c:
    // 0x31685c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31685cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316860: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x316860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316864: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x316864u;
    SET_GPR_U32(ctx, 31, 0x31686Cu);
    ctx->pc = 0x316868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316864u;
    // 0x316868: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x316864u, 0x31686Cu)) {
        return;
    }
    ctx->pc = 0x31686Cu;
label_31686c:
    // 0x31686c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x31686Cu;
    {
        const bool branch_taken_0x31686c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x316870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31686Cu;
        // 0x316870: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31686c) {
            ctx->pc = 0x3168ACu;
            goto label_3168ac;
        }
    }
    ctx->pc = 0x316874u;
label_316874:
    // 0x316874: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x316874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_316878:
    // 0x316878: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x316878u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x31687c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31687cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316880: 0x146001a9  bnez        $v1, . + 4 + (0x1A9 << 2)
    ctx->pc = 0x316880u;
    {
        const bool branch_taken_0x316880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x316884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316880u;
        // 0x316884: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316880) {
            ctx->pc = 0x316F28u;
            goto label_316f28;
        }
    }
    ctx->pc = 0x316888u;
    // 0x316888: 0x100001b7  b           . + 4 + (0x1B7 << 2)
    ctx->pc = 0x316888u;
    {
        const bool branch_taken_0x316888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31688Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316888u;
        // 0x31688c: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316888) {
            ctx->pc = 0x316F68u;
            goto label_316f68;
        }
    }
    ctx->pc = 0x316890u;
label_316890:
    // 0x316890: 0xc0c823a  jal         func_3208E8
    ctx->pc = 0x316890u;
    SET_GPR_U32(ctx, 31, 0x316898u);
    ctx->pc = 0x316894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316890u;
    // 0x316894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3208E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3208E8u, 0x316890u, 0x316898u)) {
        return;
    }
    ctx->pc = 0x316898u;
label_316898:
    // 0x316898: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x316898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31689c: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x31689Cu;
    SET_GPR_U32(ctx, 31, 0x3168A4u);
    ctx->pc = 0x3168A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31689Cu;
    // 0x3168a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x31689Cu, 0x3168A4u)) {
        return;
    }
    ctx->pc = 0x3168A4u;
label_3168a4:
    // 0x3168a4: 0x100001a0  b           . + 4 + (0x1A0 << 2)
    ctx->pc = 0x3168A4u;
    {
        const bool branch_taken_0x3168a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3168A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3168A4u;
        // 0x3168a8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3168a4) {
            ctx->pc = 0x316F28u;
            goto label_316f28;
        }
    }
    ctx->pc = 0x3168ACu;
label_3168ac:
    // 0x3168ac: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x3168acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3168b0:
    // 0x3168b0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x3168b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3168b4: 0x8fa80020  lw          $t0, 0x20($sp)
    ctx->pc = 0x3168b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3168b8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3168b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3168bc: 0xc0c7ff6  jal         func_31FFD8
    ctx->pc = 0x3168BCu;
    SET_GPR_U32(ctx, 31, 0x3168C4u);
    ctx->pc = 0x3168C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3168BCu;
    // 0x3168c0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FFD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31FFD8u, 0x3168BCu, 0x3168C4u)) {
        return;
    }
    ctx->pc = 0x3168C4u;
label_3168c4:
    // 0x3168c4: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x3168c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x3168c8: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x3168c8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3168cc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3168ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3168d0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3168d0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3168d4: 0x27a70004  addiu       $a3, $sp, 0x4
    ctx->pc = 0x3168d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x3168d8: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x3168d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
    // 0x3168dc: 0x1000011d  b           . + 4 + (0x11D << 2)
    ctx->pc = 0x3168DCu;
    {
        const bool branch_taken_0x3168dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3168E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3168DCu;
        // 0x3168e0: 0xafa70048  sw          $a3, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3168dc) {
            ctx->pc = 0x316D54u;
            goto label_316d54;
        }
    }
    ctx->pc = 0x3168E4u;
    // 0x3168e4: 0x0  nop
    ctx->pc = 0x3168e4u;
    // NOP
label_3168e8:
    // 0x3168e8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3168e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3168ec: 0xc0c8166  jal         func_320598
    ctx->pc = 0x3168ECu;
    SET_GPR_U32(ctx, 31, 0x3168F4u);
    ctx->pc = 0x3168F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3168ECu;
    // 0x3168f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320598u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320598u, 0x3168ECu, 0x3168F4u)) {
        return;
    }
    ctx->pc = 0x3168F4u;
label_3168f4:
    // 0x3168f4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x3168f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x3168f8: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x3168f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x3168fc: 0xc0c81bc  jal         func_3206F0
    ctx->pc = 0x3168FCu;
    SET_GPR_U32(ctx, 31, 0x316904u);
    ctx->pc = 0x316900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3168FCu;
    // 0x316900: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3206F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3206F0u, 0x3168FCu, 0x316904u)) {
        return;
    }
    ctx->pc = 0x316904u;
label_316904:
    // 0x316904: 0x1c40001e  bgtz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x316904u;
    {
        const bool branch_taken_0x316904 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x316908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316904u;
        // 0x316908: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316904) {
            ctx->pc = 0x316980u;
            goto label_316980;
        }
    }
    ctx->pc = 0x31690Cu;
    // 0x31690c: 0x10000187  b           . + 4 + (0x187 << 2)
    ctx->pc = 0x31690Cu;
    {
        const bool branch_taken_0x31690c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31690c) {
            ctx->pc = 0x316F2Cu;
            goto label_316f2c;
        }
    }
    ctx->pc = 0x316914u;
label_316914:
    // 0x316914: 0x14e0003f  bnez        $a3, . + 4 + (0x3F << 2)
    ctx->pc = 0x316914u;
    {
        const bool branch_taken_0x316914 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x316918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316914u;
        // 0x316918: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316914) {
            ctx->pc = 0x316A14u;
            goto label_316a14;
        }
    }
    ctx->pc = 0x31691Cu;
    // 0x31691c: 0x12800013  beqz        $s4, . + 4 + (0x13 << 2)
    ctx->pc = 0x31691Cu;
    {
        const bool branch_taken_0x31691c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x31691c) {
            ctx->pc = 0x31696Cu;
            goto label_31696c;
        }
    }
    ctx->pc = 0x316924u;
    // 0x316924: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x316924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x316928: 0x31b3a  dsrl        $v1, $v1, 12
    ctx->pc = 0x316928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 12);
    // 0x31692c: 0x2231024  and         $v0, $s1, $v1
    ctx->pc = 0x31692cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x316930: 0x14430024  bne         $v0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x316930u;
    {
        const bool branch_taken_0x316930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x316934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316930u;
        // 0x316934: 0x3c037ff0  lui         $v1, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316930) {
            ctx->pc = 0x3169C4u;
            goto label_3169c4;
        }
    }
    ctx->pc = 0x316938u;
    // 0x316938: 0x11103f  dsra32      $v0, $s1, 0
    ctx->pc = 0x316938u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x31693c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x31693cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x316940: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x316940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x316944: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x316944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x316948: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x316948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31694c: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x31694cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x316950: 0x2238824  and         $s1, $s1, $v1
    ctx->pc = 0x316950u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x316954: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x316954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x316958: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x316958u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x31695c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x31695cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x316960: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x316960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x316964: 0x10000170  b           . + 4 + (0x170 << 2)
    ctx->pc = 0x316964u;
    {
        const bool branch_taken_0x316964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316964u;
        // 0x316968: 0x2238824  and         $s1, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316964) {
            ctx->pc = 0x316F28u;
            goto label_316f28;
        }
    }
    ctx->pc = 0x31696Cu;
label_31696c:
    // 0x31696c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31696cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x316970: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x316970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x316974: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x316974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x316978: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x316978u;
    {
        const bool branch_taken_0x316978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x316978) {
            ctx->pc = 0x3169C4u;
            goto label_3169c4;
        }
    }
    ctx->pc = 0x316980u;
label_316980:
    // 0x316980: 0x11103f  dsra32      $v0, $s1, 0
    ctx->pc = 0x316980u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x316984: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x316984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x316988: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x316988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x31698c: 0x3c04fff0  lui         $a0, 0xFFF0
    ctx->pc = 0x31698cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65520 << 16));
    // 0x316990: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x316990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x316994: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x316994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x316998: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x316998u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x31699c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31699cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3169a0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3169a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3169a4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3169a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3169a8: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x3169a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x3169ac: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x3169acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x3169b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3169b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3169b4: 0x2258824  and         $s1, $s1, $a1
    ctx->pc = 0x3169b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 5));
    // 0x3169b8: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x3169b8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x3169bc: 0x1000015a  b           . + 4 + (0x15A << 2)
    ctx->pc = 0x3169BCu;
    {
        const bool branch_taken_0x3169bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3169C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3169BCu;
        // 0x3169c0: 0x2258825  or          $s1, $s1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3169bc) {
            ctx->pc = 0x316F28u;
            goto label_316f28;
        }
    }
    ctx->pc = 0x3169C4u;
label_3169c4:
    // 0x3169c4: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x3169c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3169c8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3169c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3169cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3169ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3169d0: 0x10400156  beqz        $v0, . + 4 + (0x156 << 2)
    ctx->pc = 0x3169D0u;
    {
        const bool branch_taken_0x3169d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3169D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3169D0u;
        // 0x3169d4: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3169d0) {
            ctx->pc = 0x316F2Cu;
            goto label_316f2c;
        }
    }
    ctx->pc = 0x3169D8u;
    // 0x3169d8: 0x1680ffad  bnez        $s4, . + 4 + (-0x53 << 2)
    ctx->pc = 0x3169D8u;
    {
        const bool branch_taken_0x3169d8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x3169d8) {
            ctx->pc = 0x316890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_316890;
        }
    }
    ctx->pc = 0x3169E0u;
    // 0x3169e0: 0xc0c823a  jal         func_3208E8
    ctx->pc = 0x3169E0u;
    SET_GPR_U32(ctx, 31, 0x3169E8u);
    ctx->pc = 0x3169E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3169E0u;
    // 0x3169e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3208E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3208E8u, 0x3169E0u, 0x3169E8u)) {
        return;
    }
    ctx->pc = 0x3169E8u;
label_3169e8:
    // 0x3169e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3169e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3169ec: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x3169ECu;
    SET_GPR_U32(ctx, 31, 0x3169F4u);
    ctx->pc = 0x3169F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3169ECu;
    // 0x3169f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x3169ECu, 0x3169F4u)) {
        return;
    }
    ctx->pc = 0x3169F4u;
label_3169f4:
    // 0x3169f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3169f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3169f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3169f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3169fc: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x3169FCu;
    SET_GPR_U32(ctx, 31, 0x316A04u);
    ctx->pc = 0x316A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3169FCu;
    // 0x316a00: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x3169FCu, 0x316A04u)) {
        return;
    }
    ctx->pc = 0x316A04u;
label_316a04:
    // 0x316a04: 0x1040ff9b  beqz        $v0, . + 4 + (-0x65 << 2)
    ctx->pc = 0x316A04u;
    {
        const bool branch_taken_0x316a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x316A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316A04u;
        // 0x316a08: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316a04) {
            ctx->pc = 0x316874u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_316874;
        }
    }
    ctx->pc = 0x316A0Cu;
    // 0x316a0c: 0x10000147  b           . + 4 + (0x147 << 2)
    ctx->pc = 0x316A0Cu;
    {
        const bool branch_taken_0x316a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x316a0c) {
            ctx->pc = 0x316F2Cu;
            goto label_316f2c;
        }
    }
    ctx->pc = 0x316A14u;
label_316a14:
    // 0x316a14: 0xc0c8332  jal         func_320CC8
    ctx->pc = 0x316A14u;
    SET_GPR_U32(ctx, 31, 0x316A1Cu);
    ctx->pc = 0x316A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316A14u;
    // 0x316a18: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320CC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320CC8u, 0x316A14u, 0x316A1Cu)) {
        return;
    }
    ctx->pc = 0x316A1Cu;
label_316a1c:
    // 0x316a1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x316a1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316a20: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x316a20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x316a24: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x316a24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x316a28: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x316A28u;
    SET_GPR_U32(ctx, 31, 0x316A30u);
    ctx->pc = 0x316A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316A28u;
    // 0x316a2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x316A28u, 0x316A30u)) {
        return;
    }
    ctx->pc = 0x316A30u;
label_316a30:
    // 0x316a30: 0x1c400024  bgtz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x316A30u;
    {
        const bool branch_taken_0x316a30 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x316a30) {
            ctx->pc = 0x316AC4u;
            goto label_316ac4;
        }
    }
    ctx->pc = 0x316A38u;
    // 0x316a38: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x316A38u;
    {
        const bool branch_taken_0x316a38 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x316a38) {
            ctx->pc = 0x316A50u;
            goto label_316a50;
        }
    }
    ctx->pc = 0x316A40u;
    // 0x316a40: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x316a40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x316a44: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x316a44u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x316a48: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x316A48u;
    {
        const bool branch_taken_0x316a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316A48u;
        // 0x316a4c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316a48) {
            ctx->pc = 0x316AF0u;
            goto label_316af0;
        }
    }
    ctx->pc = 0x316A50u;
label_316a50:
    // 0x316a50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x316a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x316a54: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x316a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x316a58: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x316a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x316a5c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x316A5Cu;
    {
        const bool branch_taken_0x316a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x316A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316A5Cu;
        // 0x316a60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316a5c) {
            ctx->pc = 0x316A84u;
            goto label_316a84;
        }
    }
    ctx->pc = 0x316A64u;
    // 0x316a64: 0x1222ff84  beq         $s1, $v0, . + 4 + (-0x7C << 2)
    ctx->pc = 0x316A64u;
    {
        const bool branch_taken_0x316a64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x316A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316A64u;
        // 0x316a68: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316a64) {
            ctx->pc = 0x316878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_316878;
        }
    }
    ctx->pc = 0x316A6Cu;
    // 0x316a6c: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x316a6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x316a70: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x316a70u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x316a74: 0x3412bff0  ori         $s2, $zero, 0xBFF0
    ctx->pc = 0x316a74u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x316a78: 0x12943c  dsll32      $s2, $s2, 16
    ctx->pc = 0x316a78u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 16));
    // 0x316a7c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x316A7Cu;
    {
        const bool branch_taken_0x316a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x316a7c) {
            ctx->pc = 0x316AF0u;
            goto label_316af0;
        }
    }
    ctx->pc = 0x316A84u;
label_316a84:
    // 0x316a84: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x316a84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x316a88: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x316a88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x316a8c: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x316A8Cu;
    SET_GPR_U32(ctx, 31, 0x316A94u);
    ctx->pc = 0x316A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316A8Cu;
    // 0x316a90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x316A8Cu, 0x316A94u)) {
        return;
    }
    ctx->pc = 0x316A94u;
label_316a94:
    // 0x316a94: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x316A94u;
    {
        const bool branch_taken_0x316a94 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x316A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316A94u;
        // 0x316a98: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316a94) {
            ctx->pc = 0x316AACu;
            goto label_316aac;
        }
    }
    ctx->pc = 0x316A9Cu;
    // 0x316a9c: 0x3410ff80  ori         $s0, $zero, 0xFF80
    ctx->pc = 0x316a9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x316aa0: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x316aa0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x316aa4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x316AA4u;
    {
        const bool branch_taken_0x316aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x316aa4) {
            ctx->pc = 0x316AE4u;
            goto label_316ae4;
        }
    }
    ctx->pc = 0x316AACu;
label_316aac:
    // 0x316aac: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x316aacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x316ab0: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x316ab0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x316ab4: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x316AB4u;
    SET_GPR_U32(ctx, 31, 0x316ABCu);
    ctx->pc = 0x316AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316AB4u;
    // 0x316ab8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x316AB4u, 0x316ABCu)) {
        return;
    }
    ctx->pc = 0x316ABCu;
label_316abc:
    // 0x316abc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x316ABCu;
    {
        const bool branch_taken_0x316abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316ABCu;
        // 0x316ac0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316abc) {
            ctx->pc = 0x316AE0u;
            goto label_316ae0;
        }
    }
    ctx->pc = 0x316AC4u;
label_316ac4:
    // 0x316ac4: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x316ac4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x316ac8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x316ac8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x316acc: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x316ACCu;
    SET_GPR_U32(ctx, 31, 0x316AD4u);
    ctx->pc = 0x316AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316ACCu;
    // 0x316ad0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x316ACCu, 0x316AD4u)) {
        return;
    }
    ctx->pc = 0x316AD4u;
label_316ad4:
    // 0x316ad4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x316ad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316ad8: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x316AD8u;
    {
        const bool branch_taken_0x316ad8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x316ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316AD8u;
        // 0x316adc: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316ad8) {
            ctx->pc = 0x316AF0u;
            goto label_316af0;
        }
    }
    ctx->pc = 0x316AE0u;
label_316ae0:
    // 0x316ae0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x316ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_316ae4:
    // 0x316ae4: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x316AE4u;
    SET_GPR_U32(ctx, 31, 0x316AECu);
    ctx->pc = 0x316AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316AE4u;
    // 0x316ae8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x316AE4u, 0x316AECu)) {
        return;
    }
    ctx->pc = 0x316AECu;
label_316aec:
    // 0x316aec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x316aecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_316af0:
    // 0x316af0: 0x11183f  dsra32      $v1, $s1, 0
    ctx->pc = 0x316af0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x316af4: 0x3c1e7ff0  lui         $fp, 0x7FF0
    ctx->pc = 0x316af4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)32752 << 16));
    // 0x316af8: 0x7e1024  and         $v0, $v1, $fp
    ctx->pc = 0x316af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 30));
    // 0x316afc: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x316afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x316b00: 0x3c027fe0  lui         $v0, 0x7FE0
    ctx->pc = 0x316b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32736 << 16));
    // 0x316b04: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x316b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x316b08: 0x1482002e  bne         $a0, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x316B08u;
    {
        const bool branch_taken_0x316b08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x316B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316B08u;
        // 0x316b0c: 0x8fa70020  lw          $a3, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316b08) {
            ctx->pc = 0x316BC4u;
            goto label_316bc4;
        }
    }
    ctx->pc = 0x316B10u;
    // 0x316b10: 0x3c02fcb0  lui         $v0, 0xFCB0
    ctx->pc = 0x316b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64688 << 16));
    // 0x316b14: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x316b14u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316b18: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x316b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x316b1c: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x316b1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x316b20: 0x13983e  dsrl32      $s3, $s3, 0
    ctx->pc = 0x316b20u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x316b24: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x316b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x316b28: 0x2338824  and         $s1, $s1, $s3
    ctx->pc = 0x316b28u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 19));
    // 0x316b2c: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x316b2cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x316b30: 0xc0c823a  jal         func_3208E8
    ctx->pc = 0x316B30u;
    SET_GPR_U32(ctx, 31, 0x316B38u);
    ctx->pc = 0x316B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316B30u;
    // 0x316b34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3208E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3208E8u, 0x316B30u, 0x316B38u)) {
        return;
    }
    ctx->pc = 0x316B38u;
label_316b38:
    // 0x316b38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x316b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316b3c: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x316B3Cu;
    SET_GPR_U32(ctx, 31, 0x316B44u);
    ctx->pc = 0x316B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316B3Cu;
    // 0x316b40: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x316B3Cu, 0x316B44u)) {
        return;
    }
    ctx->pc = 0x316B44u;
label_316b44:
    // 0x316b44: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x316b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316b48: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x316B48u;
    SET_GPR_U32(ctx, 31, 0x316B50u);
    ctx->pc = 0x316B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316B48u;
    // 0x316b4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x316B48u, 0x316B50u)) {
        return;
    }
    ctx->pc = 0x316B50u;
label_316b50:
    // 0x316b50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x316b50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316b54: 0x3c037c9f  lui         $v1, 0x7C9F
    ctx->pc = 0x316b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31903 << 16));
    // 0x316b58: 0x11203f  dsra32      $a0, $s1, 0
    ctx->pc = 0x316b58u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x316b5c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x316b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x316b60: 0x9e1024  and         $v0, $a0, $fp
    ctx->pc = 0x316b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 30));
    // 0x316b64: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x316b64u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x316b68: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x316B68u;
    {
        const bool branch_taken_0x316b68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x316B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316B68u;
        // 0x316b6c: 0x3c020350  lui         $v0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)848 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316b68) {
            ctx->pc = 0x316BB0u;
            goto label_316bb0;
        }
    }
    ctx->pc = 0x316B70u;
    // 0x316b70: 0x3402ffdf  ori         $v0, $zero, 0xFFDF
    ctx->pc = 0x316b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65503);
    // 0x316b74: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x316b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x316b78: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x316b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x316b7c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x316b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x316b80: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x316b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x316b84: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x316b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
    // 0x316b88: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x316b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x316b8c: 0x12c2feba  beq         $s6, $v0, . + 4 + (-0x146 << 2)
    ctx->pc = 0x316B8Cu;
    {
        const bool branch_taken_0x316b8c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x316B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316B8Cu;
        // 0x316b90: 0x2338824  and         $s1, $s1, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316b8c) {
            ctx->pc = 0x316678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_316678;
        }
    }
    ctx->pc = 0x316B94u;
    // 0x316b94: 0x3402ffdf  ori         $v0, $zero, 0xFFDF
    ctx->pc = 0x316b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65503);
    // 0x316b98: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x316b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x316b9c: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x316b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x316ba0: 0x217f8  dsll        $v0, $v0, 31
    ctx->pc = 0x316ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x316ba4: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x316ba4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x316ba8: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x316BA8u;
    {
        const bool branch_taken_0x316ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316BA8u;
        // 0x316bac: 0x2338825  or          $s1, $s1, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316ba8) {
            ctx->pc = 0x316D24u;
            goto label_316d24;
        }
    }
    ctx->pc = 0x316BB0u;
label_316bb0:
    // 0x316bb0: 0x2338824  and         $s1, $s1, $s3
    ctx->pc = 0x316bb0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 19));
    // 0x316bb4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x316bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x316bb8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x316bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x316bbc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x316BBCu;
    {
        const bool branch_taken_0x316bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316BBCu;
        // 0x316bc0: 0x2228825  or          $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316bbc) {
            ctx->pc = 0x316C48u;
            goto label_316c48;
        }
    }
    ctx->pc = 0x316BC4u;
label_316bc4:
    // 0x316bc4: 0x3c020340  lui         $v0, 0x340
    ctx->pc = 0x316bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)832 << 16));
    // 0x316bc8: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x316bc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x316bcc: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x316BCCu;
    {
        const bool branch_taken_0x316bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x316bcc) {
            ctx->pc = 0x316C24u;
            goto label_316c24;
        }
    }
    ctx->pc = 0x316BD4u;
    // 0x316bd4: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x316bd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x316bd8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x316bd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x316bdc: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x316BDCu;
    SET_GPR_U32(ctx, 31, 0x316BE4u);
    ctx->pc = 0x316BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316BDCu;
    // 0x316be0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x316BDCu, 0x316BE4u)) {
        return;
    }
    ctx->pc = 0x316BE4u;
label_316be4:
    // 0x316be4: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x316BE4u;
    {
        const bool branch_taken_0x316be4 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x316be4) {
            ctx->pc = 0x316C24u;
            goto label_316c24;
        }
    }
    ctx->pc = 0x316BECu;
    // 0x316bec: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x316becu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x316bf0: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x316bf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x316bf4: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x316BF4u;
    SET_GPR_U32(ctx, 31, 0x316BFCu);
    ctx->pc = 0x316BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316BF4u;
    // 0x316bf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x316BF4u, 0x316BFCu)) {
        return;
    }
    ctx->pc = 0x316BFCu;
label_316bfc:
    // 0x316bfc: 0xc07df3e  jal         func_1F7CF8
    ctx->pc = 0x316BFCu;
    SET_GPR_U32(ctx, 31, 0x316C04u);
    ctx->pc = 0x316C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316BFCu;
    // 0x316c00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7CF8u, 0x316BFCu, 0x316C04u)) {
        return;
    }
    ctx->pc = 0x316C04u;
label_316c04:
    // 0x316c04: 0xc07df10  jal         func_1F7C40
    ctx->pc = 0x316C04u;
    SET_GPR_U32(ctx, 31, 0x316C0Cu);
    ctx->pc = 0x316C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316C04u;
    // 0x316c08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7C40u, 0x316C04u, 0x316C0Cu)) {
        return;
    }
    ctx->pc = 0x316C0Cu;
label_316c0c:
    // 0x316c0c: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x316C0Cu;
    {
        const bool branch_taken_0x316c0c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x316C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316C0Cu;
        // 0x316c10: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316c0c) {
            ctx->pc = 0x316C24u;
            goto label_316c24;
        }
    }
    ctx->pc = 0x316C14u;
    // 0x316c14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x316c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316c18: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x316C18u;
    SET_GPR_U32(ctx, 31, 0x316C20u);
    ctx->pc = 0x316C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316C18u;
    // 0x316c1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x316C18u, 0x316C20u)) {
        return;
    }
    ctx->pc = 0x316C20u;
label_316c20:
    // 0x316c20: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x316c20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_316c24:
    // 0x316c24: 0xc0c823a  jal         func_3208E8
    ctx->pc = 0x316C24u;
    SET_GPR_U32(ctx, 31, 0x316C2Cu);
    ctx->pc = 0x316C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316C24u;
    // 0x316c28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3208E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3208E8u, 0x316C24u, 0x316C2Cu)) {
        return;
    }
    ctx->pc = 0x316C2Cu;
label_316c2c:
    // 0x316c2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x316c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316c30: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x316C30u;
    SET_GPR_U32(ctx, 31, 0x316C38u);
    ctx->pc = 0x316C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316C30u;
    // 0x316c34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x316C30u, 0x316C38u)) {
        return;
    }
    ctx->pc = 0x316C38u;
label_316c38:
    // 0x316c38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x316c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316c3c: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x316C3Cu;
    SET_GPR_U32(ctx, 31, 0x316C44u);
    ctx->pc = 0x316C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316C3Cu;
    // 0x316c40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x316C3Cu, 0x316C44u)) {
        return;
    }
    ctx->pc = 0x316C44u;
label_316c44:
    // 0x316c44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x316c44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_316c48:
    // 0x316c48: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x316c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x316c4c: 0x11203f  dsra32      $a0, $s1, 0
    ctx->pc = 0x316c4cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x316c50: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x316c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x316c54: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x316c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x316c58: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x316c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x316c5c: 0x839024  and         $s2, $a0, $v1
    ctx->pc = 0x316c5cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x316c60: 0x14520031  bne         $v0, $s2, . + 4 + (0x31 << 2)
    ctx->pc = 0x316C60u;
    {
        const bool branch_taken_0x316c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x316C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316C60u;
        // 0x316c64: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316c60) {
            ctx->pc = 0x316D28u;
            goto label_316d28;
        }
    }
    ctx->pc = 0x316C68u;
    // 0x316c68: 0xc0ca474  jal         func_3291D0
    ctx->pc = 0x316C68u;
    SET_GPR_U32(ctx, 31, 0x316C70u);
    ctx->pc = 0x316C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316C68u;
    // 0x316c6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3291D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3291D0u, 0x316C68u, 0x316C70u)) {
        return;
    }
    ctx->pc = 0x316C70u;
label_316c70:
    // 0x316c70: 0xc07daaa  jal         func_1F6AA8
    ctx->pc = 0x316C70u;
    SET_GPR_U32(ctx, 31, 0x316C78u);
    ctx->pc = 0x316C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316C70u;
    // 0x316c74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6AA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6AA8u, 0x316C70u, 0x316C78u)) {
        return;
    }
    ctx->pc = 0x316C78u;
label_316c78:
    // 0x316c78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x316c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316c7c: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x316C7Cu;
    SET_GPR_U32(ctx, 31, 0x316C84u);
    ctx->pc = 0x316C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316C7Cu;
    // 0x316c80: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x316C7Cu, 0x316C84u)) {
        return;
    }
    ctx->pc = 0x316C84u;
label_316c84:
    // 0x316c84: 0x16800006  bnez        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x316C84u;
    {
        const bool branch_taken_0x316c84 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x316C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316C84u;
        // 0x316c88: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316c84) {
            ctx->pc = 0x316CA0u;
            goto label_316ca0;
        }
    }
    ctx->pc = 0x316C8Cu;
    // 0x316c8c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x316c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x316c90: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x316c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x316c94: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x316c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x316c98: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x316C98u;
    {
        const bool branch_taken_0x316c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x316c98) {
            ctx->pc = 0x316CF8u;
            goto label_316cf8;
        }
    }
    ctx->pc = 0x316CA0u;
label_316ca0:
    // 0x316ca0: 0x3405ff7f  ori         $a1, $zero, 0xFF7F
    ctx->pc = 0x316ca0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65407);
    // 0x316ca4: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x316ca4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x316ca8: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x316ca8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    // 0x316cac: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x316cacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x316cb0: 0x34a5a501  ori         $a1, $a1, 0xA501
    ctx->pc = 0x316cb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)42241);
    // 0x316cb4: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x316cb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x316cb8: 0x34a51595  ori         $a1, $a1, 0x1595
    ctx->pc = 0x316cb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5525);
    // 0x316cbc: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x316CBCu;
    SET_GPR_U32(ctx, 31, 0x316CC4u);
    ctx->pc = 0x316CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316CBCu;
    // 0x316cc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x316CBCu, 0x316CC4u)) {
        return;
    }
    ctx->pc = 0x316CC4u;
label_316cc4:
    // 0x316cc4: 0x4400099  bltz        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x316CC4u;
    {
        const bool branch_taken_0x316cc4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x316CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316CC4u;
        // 0x316cc8: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316cc4) {
            ctx->pc = 0x316F2Cu;
            goto label_316f2c;
        }
    }
    ctx->pc = 0x316CCCu;
    // 0x316ccc: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x316cccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x316cd0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x316cd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x316cd4: 0x34a5d6bf  ori         $a1, $a1, 0xD6BF
    ctx->pc = 0x316cd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54975);
    // 0x316cd8: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x316cd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x316cdc: 0x34a52535  ori         $a1, $a1, 0x2535
    ctx->pc = 0x316cdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)9525);
    // 0x316ce0: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x316CE0u;
    SET_GPR_U32(ctx, 31, 0x316CE8u);
    ctx->pc = 0x316CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316CE0u;
    // 0x316ce4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x316CE0u, 0x316CE8u)) {
        return;
    }
    ctx->pc = 0x316CE8u;
label_316ce8:
    // 0x316ce8: 0x1c40008f  bgtz        $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x316CE8u;
    {
        const bool branch_taken_0x316ce8 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x316CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316CE8u;
        // 0x316cec: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316ce8) {
            ctx->pc = 0x316F28u;
            goto label_316f28;
        }
    }
    ctx->pc = 0x316CF0u;
    // 0x316cf0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x316CF0u;
    {
        const bool branch_taken_0x316cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x316cf0) {
            ctx->pc = 0x316D28u;
            goto label_316d28;
        }
    }
    ctx->pc = 0x316CF8u;
label_316cf8:
    // 0x316cf8: 0x3405ff3f  ori         $a1, $zero, 0xFF3F
    ctx->pc = 0x316cf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65343);
    // 0x316cfc: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x316cfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x316d00: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x316d00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    // 0x316d04: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x316d04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x316d08: 0x34a5a501  ori         $a1, $a1, 0xA501
    ctx->pc = 0x316d08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)42241);
    // 0x316d0c: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x316d0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x316d10: 0x34a51595  ori         $a1, $a1, 0x1595
    ctx->pc = 0x316d10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5525);
    // 0x316d14: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x316D14u;
    SET_GPR_U32(ctx, 31, 0x316D1Cu);
    ctx->pc = 0x316D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316D14u;
    // 0x316d18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x316D14u, 0x316D1Cu)) {
        return;
    }
    ctx->pc = 0x316D1Cu;
label_316d1c:
    // 0x316d1c: 0x4420083  bltzl       $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x316D1Cu;
    {
        const bool branch_taken_0x316d1c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x316d1c) {
            ctx->pc = 0x316D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x316D1Cu;
            // 0x316d20: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x316F2Cu;
            goto label_316f2c;
        }
    }
    ctx->pc = 0x316D24u;
label_316d24:
    // 0x316d24: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x316d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_316d28:
    // 0x316d28: 0xc0c7fa6  jal         func_31FE98
    ctx->pc = 0x316D28u;
    SET_GPR_U32(ctx, 31, 0x316D30u);
    ctx->pc = 0x316D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316D28u;
    // 0x316d2c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FE98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31FE98u, 0x316D28u, 0x316D30u)) {
        return;
    }
    ctx->pc = 0x316D30u;
label_316d30:
    // 0x316d30: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x316d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x316d34: 0xc0c7fa6  jal         func_31FE98
    ctx->pc = 0x316D34u;
    SET_GPR_U32(ctx, 31, 0x316D3Cu);
    ctx->pc = 0x316D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316D34u;
    // 0x316d38: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FE98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31FE98u, 0x316D34u, 0x316D3Cu)) {
        return;
    }
    ctx->pc = 0x316D3Cu;
label_316d3c:
    // 0x316d3c: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x316d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x316d40: 0xc0c7fa6  jal         func_31FE98
    ctx->pc = 0x316D40u;
    SET_GPR_U32(ctx, 31, 0x316D48u);
    ctx->pc = 0x316D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316D40u;
    // 0x316d44: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FE98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31FE98u, 0x316D40u, 0x316D48u)) {
        return;
    }
    ctx->pc = 0x316D48u;
label_316d48:
    // 0x316d48: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x316d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x316d4c: 0xc0c7fa6  jal         func_31FE98
    ctx->pc = 0x316D4Cu;
    SET_GPR_U32(ctx, 31, 0x316D54u);
    ctx->pc = 0x316D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316D4Cu;
    // 0x316d50: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FE98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31FE98u, 0x316D4Cu, 0x316D54u)) {
        return;
    }
    ctx->pc = 0x316D54u;
label_316d54:
    // 0x316d54: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x316d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316d58: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x316d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x316d5c: 0xc0c7f7c  jal         func_31FDF0
    ctx->pc = 0x316D5Cu;
    SET_GPR_U32(ctx, 31, 0x316D64u);
    ctx->pc = 0x316D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316D5Cu;
    // 0x316d60: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FDF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31FDF0u, 0x316D5Cu, 0x316D64u)) {
        return;
    }
    ctx->pc = 0x316D64u;
label_316d64:
    // 0x316d64: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x316d64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316d68: 0x8ce60010  lw          $a2, 0x10($a3)
    ctx->pc = 0x316d68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x316d6c: 0x24e5000c  addiu       $a1, $a3, 0xC
    ctx->pc = 0x316d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x316d70: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x316d70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x316d74: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x316d74u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x316d78: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x316d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x316d7c: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x316D7Cu;
    SET_GPR_U32(ctx, 31, 0x316D84u);
    ctx->pc = 0x316D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316D7Cu;
    // 0x316d80: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x316D7Cu, 0x316D84u)) {
        return;
    }
    ctx->pc = 0x316D84u;
label_316d84:
    // 0x316d84: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x316d84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x316d88: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x316d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316d8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x316d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316d90: 0xc0c82d2  jal         func_320B48
    ctx->pc = 0x316D90u;
    SET_GPR_U32(ctx, 31, 0x316D98u);
    ctx->pc = 0x316D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316D90u;
    // 0x316d94: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320B48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320B48u, 0x316D90u, 0x316D98u)) {
        return;
    }
    ctx->pc = 0x316D98u;
label_316d98:
    // 0x316d98: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x316d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x316d9c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x316d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316da0: 0xc0c8096  jal         func_320258
    ctx->pc = 0x316DA0u;
    SET_GPR_U32(ctx, 31, 0x316DA8u);
    ctx->pc = 0x316DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316DA0u;
    // 0x316da4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320258u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320258u, 0x316DA0u, 0x316DA8u)) {
        return;
    }
    ctx->pc = 0x316DA8u;
label_316da8:
    // 0x316da8: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x316da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x316dac: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x316dacu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x316db0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x316DB0u;
    {
        const bool branch_taken_0x316db0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x316DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316DB0u;
        // 0x316db4: 0x8fb00044  lw          $s0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316db0) {
            ctx->pc = 0x316DC8u;
            goto label_316dc8;
        }
    }
    ctx->pc = 0x316DB8u;
    // 0x316db8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x316db8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316dbc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x316dbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316dc0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x316DC0u;
    {
        const bool branch_taken_0x316dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316DC0u;
        // 0x316dc4: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316dc0) {
            ctx->pc = 0x316DDCu;
            goto label_316ddc;
        }
    }
    ctx->pc = 0x316DC8u;
label_316dc8:
    // 0x316dc8: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x316dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x316dcc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x316dccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316dd0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x316dd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316dd4: 0x39023  negu        $s2, $v1
    ctx->pc = 0x316dd4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x316dd8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x316dd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_316ddc:
    // 0x316ddc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x316ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316de0: 0x4820002  bltzl       $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x316DE0u;
    {
        const bool branch_taken_0x316de0 = (GPR_S64(ctx, 4) < 0);
        if (branch_taken_0x316de0) {
            ctx->pc = 0x316DE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x316DE0u;
            // 0x316de4: 0x2048023  subu        $s0, $s0, $a0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x316DECu;
            goto label_316dec;
        }
    }
    ctx->pc = 0x316DE8u;
    // 0x316de8: 0x2449021  addu        $s2, $s2, $a0
    ctx->pc = 0x316de8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_316dec:
    // 0x316dec: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x316decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x316df0: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x316df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x316df4: 0x2447ffff  addiu       $a3, $v0, -0x1
    ctx->pc = 0x316df4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x316df8: 0x28e3fc02  slti        $v1, $a3, -0x3FE
    ctx->pc = 0x316df8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x316dfc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x316DFCu;
    {
        const bool branch_taken_0x316dfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x316E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316DFCu;
        // 0x316e00: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316dfc) {
            ctx->pc = 0x316E0Cu;
            goto label_316e0c;
        }
    }
    ctx->pc = 0x316E04u;
    // 0x316e04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x316E04u;
    {
        const bool branch_taken_0x316e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316E04u;
        // 0x316e08: 0x24930433  addiu       $s3, $a0, 0x433 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1075));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316e04) {
            ctx->pc = 0x316E14u;
            goto label_316e14;
        }
    }
    ctx->pc = 0x316E0Cu;
label_316e0c:
    // 0x316e0c: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x316e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x316e10: 0x459823  subu        $s3, $v0, $a1
    ctx->pc = 0x316e10u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_316e14:
    // 0x316e14: 0x2133821  addu        $a3, $s0, $s3
    ctx->pc = 0x316e14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x316e18: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x316e18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x316e1c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x316e1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316e20: 0x247102a  slt         $v0, $s2, $a3
    ctx->pc = 0x316e20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x316e24: 0x242380b  movn        $a3, $s2, $v0
    ctx->pc = 0x316e24u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18));
    // 0x316e28: 0x287182a  slt         $v1, $s4, $a3
    ctx->pc = 0x316e28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x316e2c: 0x283380b  movn        $a3, $s4, $v1
    ctx->pc = 0x316e2cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 20));
    // 0x316e30: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x316E30u;
    {
        const bool branch_taken_0x316e30 = (GPR_S64(ctx, 7) <= 0);
        if (branch_taken_0x316e30) {
            ctx->pc = 0x316E44u;
            goto label_316e44;
        }
    }
    ctx->pc = 0x316E38u;
    // 0x316e38: 0x287a023  subu        $s4, $s4, $a3
    ctx->pc = 0x316e38u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x316e3c: 0x2479023  subu        $s2, $s2, $a3
    ctx->pc = 0x316e3cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x316e40: 0x2078023  subu        $s0, $s0, $a3
    ctx->pc = 0x316e40u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_316e44:
    // 0x316e44: 0x18c0000c  blez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x316E44u;
    {
        const bool branch_taken_0x316e44 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x316E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316E44u;
        // 0x316e48: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316e44) {
            ctx->pc = 0x316E78u;
            goto label_316e78;
        }
    }
    ctx->pc = 0x316E4Cu;
    // 0x316e4c: 0xc0c8126  jal         func_320498
    ctx->pc = 0x316E4Cu;
    SET_GPR_U32(ctx, 31, 0x316E54u);
    ctx->pc = 0x316E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316E4Cu;
    // 0x316e50: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320498u, 0x316E4Cu, 0x316E54u)) {
        return;
    }
    ctx->pc = 0x316E54u;
label_316e54:
    // 0x316e54: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x316e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x316e58: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x316e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316e5c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x316e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x316e60: 0xc0c80a4  jal         func_320290
    ctx->pc = 0x316E60u;
    SET_GPR_U32(ctx, 31, 0x316E68u);
    ctx->pc = 0x316E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316E60u;
    // 0x316e64: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320290u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320290u, 0x316E60u, 0x316E68u)) {
        return;
    }
    ctx->pc = 0x316E68u;
label_316e68:
    // 0x316e68: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x316e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x316e6c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x316e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316e70: 0xc0c7fa6  jal         func_31FE98
    ctx->pc = 0x316E70u;
    SET_GPR_U32(ctx, 31, 0x316E78u);
    ctx->pc = 0x316E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316E70u;
    // 0x316e74: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FE98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31FE98u, 0x316E70u, 0x316E78u)) {
        return;
    }
    ctx->pc = 0x316E78u;
label_316e78:
    // 0x316e78: 0x1a400005  blez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x316E78u;
    {
        const bool branch_taken_0x316e78 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x316E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316E78u;
        // 0x316e7c: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316e78) {
            ctx->pc = 0x316E90u;
            goto label_316e90;
        }
    }
    ctx->pc = 0x316E80u;
    // 0x316e80: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x316e80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316e84: 0xc0c8166  jal         func_320598
    ctx->pc = 0x316E84u;
    SET_GPR_U32(ctx, 31, 0x316E8Cu);
    ctx->pc = 0x316E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316E84u;
    // 0x316e88: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320598u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320598u, 0x316E84u, 0x316E8Cu)) {
        return;
    }
    ctx->pc = 0x316E8Cu;
label_316e8c:
    // 0x316e8c: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x316e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_316e90:
    // 0x316e90: 0x1ac00005  blez        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x316E90u;
    {
        const bool branch_taken_0x316e90 = (GPR_S64(ctx, 22) <= 0);
        ctx->pc = 0x316E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316E90u;
        // 0x316e94: 0x8fa50034  lw          $a1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316e90) {
            ctx->pc = 0x316EA8u;
            goto label_316ea8;
        }
    }
    ctx->pc = 0x316E98u;
    // 0x316e98: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x316e98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316e9c: 0xc0c8126  jal         func_320498
    ctx->pc = 0x316E9Cu;
    SET_GPR_U32(ctx, 31, 0x316EA4u);
    ctx->pc = 0x316EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316E9Cu;
    // 0x316ea0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320498u, 0x316E9Cu, 0x316EA4u)) {
        return;
    }
    ctx->pc = 0x316EA4u;
label_316ea4:
    // 0x316ea4: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x316ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_316ea8:
    // 0x316ea8: 0x1a000005  blez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x316EA8u;
    {
        const bool branch_taken_0x316ea8 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x316EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316EA8u;
        // 0x316eac: 0x8fa50034  lw          $a1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316ea8) {
            ctx->pc = 0x316EC0u;
            goto label_316ec0;
        }
    }
    ctx->pc = 0x316EB0u;
    // 0x316eb0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x316eb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316eb4: 0xc0c8166  jal         func_320598
    ctx->pc = 0x316EB4u;
    SET_GPR_U32(ctx, 31, 0x316EBCu);
    ctx->pc = 0x316EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316EB4u;
    // 0x316eb8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320598u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320598u, 0x316EB4u, 0x316EBCu)) {
        return;
    }
    ctx->pc = 0x316EBCu;
label_316ebc:
    // 0x316ebc: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x316ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_316ec0:
    // 0x316ec0: 0x1a800005  blez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x316EC0u;
    {
        const bool branch_taken_0x316ec0 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x316EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316EC0u;
        // 0x316ec4: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316ec0) {
            ctx->pc = 0x316ED8u;
            goto label_316ed8;
        }
    }
    ctx->pc = 0x316EC8u;
    // 0x316ec8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x316ec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316ecc: 0xc0c8166  jal         func_320598
    ctx->pc = 0x316ECCu;
    SET_GPR_U32(ctx, 31, 0x316ED4u);
    ctx->pc = 0x316ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316ECCu;
    // 0x316ed0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320598u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320598u, 0x316ECCu, 0x316ED4u)) {
        return;
    }
    ctx->pc = 0x316ED4u;
label_316ed4:
    // 0x316ed4: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x316ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_316ed8:
    // 0x316ed8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x316ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x316edc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x316edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316ee0: 0xc0c81d6  jal         func_320758
    ctx->pc = 0x316EE0u;
    SET_GPR_U32(ctx, 31, 0x316EE8u);
    ctx->pc = 0x316EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316EE0u;
    // 0x316ee4: 0x8fa60034  lw          $a2, 0x34($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320758u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320758u, 0x316EE0u, 0x316EE8u)) {
        return;
    }
    ctx->pc = 0x316EE8u;
label_316ee8:
    // 0x316ee8: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x316ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x316eec: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x316eecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x316ef0: 0x8c54000c  lw          $s4, 0xC($v0)
    ctx->pc = 0x316ef0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x316ef4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x316ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316ef8: 0xc0c81bc  jal         func_3206F0
    ctx->pc = 0x316EF8u;
    SET_GPR_U32(ctx, 31, 0x316F00u);
    ctx->pc = 0x316EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316EF8u;
    // 0x316efc: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3206F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3206F0u, 0x316EF8u, 0x316F00u)) {
        return;
    }
    ctx->pc = 0x316F00u;
label_316f00:
    // 0x316f00: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x316f00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316f04: 0x4e1fe83  bgez        $a3, . + 4 + (-0x17D << 2)
    ctx->pc = 0x316F04u;
    {
        const bool branch_taken_0x316f04 = (GPR_S64(ctx, 7) >= 0);
        if (branch_taken_0x316f04) {
            ctx->pc = 0x316914u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_316914;
        }
    }
    ctx->pc = 0x316F0Cu;
    // 0x316f0c: 0x16800007  bnez        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x316F0Cu;
    {
        const bool branch_taken_0x316f0c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x316F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316F0Cu;
        // 0x316f10: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316f0c) {
            ctx->pc = 0x316F2Cu;
            goto label_316f2c;
        }
    }
    ctx->pc = 0x316F14u;
    // 0x316f14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x316f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x316f18: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x316f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x316f1c: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x316f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x316f20: 0x1040fe71  beqz        $v0, . + 4 + (-0x18F << 2)
    ctx->pc = 0x316F20u;
    {
        const bool branch_taken_0x316f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x316F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316F20u;
        // 0x316f24: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316f20) {
            ctx->pc = 0x3168E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3168e8;
        }
    }
    ctx->pc = 0x316F28u;
label_316f28:
    // 0x316f28: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x316f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_316f2c:
    // 0x316f2c: 0xc0c7fa6  jal         func_31FE98
    ctx->pc = 0x316F2Cu;
    SET_GPR_U32(ctx, 31, 0x316F34u);
    ctx->pc = 0x316F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316F2Cu;
    // 0x316f30: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FE98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31FE98u, 0x316F2Cu, 0x316F34u)) {
        return;
    }
    ctx->pc = 0x316F34u;
label_316f34:
    // 0x316f34: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x316f34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x316f38: 0xc0c7fa6  jal         func_31FE98
    ctx->pc = 0x316F38u;
    SET_GPR_U32(ctx, 31, 0x316F40u);
    ctx->pc = 0x316F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316F38u;
    // 0x316f3c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FE98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31FE98u, 0x316F38u, 0x316F40u)) {
        return;
    }
    ctx->pc = 0x316F40u;
label_316f40:
    // 0x316f40: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x316f40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x316f44: 0xc0c7fa6  jal         func_31FE98
    ctx->pc = 0x316F44u;
    SET_GPR_U32(ctx, 31, 0x316F4Cu);
    ctx->pc = 0x316F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316F44u;
    // 0x316f48: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FE98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31FE98u, 0x316F44u, 0x316F4Cu)) {
        return;
    }
    ctx->pc = 0x316F4Cu;
label_316f4c:
    // 0x316f4c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x316f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316f50: 0xc0c7fa6  jal         func_31FE98
    ctx->pc = 0x316F50u;
    SET_GPR_U32(ctx, 31, 0x316F58u);
    ctx->pc = 0x316F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316F50u;
    // 0x316f54: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FE98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31FE98u, 0x316F50u, 0x316F58u)) {
        return;
    }
    ctx->pc = 0x316F58u;
label_316f58:
    // 0x316f58: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x316f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x316f5c: 0xc0c7fa6  jal         func_31FE98
    ctx->pc = 0x316F5Cu;
    SET_GPR_U32(ctx, 31, 0x316F64u);
    ctx->pc = 0x316F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316F5Cu;
    // 0x316f60: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FE98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31FE98u, 0x316F5Cu, 0x316F64u)) {
        return;
    }
    ctx->pc = 0x316F64u;
label_316f64:
    // 0x316f64: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x316f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_316f68:
    // 0x316f68: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x316F68u;
    {
        const bool branch_taken_0x316f68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x316f68) {
            ctx->pc = 0x316F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x316F68u;
            // 0x316f6c: 0xac950000  sw          $s5, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x316F70u;
            goto label_316f70;
        }
    }
    ctx->pc = 0x316F70u;
label_316f70:
    // 0x316f70: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x316f70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x316f74: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x316F74u;
    {
        const bool branch_taken_0x316f74 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x316F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316F74u;
        // 0x316f78: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316f74) {
            ctx->pc = 0x316F88u;
            goto label_316f88;
        }
    }
    ctx->pc = 0x316F7Cu;
    // 0x316f7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x316f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316f80: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x316F80u;
    SET_GPR_U32(ctx, 31, 0x316F88u);
    ctx->pc = 0x316F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316F80u;
    // 0x316f84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x316F80u, 0x316F88u)) {
        return;
    }
    ctx->pc = 0x316F88u;
label_316f88:
    // 0x316f88: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x316f88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x316f8c: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x316f8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x316f90: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x316f90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x316f94: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x316f94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x316f98: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x316f98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x316f9c: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x316f9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x316fa0: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x316fa0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x316fa4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x316fa4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x316fa8: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x316fa8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x316fac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x316facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x316fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x316FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316FB0u;
        // 0x316fb4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316FB8u;
}
