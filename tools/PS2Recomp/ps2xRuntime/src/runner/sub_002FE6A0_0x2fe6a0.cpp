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

// Function: sub_002FE6A0
// Address: 0x2fe6a0 - 0x2fe8f0
void sub_002FE6A0_0x2fe6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE6A0_0x2fe6a0");
#endif

    switch (ctx->pc) {
        case 0x2fe720u: goto label_2fe720;
        case 0x2fe774u: goto label_2fe774;
        case 0x2fe78cu: goto label_2fe78c;
        case 0x2fe7a8u: goto label_2fe7a8;
        case 0x2fe7ccu: goto label_2fe7cc;
        default: break;
    }

    ctx->pc = 0x2fe6a0u;

    // 0x2fe6a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2fe6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2fe6a4: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2fe6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2fe6a8: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2fe6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2fe6ac: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2fe6acu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe6b0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2fe6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2fe6b4: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2fe6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2fe6b8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2fe6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2fe6bc: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2fe6bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe6c0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2fe6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2fe6c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fe6c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe6c8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2fe6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2fe6cc: 0x32a30001  andi        $v1, $s5, 0x1
    ctx->pc = 0x2fe6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x2fe6d0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2fe6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2fe6d4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2fe6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2fe6d8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2fe6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2fe6dc: 0x8e02013c  lw          $v0, 0x13C($s0)
    ctx->pc = 0x2fe6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x2fe6e0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2fe6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2fe6e4: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x2fe6e4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2fe6e8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FE6E8u;
    {
        const bool branch_taken_0x2fe6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe6e8) {
            ctx->pc = 0x2FE6ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FE6E8u;
            // 0x2fe6ec: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FE6F0u;
            goto label_2fe6f0;
        }
    }
    ctx->pc = 0x2FE6F0u;
label_2fe6f0:
    // 0x2fe6f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2fe6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe6f4: 0x1810  mfhi        $v1
    ctx->pc = 0x2fe6f4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2fe6f8: 0xb812  mflo        $s7
    ctx->pc = 0x2fe6f8u;
    SET_GPR_U64(ctx, 23, ctx->lo);
    // 0x2fe6fc: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x2fe6fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe700: 0x173100  sll         $a2, $s7, 4
    ctx->pc = 0x2fe700u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x2fe704: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2FE704u;
    {
        const bool branch_taken_0x2fe704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE704u;
        // 0x2fe708: 0x162900  sll         $a1, $s6, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe704) {
            ctx->pc = 0x2FE750u;
            goto label_2fe750;
        }
    }
    ctx->pc = 0x2FE70Cu;
    // 0x2fe70c: 0x8e040820  lw          $a0, 0x820($s0)
    ctx->pc = 0x2fe70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x2fe710: 0x261106d8  addiu       $s1, $s0, 0x6D8
    ctx->pc = 0x2fe710u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1752));
    // 0x2fe714: 0x261206d4  addiu       $s2, $s0, 0x6D4
    ctx->pc = 0x2fe714u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1748));
    // 0x2fe718: 0x261306d0  addiu       $s3, $s0, 0x6D0
    ctx->pc = 0x2fe718u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1744));
    // 0x2fe71c: 0x261406c8  addiu       $s4, $s0, 0x6C8
    ctx->pc = 0x2fe71cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1736));
label_2fe720:
    // 0x2fe720: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2fe720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2fe724: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x2fe724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x2fe728: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2fe728u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D400u)); // MMIO: 0x1000d400
    // 0x2fe72c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2fe72cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2fe730: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2fe730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2fe734: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2FE734u;
    {
        const bool branch_taken_0x2fe734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fe734) {
            ctx->pc = 0x2FE720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fe720;
        }
    }
    ctx->pc = 0x2FE73Cu;
    // 0x2fe73c: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x2fe73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x2fe740: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x2fe740u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2fe744: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x2fe744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2fe748: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2FE748u;
    {
        const bool branch_taken_0x2fe748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE748u;
        // 0x2fe74c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe748) {
            ctx->pc = 0x2FE7E4u;
            goto label_2fe7e4;
        }
    }
    ctx->pc = 0x2FE750u;
