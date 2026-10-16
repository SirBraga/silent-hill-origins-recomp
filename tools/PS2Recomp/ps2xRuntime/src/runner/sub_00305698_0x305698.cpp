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

// Function: sub_00305698
// Address: 0x305698 - 0x305908
void sub_00305698_0x305698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305698_0x305698");
#endif

    switch (ctx->pc) {
        case 0x3056d8u: goto label_3056d8;
        case 0x3056f8u: goto label_3056f8;
        case 0x305724u: goto label_305724;
        case 0x305760u: goto label_305760;
        case 0x3057d0u: goto label_3057d0;
        case 0x3057ecu: goto label_3057ec;
        case 0x305834u: goto label_305834;
        case 0x305850u: goto label_305850;
        case 0x30585cu: goto label_30585c;
        case 0x305874u: goto label_305874;
        default: break;
    }

    ctx->pc = 0x305698u;

    // 0x305698: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x305698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x30569c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x30569cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x3056a0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3056a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x3056a4: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3056a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x3056a8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3056a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x3056ac: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3056acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x3056b0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3056b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x3056b4: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x3056b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x3056b8: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x3056b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x3056bc: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x3056bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x3056c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3056c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3056c4: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x3056c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x3056c8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3056c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3056cc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x3056ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x3056d0: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x3056d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3056d4: 0x0  nop
    ctx->pc = 0x3056d4u;
    // NOP
label_3056d8:
    // 0x3056d8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3056d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3056dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3056dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3056e0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x3056e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x3056e4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3056E4u;
    {
        const bool branch_taken_0x3056e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3056E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3056E4u;
        // 0x3056e8: 0x247e0020  addiu       $fp, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3056e4) {
            ctx->pc = 0x30574Cu;
            goto label_30574c;
        }
    }
    ctx->pc = 0x3056ECu;
    // 0x3056ec: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x3056ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3056f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3056f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3056f4: 0x0  nop
    ctx->pc = 0x3056f4u;
    // NOP
label_3056f8:
    // 0x3056f8: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x3056f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x3056fc: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x3056fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x305700: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x305700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x305704: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x305704u;
    {
        const bool branch_taken_0x305704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x305708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305704u;
        // 0x305708: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305704) {
            ctx->pc = 0x305738u;
            goto label_305738;
        }
    }
    ctx->pc = 0x30570Cu;
    // 0x30570c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x30570cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x305710: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x305710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x305714: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x305714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305718: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x305718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x30571c: 0xc0c13b8  jal         func_304EE0
    ctx->pc = 0x30571Cu;
    SET_GPR_U32(ctx, 31, 0x305724u);
    ctx->pc = 0x305720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30571Cu;
    // 0x305720: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x304EE0u, 0x30571Cu, 0x305724u)) {
        return;
    }
    ctx->pc = 0x305724u;
label_305724:
    // 0x305724: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x305724u;
    {
        const bool branch_taken_0x305724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x305724) {
            ctx->pc = 0x305728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305724u;
            // 0x305728: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30573Cu;
            goto label_30573c;
        }
    }
    ctx->pc = 0x30572Cu;
    // 0x30572c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x30572Cu;
    {
        const bool branch_taken_0x30572c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30572Cu;
        // 0x305730: 0xafb30000  sw          $s3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30572c) {
            ctx->pc = 0x305848u;
            goto label_305848;
        }
    }
    ctx->pc = 0x305734u;
    // 0x305734: 0x0  nop
    ctx->pc = 0x305734u;
    // NOP
label_305738:
    // 0x305738: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x305738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_30573c:
    // 0x30573c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x30573cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x305740: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x305740u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x305744: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x305744u;
    {
        const bool branch_taken_0x305744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305744u;
        // 0x305748: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305744) {
            ctx->pc = 0x3056F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3056f8;
        }
    }
    ctx->pc = 0x30574Cu;
label_30574c:
    // 0x30574c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x30574cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x305750: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x305750u;
    {
        const bool branch_taken_0x305750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305750u;
        // 0x305754: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305750) {
            ctx->pc = 0x3058C0u;
            goto label_3058c0;
        }
    }
    ctx->pc = 0x305758u;
    // 0x305758: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x305758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x30575c: 0x0  nop
    ctx->pc = 0x30575cu;
    // NOP
