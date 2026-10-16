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

// Function: sub_003019F8
// Address: 0x3019f8 - 0x301d10
void sub_003019F8_0x3019f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003019F8_0x3019f8");
#endif

    switch (ctx->pc) {
        case 0x301ad8u: goto label_301ad8;
        case 0x301aecu: goto label_301aec;
        case 0x301b04u: goto label_301b04;
        case 0x301b1cu: goto label_301b1c;
        default: break;
    }

    ctx->pc = 0x3019f8u;

    // 0x3019f8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3019f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3019fc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3019fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x301a00: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x301a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x301a04: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x301a04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301a08: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x301a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x301a0c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x301a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x301a10: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x301a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x301a14: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x301a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x301a18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x301a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x301a1c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x301a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x301a20: 0x8e720040  lw          $s2, 0x40($s3)
    ctx->pc = 0x301a20u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x301a24: 0x8e450858  lw          $a1, 0x858($s2)
    ctx->pc = 0x301a24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2136)));
    // 0x301a28: 0x54a0000b  bnel        $a1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x301A28u;
    {
        const bool branch_taken_0x301a28 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x301a28) {
            ctx->pc = 0x301A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301A28u;
            // 0x301a2c: 0x8e420134  lw          $v0, 0x134($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 308)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x301A58u;
            goto label_301a58;
        }
    }
    ctx->pc = 0x301A30u;
    // 0x301a30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x301a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301a34: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x301a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x301a38: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x301a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x301a3c: 0xae430184  sw          $v1, 0x184($s2)
    ctx->pc = 0x301a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 388), GPR_U32(ctx, 3));
    // 0x301a40: 0xae42018c  sw          $v0, 0x18C($s2)
    ctx->pc = 0x301a40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 396), GPR_U32(ctx, 2));
    // 0x301a44: 0xae440154  sw          $a0, 0x154($s2)
    ctx->pc = 0x301a44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 4));
    // 0x301a48: 0xae42014c  sw          $v0, 0x14C($s2)
    ctx->pc = 0x301a48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 332), GPR_U32(ctx, 2));
    // 0x301a4c: 0xae420150  sw          $v0, 0x150($s2)
    ctx->pc = 0x301a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 2));
    // 0x301a50: 0xae420198  sw          $v0, 0x198($s2)
    ctx->pc = 0x301a50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 408), GPR_U32(ctx, 2));
    // 0x301a54: 0x8e420134  lw          $v0, 0x134($s2)
    ctx->pc = 0x301a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 308)));
label_301a58:
    // 0x301a58: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x301a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x301a5c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x301a5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x301a60: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x301A60u;
    {
        const bool branch_taken_0x301a60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x301A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301A60u;
        // 0x301a64: 0xae42013c  sw          $v0, 0x13C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301a60) {
            ctx->pc = 0x301A84u;
            goto label_301a84;
        }
    }
    ctx->pc = 0x301A68u;
    // 0x301a68: 0x8e42014c  lw          $v0, 0x14C($s2)
    ctx->pc = 0x301a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 332)));
    // 0x301a6c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x301A6Cu;
    {
        const bool branch_taken_0x301a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x301A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301A6Cu;
        // 0x301a70: 0x8e420138  lw          $v0, 0x138($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301a6c) {
            ctx->pc = 0x301A88u;
            goto label_301a88;
        }
    }
    ctx->pc = 0x301A74u;
    // 0x301a74: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x301a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x301a78: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x301a78u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x301a7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x301A7Cu;
    {
        const bool branch_taken_0x301a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301A7Cu;
        // 0x301a80: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301a7c) {
            ctx->pc = 0x301A90u;
            goto label_301a90;
        }
    }
    ctx->pc = 0x301A84u;
label_301a84:
    // 0x301a84: 0x8e420138  lw          $v0, 0x138($s2)
    ctx->pc = 0x301a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 312)));