label_2fe750:
    // 0x2fe750: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x2fe750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2fe754: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2fe754u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2fe758: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2FE758u;
    {
        const bool branch_taken_0x2fe758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FE75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE758u;
        // 0x2fe75c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe758) {
            ctx->pc = 0x2FE784u;
            goto label_2fe784;
        }
    }
    ctx->pc = 0x2FE760u;
    // 0x2fe760: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2fe760u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2fe764: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x2fe764u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe768: 0x24a50810  addiu       $a1, $a1, 0x810
    ctx->pc = 0x2fe768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2064));
    // 0x2fe76c: 0xc0bf772  jal         func_2FDDC8
    ctx->pc = 0x2FE76Cu;
    SET_GPR_U32(ctx, 31, 0x2FE774u);
    ctx->pc = 0x2FE770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE76Cu;
    // 0x2fe770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FDDC8u, 0x2FE76Cu, 0x2FE774u)) {
        return;
    }
    ctx->pc = 0x2FE774u;
label_2fe774:
    // 0x2fe774: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fe774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fe778: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fe778u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe77c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x2FE77Cu;
    {
        const bool branch_taken_0x2fe77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE77Cu;
        // 0x2fe780: 0xae03012c  sw          $v1, 0x12C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe77c) {
            ctx->pc = 0x2FE8C0u;
            goto label_2fe8c0;
        }
    }
    ctx->pc = 0x2FE784u;
label_2fe784:
    // 0x2fe784: 0xc0bf7e6  jal         func_2FDF98
    ctx->pc = 0x2FE784u;
    SET_GPR_U32(ctx, 31, 0x2FE78Cu);
    ctx->pc = 0x2FE788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE784u;
    // 0x2fe788: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FDF98u, 0x2FE784u, 0x2FE78Cu)) {
        return;
    }
    ctx->pc = 0x2FE78Cu;
label_2fe78c:
    // 0x2fe78c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2fe78cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2fe790: 0x261106d8  addiu       $s1, $s0, 0x6D8
    ctx->pc = 0x2fe790u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1752));
    // 0x2fe794: 0x261206d4  addiu       $s2, $s0, 0x6D4
    ctx->pc = 0x2fe794u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1748));
    // 0x2fe798: 0x261306d0  addiu       $s3, $s0, 0x6D0
    ctx->pc = 0x2fe798u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1744));
    // 0x2fe79c: 0x261406c8  addiu       $s4, $s0, 0x6C8
    ctx->pc = 0x2fe79cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1736));
    // 0x2fe7a0: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x2fe7a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x2fe7a4: 0x0  nop
    ctx->pc = 0x2fe7a4u;
    // NOP
label_2fe7a8:
    // 0x2fe7a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fe7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x2fe7ac: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2fe7acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2fe7b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2fe7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2fe7b4: 0x0  nop
    ctx->pc = 0x2fe7b4u;
    // NOP
    // 0x2fe7b8: 0x0  nop
    ctx->pc = 0x2fe7b8u;
    // NOP
    // 0x2fe7bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2FE7BCu;
    {
        const bool branch_taken_0x2fe7bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fe7bc) {
            ctx->pc = 0x2FE7A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fe7a8;
        }
    }
    ctx->pc = 0x2FE7C4u;
    // 0x2fe7c4: 0xc0c0252  jal         func_300948
    ctx->pc = 0x2FE7C4u;
    SET_GPR_U32(ctx, 31, 0x2FE7CCu);
    ctx->pc = 0x2FE7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE7C4u;
    // 0x2fe7c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300948u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300948u, 0x2FE7C4u, 0x2FE7CCu)) {
        return;
    }
    ctx->pc = 0x2FE7CCu;
label_2fe7cc:
    // 0x2fe7cc: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x2fe7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x2fe7d0: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x2fe7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x2fe7d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2fe7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fe7d8: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x2fe7d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2fe7dc: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x2fe7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x2fe7e0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2fe7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_2fe7e4:
    // 0x2fe7e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fe7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fe7e8: 0x57c2000a  bnel        $fp, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2FE7E8u;
    {
        const bool branch_taken_0x2fe7e8 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x2fe7e8) {
            ctx->pc = 0x2FE7ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FE7E8u;
            // 0x2fe7ec: 0x8e020820  lw          $v0, 0x820($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FE814u;
            goto label_2fe814;
        }
    }
    ctx->pc = 0x2FE7F0u;
    // 0x2fe7f0: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x2fe7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
    // 0x2fe7f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FE7F4u;
    {
        const bool branch_taken_0x2fe7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE7F4u;
        // 0x2fe7f8: 0x24030140  addiu       $v1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe7f4) {
            ctx->pc = 0x2FE810u;
            goto label_2fe810;
        }
    }
    ctx->pc = 0x2FE7FCu;
    // 0x2fe7fc: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x2fe7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x2fe800: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x2fe800u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2fe804: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x2fe804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x2fe808: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FE808u;
    {
        const bool branch_taken_0x2fe808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE808u;
        // 0x2fe80c: 0xac5e0000  sw          $fp, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe808) {
            ctx->pc = 0x2FE824u;
            goto label_2fe824;
        }
    }
    ctx->pc = 0x2FE810u;