label_305760:
    // 0x305760: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x305760u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x305764: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x305764u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x305768: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x305768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30576c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x30576cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x305770: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x305770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x305774: 0x1064004d  beq         $v1, $a0, . + 4 + (0x4D << 2)
    ctx->pc = 0x305774u;
    {
        const bool branch_taken_0x305774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x305778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305774u;
        // 0x305778: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305774) {
            ctx->pc = 0x3058ACu;
            goto label_3058ac;
        }
    }
    ctx->pc = 0x30577Cu;
    // 0x30577c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x30577cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x305780: 0x652818  mult        $a1, $v1, $a1
    ctx->pc = 0x305780u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x305784: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x305784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x305788: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x305788u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x30578c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x30578cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x305790: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x305790u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x305794: 0x8c460030  lw          $a2, 0x30($v0)
    ctx->pc = 0x305794u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x305798: 0xe5a821  addu        $s5, $a3, $a1
    ctx->pc = 0x305798u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x30579c: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x30579cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x3057a0: 0xc3b021  addu        $s6, $a2, $v1
    ctx->pc = 0x3057a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3057a4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3057a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3057a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3057a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3057ac: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x3057ACu;
    {
        const bool branch_taken_0x3057ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3057B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3057ACu;
        // 0x3057b0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3057ac) {
            ctx->pc = 0x3058ACu;
            goto label_3058ac;
        }
    }
    ctx->pc = 0x3057B4u;
    // 0x3057b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3057b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3057b8: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x3057b8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x3057bc: 0x2421004  sllv        $v0, $v0, $s2
    ctx->pc = 0x3057bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x3057c0: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x3057c0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x3057c4: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x3057c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x3057c8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3057c8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3057cc: 0x0  nop
    ctx->pc = 0x3057ccu;
    // NOP
label_3057d0:
    // 0x3057d0: 0x8ea2001c  lw          $v0, 0x1C($s5)
    ctx->pc = 0x3057d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x3057d4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3057d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3057d8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3057d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3057dc: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x3057dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3057e0: 0xb78021  addu        $s0, $a1, $s7
    ctx->pc = 0x3057e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x3057e4: 0xc0c1408  jal         func_305020
    ctx->pc = 0x3057E4u;
    SET_GPR_U32(ctx, 31, 0x3057ECu);
    ctx->pc = 0x3057E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3057E4u;
    // 0x3057e8: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305020u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x305020u, 0x3057E4u, 0x3057ECu)) {
        return;
    }
    ctx->pc = 0x3057ECu;
label_3057ec:
    // 0x3057ec: 0x54530003  bnel        $v0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3057ECu;
    {
        const bool branch_taken_0x3057ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x3057ec) {
            ctx->pc = 0x3057F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3057ECu;
            // 0x3057f0: 0x8ec30004  lw          $v1, 0x4($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3057FCu;
            goto label_3057fc;
        }
    }
    ctx->pc = 0x3057F4u;
    // 0x3057f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3057F4u;
    {
        const bool branch_taken_0x3057f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3057F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3057F4u;
        // 0x3057f8: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3057f4) {
            ctx->pc = 0x305808u;
            goto label_305808;
        }
    }
    ctx->pc = 0x3057FCu;
label_3057fc:
    // 0x3057fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3057fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x305800: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x305800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x305804: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x305804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_305808:
    // 0x305808: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x305808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30580c: 0x50430021  beql        $v0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x30580Cu;
    {
        const bool branch_taken_0x30580c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x30580c) {
            ctx->pc = 0x305810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30580Cu;
            // 0x305810: 0x8ea4001c  lw          $a0, 0x1C($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305894u;
            goto label_305894;
        }
    }
    ctx->pc = 0x305814u;
    // 0x305814: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x305814u;
    {
        const bool branch_taken_0x305814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305814u;
        // 0x305818: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305814) {
            ctx->pc = 0x305864u;
            goto label_305864;
        }
    }
    ctx->pc = 0x30581Cu;
    // 0x30581c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x30581cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x305820: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x305820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x305824: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x305824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305828: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x305828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x30582c: 0xc0c13b8  jal         func_304EE0
    ctx->pc = 0x30582Cu;
    SET_GPR_U32(ctx, 31, 0x305834u);
    ctx->pc = 0x305830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30582Cu;
    // 0x305830: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x304EE0u, 0x30582Cu, 0x305834u)) {
        return;
    }
    ctx->pc = 0x305834u;