label_301a88:
    // 0x301a88: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x301a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x301a8c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x301a8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_301a90:
    // 0x301a90: 0xae420140  sw          $v0, 0x140($s2)
    ctx->pc = 0x301a90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 320), GPR_U32(ctx, 2));
    // 0x301a94: 0x2a900  sll         $s5, $v0, 4
    ctx->pc = 0x301a94u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x301a98: 0x8e42013c  lw          $v0, 0x13C($s2)
    ctx->pc = 0x301a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 316)));
    // 0x301a9c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x301a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x301aa0: 0x2a100  sll         $s4, $v0, 4
    ctx->pc = 0x301aa0u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x301aa4: 0x16830004  bne         $s4, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x301AA4u;
    {
        const bool branch_taken_0x301aa4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x301AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301AA4u;
        // 0x301aa8: 0x24160180  addiu       $s6, $zero, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301aa4) {
            ctx->pc = 0x301AB8u;
            goto label_301ab8;
        }
    }
    ctx->pc = 0x301AACu;
    // 0x301aac: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x301aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x301ab0: 0x12a2008d  beq         $s5, $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x301AB0u;
    {
        const bool branch_taken_0x301ab0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x301AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301AB0u;
        // 0x301ab4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301ab0) {
            ctx->pc = 0x301CE8u;
            goto label_301ce8;
        }
    }
    ctx->pc = 0x301AB8u;
label_301ab8:
    // 0x301ab8: 0x26510118  addiu       $s1, $s2, 0x118
    ctx->pc = 0x301ab8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 280));
    // 0x301abc: 0x2b68018  mult        $s0, $s5, $s6
    ctx->pc = 0x301abcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x301ac0: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x301ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x301ac4: 0xae750004  sw          $s5, 0x4($s3)
    ctx->pc = 0x301ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 21));
    // 0x301ac8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x301ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301acc: 0x2908018  mult        $s0, $s4, $s0
    ctx->pc = 0x301accu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x301ad0: 0xc0be716  jal         func_2F9C58
    ctx->pc = 0x301AD0u;
    SET_GPR_U32(ctx, 31, 0x301AD8u);
    ctx->pc = 0x301AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301AD0u;
    // 0x301ad4: 0x108202  srl         $s0, $s0, 8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9C58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F9C58u, 0x301AD0u, 0x301AD8u)) {
        return;
    }
    ctx->pc = 0x301AD8u;
label_301ad8:
    // 0x301ad8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x301ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301adc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x301adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301ae0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x301ae0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301ae4: 0xc0be71a  jal         func_2F9C68
    ctx->pc = 0x301AE4u;
    SET_GPR_U32(ctx, 31, 0x301AECu);
    ctx->pc = 0x301AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301AE4u;
    // 0x301ae8: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9C68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F9C68u, 0x301AE4u, 0x301AECu)) {
        return;
    }
    ctx->pc = 0x301AECu;
label_301aec:
    // 0x301aec: 0xae42010c  sw          $v0, 0x10C($s2)
    ctx->pc = 0x301aecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 2));
    // 0x301af0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x301af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301af4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x301af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301af8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x301af8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301afc: 0xc0be71a  jal         func_2F9C68
    ctx->pc = 0x301AFCu;
    SET_GPR_U32(ctx, 31, 0x301B04u);
    ctx->pc = 0x301B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301AFCu;
    // 0x301b00: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9C68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F9C68u, 0x301AFCu, 0x301B04u)) {
        return;
    }
    ctx->pc = 0x301B04u;
label_301b04:
    // 0x301b04: 0xae420110  sw          $v0, 0x110($s2)
    ctx->pc = 0x301b04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 2));
    // 0x301b08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x301b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301b0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x301b0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301b10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x301b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301b14: 0xc0be71a  jal         func_2F9C68
    ctx->pc = 0x301B14u;
    SET_GPR_U32(ctx, 31, 0x301B1Cu);
    ctx->pc = 0x301B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301B14u;
    // 0x301b18: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9C68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F9C68u, 0x301B14u, 0x301B1Cu)) {
        return;
    }
    ctx->pc = 0x301B1Cu;