label_2fe810:
    // 0x2fe810: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x2fe810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
label_2fe814:
    // 0x2fe814: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x2fe814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x2fe818: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x2fe818u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2fe81c: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x2fe81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x2fe820: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2fe820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2fe824:
    // 0x2fe824: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x2fe824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x2fe828: 0x24070140  addiu       $a3, $zero, 0x140
    ctx->pc = 0x2fe828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x2fe82c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2fe82cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe830: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2fe830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fe834: 0x472018  mult        $a0, $v0, $a3
    ctx->pc = 0x2fe834u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2fe838: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x2fe838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x2fe83c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2fe83cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2fe840: 0x8e040184  lw          $a0, 0x184($s0)
    ctx->pc = 0x2fe840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x2fe844: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2FE844u;
    {
        const bool branch_taken_0x2fe844 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2FE848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE844u;
        // 0x2fe848: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe844) {
            ctx->pc = 0x2FE880u;
            goto label_2fe880;
        }
    }
    ctx->pc = 0x2FE84Cu;
    // 0x2fe84c: 0x8e040820  lw          $a0, 0x820($s0)
    ctx->pc = 0x2fe84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x2fe850: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x2fe850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x2fe854: 0x8e0501d0  lw          $a1, 0x1D0($s0)
    ctx->pc = 0x2fe854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
    // 0x2fe858: 0x871818  mult        $v1, $a0, $a3
    ctx->pc = 0x2fe858u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2fe85c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x2fe85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2fe860: 0x742021  addu        $a0, $v1, $s4
    ctx->pc = 0x2fe860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2fe864: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2fe864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fe868: 0x2c22818  mult        $a1, $s6, $v0
    ctx->pc = 0x2fe868u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2fe86c: 0xb71021  addu        $v0, $a1, $s7
    ctx->pc = 0x2fe86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x2fe870: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x2fe870u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2fe874: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2fe874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2fe878: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2FE878u;
    {
        const bool branch_taken_0x2fe878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE878u;
        // 0x2fe87c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe878) {
            ctx->pc = 0x2FE8BCu;
            goto label_2fe8bc;
        }
    }
    ctx->pc = 0x2FE880u;
label_2fe880:
    // 0x2fe880: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FE880u;
    {
        const bool branch_taken_0x2fe880 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2fe880) {
            ctx->pc = 0x2FE884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FE880u;
            // 0x2fe884: 0x8e0201e0  lw          $v0, 0x1E0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FE88Cu;
            goto label_2fe88c;
        }
    }
    ctx->pc = 0x2FE888u;
    // 0x2fe888: 0x8e0201f0  lw          $v0, 0x1F0($s0)
    ctx->pc = 0x2fe888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
label_2fe88c:
    // 0x2fe88c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2fe88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2fe890: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x2fe890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x2fe894: 0x8e040820  lw          $a0, 0x820($s0)
    ctx->pc = 0x2fe894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x2fe898: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x2fe898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x2fe89c: 0x2c33818  mult        $a3, $s6, $v1
    ctx->pc = 0x2fe89cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2fe8a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2fe8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fe8a4: 0xf71821  addu        $v1, $a3, $s7
    ctx->pc = 0x2fe8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 23)));
    // 0x2fe8a8: 0x853818  mult        $a3, $a0, $a1
    ctx->pc = 0x2fe8a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2fe8ac: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x2fe8acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2fe8b0: 0xf42021  addu        $a0, $a3, $s4
    ctx->pc = 0x2fe8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x2fe8b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fe8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fe8b8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2fe8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2fe8bc:
    // 0x2fe8bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fe8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fe8c0:
    // 0x2fe8c0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2fe8c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2fe8c4: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2fe8c4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2fe8c8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2fe8c8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2fe8cc: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2fe8ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2fe8d0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2fe8d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2fe8d4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2fe8d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fe8d8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2fe8d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fe8dc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2fe8dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fe8e0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2fe8e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fe8e4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2fe8e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fe8e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE8E8u;
        // 0x2fe8ec: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE8E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE8F0u;
}