label_305834:
    // 0x305834: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x305834u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305838: 0x54600012  bnel        $v1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x305838u;
    {
        const bool branch_taken_0x305838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x305838) {
            ctx->pc = 0x30583Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305838u;
            // 0x30583c: 0x8c620018  lw          $v0, 0x18($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305884u;
            goto label_305884;
        }
    }
    ctx->pc = 0x305840u;
    // 0x305840: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x305840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305844: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x305844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_305848:
    // 0x305848: 0xc092848  jal         func_24A120
    ctx->pc = 0x305848u;
    SET_GPR_U32(ctx, 31, 0x305850u);
    ctx->pc = 0x30584Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305848u;
    // 0x30584c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x305848u, 0x305850u)) {
        return;
    }
    ctx->pc = 0x305850u;
label_305850:
    // 0x305850: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x305850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305854: 0xc09281a  jal         func_24A068
    ctx->pc = 0x305854u;
    SET_GPR_U32(ctx, 31, 0x30585Cu);
    ctx->pc = 0x305858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305854u;
    // 0x305858: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x305854u, 0x30585Cu)) {
        return;
    }
    ctx->pc = 0x30585Cu;
label_30585c:
    // 0x30585c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x30585Cu;
    {
        const bool branch_taken_0x30585c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30585Cu;
        // 0x305860: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30585c) {
            ctx->pc = 0x3058D8u;
            goto label_3058d8;
        }
    }
    ctx->pc = 0x305864u;
label_305864:
    // 0x305864: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x305864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x305868: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x305868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30586c: 0xc0c13a8  jal         func_304EA0
    ctx->pc = 0x30586Cu;
    SET_GPR_U32(ctx, 31, 0x305874u);
    ctx->pc = 0x305870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30586Cu;
    // 0x305870: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304EA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x304EA0u, 0x30586Cu, 0x305874u)) {
        return;
    }
    ctx->pc = 0x305874u;
label_305874:
    // 0x305874: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x305874u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305878: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x305878u;
    {
        const bool branch_taken_0x305878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x305878) {
            ctx->pc = 0x30587Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305878u;
            // 0x30587c: 0x8ea4001c  lw          $a0, 0x1C($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305894u;
            goto label_305894;
        }
    }
    ctx->pc = 0x305880u;
    // 0x305880: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x305880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_305884:
    // 0x305884: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x305884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x305888: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x305888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x30588c: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x30588cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x305890: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x305890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_305894:
    // 0x305894: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x305894u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x305898: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x305898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x30589c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x30589cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3058a0: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x3058a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3058a4: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x3058A4u;
    {
        const bool branch_taken_0x3058a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3058A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3058A4u;
        // 0x3058a8: 0x26f70024  addiu       $s7, $s7, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3058a4) {
            ctx->pc = 0x3057D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3057d0;
        }
    }
    ctx->pc = 0x3058ACu;
label_3058ac:
    // 0x3058ac: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3058acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3058b0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3058b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3058b4: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x3058b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3058b8: 0x5440ffa9  bnel        $v0, $zero, . + 4 + (-0x57 << 2)
    ctx->pc = 0x3058B8u;
    {
        const bool branch_taken_0x3058b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3058b8) {
            ctx->pc = 0x3058BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3058B8u;
            // 0x3058bc: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305760;
        }
    }
    ctx->pc = 0x3058C0u;
label_3058c0:
    // 0x3058c0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x3058c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x3058c4: 0x26310028  addiu       $s1, $s1, 0x28
    ctx->pc = 0x3058c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x3058c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3058c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3058cc: 0x1440ff82  bnez        $v0, . + 4 + (-0x7E << 2)
    ctx->pc = 0x3058CCu;
    {
        const bool branch_taken_0x3058cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3058D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3058CCu;
        // 0x3058d0: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3058cc) {
            ctx->pc = 0x3056D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3056d8;
        }
    }
    ctx->pc = 0x3058D4u;
    // 0x3058d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3058d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3058d8:
    // 0x3058d8: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x3058d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3058dc: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x3058dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3058e0: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x3058e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3058e4: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x3058e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3058e8: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x3058e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3058ec: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3058ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3058f0: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x3058f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3058f4: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x3058f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3058f8: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x3058f8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3058fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3058fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x305900: 0x3e00008  jr          $ra
    ctx->pc = 0x305900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305900u;
        // 0x305904: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305908u;
}