label_301b1c:
    // 0x301b1c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x301b1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301b20: 0x8e43087c  lw          $v1, 0x87C($s2)
    ctx->pc = 0x301b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2172)));
    // 0x301b24: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x301B24u;
    {
        const bool branch_taken_0x301b24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x301B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301B24u;
        // 0x301b28: 0xae480114  sw          $t0, 0x114($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301b24) {
            ctx->pc = 0x301BB0u;
            goto label_301bb0;
        }
    }
    ctx->pc = 0x301B2Cu;
    // 0x301b2c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x301b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x301b30: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x301b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x301b34: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x301b34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x301b38: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x301b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x301b3c: 0x8e45010c  lw          $a1, 0x10C($s2)
    ctx->pc = 0x301b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
    // 0x301b40: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x301b40u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x301b44: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x301b44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x301b48: 0x8e430110  lw          $v1, 0x110($s2)
    ctx->pc = 0x301b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x301b4c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x301b4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x301b50: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x301b50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x301b54: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x301b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x301b58: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x301b58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x301b5c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x301b5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x301b60: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x301b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x301b64: 0xe6382a  slt         $a3, $a3, $a2
    ctx->pc = 0x301b64u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x301b68: 0x24c201ff  addiu       $v0, $a2, 0x1FF
    ctx->pc = 0x301b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 511));
    // 0x301b6c: 0xc7100b  movn        $v0, $a2, $a3
    ctx->pc = 0x301b6cu;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6));
    // 0x301b70: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x301b70u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x301b74: 0x21243  sra         $v0, $v0, 9
    ctx->pc = 0x301b74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 9));
    // 0x301b78: 0xae4501f8  sw          $a1, 0x1F8($s2)
    ctx->pc = 0x301b78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 504), GPR_U32(ctx, 5));
    // 0x301b7c: 0x561018  mult        $v0, $v0, $s6
    ctx->pc = 0x301b7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x301b80: 0xae430260  sw          $v1, 0x260($s2)
    ctx->pc = 0x301b80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 3));
    // 0x301b84: 0xae450330  sw          $a1, 0x330($s2)
    ctx->pc = 0x301b84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 816), GPR_U32(ctx, 5));
    // 0x301b88: 0xae430398  sw          $v1, 0x398($s2)
    ctx->pc = 0x301b88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 920), GPR_U32(ctx, 3));
    // 0x301b8c: 0xae4802c8  sw          $t0, 0x2C8($s2)
    ctx->pc = 0x301b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 712), GPR_U32(ctx, 8));
    // 0x301b90: 0x1022021  addu        $a0, $t0, $v0
    ctx->pc = 0x301b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x301b94: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x301b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x301b98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x301b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x301b9c: 0xae450468  sw          $a1, 0x468($s2)
    ctx->pc = 0x301b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1128), GPR_U32(ctx, 5));
    // 0x301ba0: 0xae4304d0  sw          $v1, 0x4D0($s2)
    ctx->pc = 0x301ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1232), GPR_U32(ctx, 3));
    // 0x301ba4: 0xae440538  sw          $a0, 0x538($s2)
    ctx->pc = 0x301ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1336), GPR_U32(ctx, 4));
    // 0x301ba8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x301BA8u;
    {
        const bool branch_taken_0x301ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301BA8u;
        // 0x301bac: 0xae480400  sw          $t0, 0x400($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1024), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301ba8) {
            ctx->pc = 0x301C18u;
            goto label_301c18;
        }
    }
    ctx->pc = 0x301BB0u;
label_301bb0:
    // 0x301bb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x301bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301bb4: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x301BB4u;
    {
        const bool branch_taken_0x301bb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x301BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301BB4u;
        // 0x301bb8: 0x143103  sra         $a2, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301bb4) {
            ctx->pc = 0x301C1Cu;
            goto label_301c1c;
        }
    }
    ctx->pc = 0x301BBCu;
    // 0x301bbc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x301bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x301bc0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x301bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x301bc4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x301bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x301bc8: 0x8e46010c  lw          $a2, 0x10C($s2)
    ctx->pc = 0x301bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
    // 0x301bcc: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x301bccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x301bd0: 0x8e450110  lw          $a1, 0x110($s2)
    ctx->pc = 0x301bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x301bd4: 0xae4601f8  sw          $a2, 0x1F8($s2)
    ctx->pc = 0x301bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 504), GPR_U32(ctx, 6));
    // 0x301bd8: 0xae450260  sw          $a1, 0x260($s2)
    ctx->pc = 0x301bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 5));
    // 0x301bdc: 0xae460330  sw          $a2, 0x330($s2)
    ctx->pc = 0x301bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 816), GPR_U32(ctx, 6));
    // 0x301be0: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x301be0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x301be4: 0x246201ff  addiu       $v0, $v1, 0x1FF
    ctx->pc = 0x301be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 511));
    // 0x301be8: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x301be8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
    // 0x301bec: 0xae450398  sw          $a1, 0x398($s2)
    ctx->pc = 0x301becu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 920), GPR_U32(ctx, 5));
    // 0x301bf0: 0x21243  sra         $v0, $v0, 9
    ctx->pc = 0x301bf0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 9));
    // 0x301bf4: 0xae4802c8  sw          $t0, 0x2C8($s2)
    ctx->pc = 0x301bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 712), GPR_U32(ctx, 8));
    // 0x301bf8: 0x561018  mult        $v0, $v0, $s6
    ctx->pc = 0x301bf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x301bfc: 0xae480400  sw          $t0, 0x400($s2)
    ctx->pc = 0x301bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1024), GPR_U32(ctx, 8));
    // 0x301c00: 0x1021821  addu        $v1, $t0, $v0
    ctx->pc = 0x301c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x301c04: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x301c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x301c08: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x301c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x301c0c: 0xae460468  sw          $a2, 0x468($s2)
    ctx->pc = 0x301c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1128), GPR_U32(ctx, 6));
    // 0x301c10: 0xae4504d0  sw          $a1, 0x4D0($s2)
    ctx->pc = 0x301c10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1232), GPR_U32(ctx, 5));
    // 0x301c14: 0xae430538  sw          $v1, 0x538($s2)
    ctx->pc = 0x301c14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1336), GPR_U32(ctx, 3));
label_301c18:
    // 0x301c18: 0x143103  sra         $a2, $s4, 4
    ctx->pc = 0x301c18u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 20), 4));
label_301c1c:
    // 0x301c1c: 0x264201f8  addiu       $v0, $s2, 0x1F8
    ctx->pc = 0x301c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 504));
    // 0x301c20: 0x153903  sra         $a3, $s5, 4
    ctx->pc = 0x301c20u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 21), 4));
    // 0x301c24: 0x1527c2  srl         $a0, $s5, 31
    ctx->pc = 0x301c24u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 21), 31));
    // 0x301c28: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x301c28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 7));
    // 0x301c2c: 0x26430260  addiu       $v1, $s2, 0x260
    ctx->pc = 0x301c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 608));
    // 0x301c30: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x301c30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x301c34: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x301c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x301c38: 0xac550008  sw          $s5, 0x8($v0)
    ctx->pc = 0x301c38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 21));
    // 0x301c3c: 0x45143  sra         $t2, $a0, 5
    ctx->pc = 0x301c3cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 4), 5));
    // 0x301c40: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x301c40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x301c44: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x301c44u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x301c48: 0xac670010  sw          $a3, 0x10($v1)
    ctx->pc = 0x301c48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 7));
    // 0x301c4c: 0x264202c8  addiu       $v0, $s2, 0x2C8
    ctx->pc = 0x301c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 712));
    // 0x301c50: 0xac740004  sw          $s4, 0x4($v1)
    ctx->pc = 0x301c50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 20));
    // 0x301c54: 0x26450330  addiu       $a1, $s2, 0x330
    ctx->pc = 0x301c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 816));
    // 0x301c58: 0xac750008  sw          $s5, 0x8($v1)
    ctx->pc = 0x301c58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 21));
    // 0x301c5c: 0x26480468  addiu       $t0, $s2, 0x468
    ctx->pc = 0x301c5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 1128));
    // 0x301c60: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x301c60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x301c64: 0x264904d0  addiu       $t1, $s2, 0x4D0
    ctx->pc = 0x301c64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 1232));
    // 0x301c68: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x301c68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 7));
    // 0x301c6c: 0x26430398  addiu       $v1, $s2, 0x398
    ctx->pc = 0x301c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 920));
    // 0x301c70: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x301c70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x301c74: 0x26470400  addiu       $a3, $s2, 0x400
    ctx->pc = 0x301c74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1024));
    // 0x301c78: 0xac550008  sw          $s5, 0x8($v0)
    ctx->pc = 0x301c78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 21));
    // 0x301c7c: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x301c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x301c80: 0xacaa0010  sw          $t2, 0x10($a1)
    ctx->pc = 0x301c80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 10));
    // 0x301c84: 0x26420538  addiu       $v0, $s2, 0x538
    ctx->pc = 0x301c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1336));
    // 0x301c88: 0xacb40004  sw          $s4, 0x4($a1)
    ctx->pc = 0x301c88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 20));
    // 0x301c8c: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x301c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x301c90: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x301c90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
    // 0x301c94: 0xac6a0010  sw          $t2, 0x10($v1)
    ctx->pc = 0x301c94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 10));
    // 0x301c98: 0xac740004  sw          $s4, 0x4($v1)
    ctx->pc = 0x301c98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 20));
    // 0x301c9c: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x301c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x301ca0: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x301ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x301ca4: 0xacea0010  sw          $t2, 0x10($a3)
    ctx->pc = 0x301ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 10));
    // 0x301ca8: 0xacf40004  sw          $s4, 0x4($a3)
    ctx->pc = 0x301ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 20));
    // 0x301cac: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x301cacu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x301cb0: 0xace6000c  sw          $a2, 0xC($a3)
    ctx->pc = 0x301cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 6));
    // 0x301cb4: 0xad0a0010  sw          $t2, 0x10($t0)
    ctx->pc = 0x301cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 10));
    // 0x301cb8: 0xad140004  sw          $s4, 0x4($t0)
    ctx->pc = 0x301cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 20));
    // 0x301cbc: 0xad040008  sw          $a0, 0x8($t0)
    ctx->pc = 0x301cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
    // 0x301cc0: 0xad06000c  sw          $a2, 0xC($t0)
    ctx->pc = 0x301cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 6));
    // 0x301cc4: 0xad2a0010  sw          $t2, 0x10($t1)
    ctx->pc = 0x301cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 10));
    // 0x301cc8: 0xad340004  sw          $s4, 0x4($t1)
    ctx->pc = 0x301cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 20));
    // 0x301ccc: 0xad240008  sw          $a0, 0x8($t1)
    ctx->pc = 0x301cccu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 4));
    // 0x301cd0: 0xad26000c  sw          $a2, 0xC($t1)
    ctx->pc = 0x301cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 6));
    // 0x301cd4: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x301cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x301cd8: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x301cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x301cdc: 0xac4a0010  sw          $t2, 0x10($v0)
    ctx->pc = 0x301cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 10));
    // 0x301ce0: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x301ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x301ce4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x301ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_301ce8:
    // 0x301ce8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x301ce8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x301cec: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x301cecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x301cf0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x301cf0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x301cf4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x301cf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x301cf8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x301cf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x301cfc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x301cfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x301d00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x301d00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x301d04: 0x3e00008  jr          $ra
    ctx->pc = 0x301D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x301D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301D04u;
        // 0x301d08: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x301D0Cu;
    // 0x301d0c: 0x0  nop
    ctx->pc = 0x301d0cu;
    // NOP
    ctx->pc = 0x301d10u;
}
