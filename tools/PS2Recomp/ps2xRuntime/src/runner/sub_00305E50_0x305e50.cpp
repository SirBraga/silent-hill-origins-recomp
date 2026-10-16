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

// Function: sub_00305E50
// Address: 0x305e50 - 0x306178
void sub_00305E50_0x305e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305E50_0x305e50");
#endif

    switch (ctx->pc) {
        case 0x305e80u: goto label_305e80;
        case 0x305e94u: goto label_305e94;
        case 0x305ea0u: goto label_305ea0;
        case 0x305eacu: goto label_305eac;
        case 0x305ebcu: goto label_305ebc;
        case 0x305ed4u: goto label_305ed4;
        case 0x305f04u: goto label_305f04;
        case 0x305f10u: goto label_305f10;
        case 0x305f2cu: goto label_305f2c;
        case 0x305f40u: goto label_305f40;
        case 0x305f5cu: goto label_305f5c;
        case 0x305f80u: goto label_305f80;
        case 0x305fb0u: goto label_305fb0;
        case 0x30600cu: goto label_30600c;
        case 0x306098u: goto label_306098;
        case 0x3060b8u: goto label_3060b8;
        case 0x3060bcu: goto label_3060bc;
        case 0x306144u: goto label_306144;
        case 0x306150u: goto label_306150;
        default: break;
    }

    ctx->pc = 0x305e50u;

    // 0x305e50: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x305e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x305e54: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x305e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x305e58: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x305e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x305e5c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x305e5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305e60: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x305e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x305e64: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x305e64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305e68: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x305e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x305e6c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x305e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x305e70: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x305e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x305e74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x305e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x305e78: 0xc0c1736  jal         func_305CD8
    ctx->pc = 0x305E78u;
    SET_GPR_U32(ctx, 31, 0x305E80u);
    ctx->pc = 0x305E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305E78u;
    // 0x305e7c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305CD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x305CD8u, 0x305E78u, 0x305E80u)) {
        return;
    }
    ctx->pc = 0x305E80u;
label_305e80:
    // 0x305e80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x305e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305e84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x305e84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305e88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x305e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305e8c: 0xc0c1702  jal         func_305C08
    ctx->pc = 0x305E8Cu;
    SET_GPR_U32(ctx, 31, 0x305E94u);
    ctx->pc = 0x305E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305E8Cu;
    // 0x305e90: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305C08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x305C08u, 0x305E8Cu, 0x305E94u)) {
        return;
    }
    ctx->pc = 0x305E94u;
label_305e94:
    // 0x305e94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x305e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305e98: 0xc0c0cdc  jal         func_303370
    ctx->pc = 0x305E98u;
    SET_GPR_U32(ctx, 31, 0x305EA0u);
    ctx->pc = 0x305E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305E98u;
    // 0x305e9c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303370u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x303370u, 0x305E98u, 0x305EA0u)) {
        return;
    }
    ctx->pc = 0x305EA0u;
label_305ea0:
    // 0x305ea0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x305ea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305ea4: 0xc0c0cfa  jal         func_3033E8
    ctx->pc = 0x305EA4u;
    SET_GPR_U32(ctx, 31, 0x305EACu);
    ctx->pc = 0x305EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305EA4u;
    // 0x305ea8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3033E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3033E8u, 0x305EA4u, 0x305EACu)) {
        return;
    }
    ctx->pc = 0x305EACu;
label_305eac:
    // 0x305eac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x305eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305eb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x305eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305eb4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x305EB4u;
    SET_GPR_U32(ctx, 31, 0x305EBCu);
    ctx->pc = 0x305EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305EB4u;
    // 0x305eb8: 0x2043023  subu        $a2, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x305EB4u, 0x305EBCu)) {
        return;
    }
    ctx->pc = 0x305EBCu;
label_305ebc:
    // 0x305ebc: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x305ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x305ec0: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x305ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x305ec4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x305ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x305ec8: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x305ec8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x305ecc: 0xc0c0cfa  jal         func_3033E8
    ctx->pc = 0x305ECCu;
    SET_GPR_U32(ctx, 31, 0x305ED4u);
    ctx->pc = 0x305ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305ECCu;
    // 0x305ed0: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3033E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3033E8u, 0x305ECCu, 0x305ED4u)) {
        return;
    }
    ctx->pc = 0x305ED4u;
label_305ed4:
    // 0x305ed4: 0x9643000c  lhu         $v1, 0xC($s2)
    ctx->pc = 0x305ed4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x305ed8: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x305ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x305edc: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x305edcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x305ee0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x305ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305ee4: 0xa4430002  sh          $v1, 0x2($v0)
    ctx->pc = 0x305ee4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x305ee8: 0x24a55e00  addiu       $a1, $a1, 0x5E00
    ctx->pc = 0x305ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24064));
    // 0x305eec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x305eecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305ef0: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x305ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x305ef4: 0xac520004  sw          $s2, 0x4($v0)
    ctx->pc = 0x305ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
    // 0x305ef8: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x305ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x305efc: 0xc0c1702  jal         func_305C08
    ctx->pc = 0x305EFCu;
    SET_GPR_U32(ctx, 31, 0x305F04u);
    ctx->pc = 0x305F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305EFCu;
    // 0x305f00: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305C08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x305C08u, 0x305EFCu, 0x305F04u)) {
        return;
    }
    ctx->pc = 0x305F04u;
label_305f04:
    // 0x305f04: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x305f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x305f08: 0x1060008a  beqz        $v1, . + 4 + (0x8A << 2)
    ctx->pc = 0x305F08u;
    {
        const bool branch_taken_0x305f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x305F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305F08u;
        // 0x305f0c: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305f08) {
            ctx->pc = 0x306134u;
            goto label_306134;
        }
    }
    ctx->pc = 0x305F10u;
label_305f10:
    // 0x305f10: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x305f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x305f14: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x305f14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x305f18: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x305f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x305f1c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x305F1Cu;
    {
        const bool branch_taken_0x305f1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x305F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305F1Cu;
        // 0x305f20: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305f1c) {
            ctx->pc = 0x305F34u;
            goto label_305f34;
        }
    }
    ctx->pc = 0x305F24u;
    // 0x305f24: 0xc0c0cfa  jal         func_3033E8
    ctx->pc = 0x305F24u;
    SET_GPR_U32(ctx, 31, 0x305F2Cu);
    ctx->pc = 0x305F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305F24u;
    // 0x305f28: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3033E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3033E8u, 0x305F24u, 0x305F2Cu)) {
        return;
    }
    ctx->pc = 0x305F2Cu;
label_305f2c:
    // 0x305f2c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x305f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x305f30: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x305f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_305f34:
    // 0x305f34: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x305f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x305f38: 0xc0c0cfa  jal         func_3033E8
    ctx->pc = 0x305F38u;
    SET_GPR_U32(ctx, 31, 0x305F40u);
    ctx->pc = 0x305F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305F38u;
    // 0x305f3c: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3033E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3033E8u, 0x305F38u, 0x305F40u)) {
        return;
    }
    ctx->pc = 0x305F40u;
label_305f40:
    // 0x305f40: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x305f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x305f44: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x305f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x305f48: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x305f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x305f4c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x305F4Cu;
    {
        const bool branch_taken_0x305f4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x305f4c) {
            ctx->pc = 0x305F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305F4Cu;
            // 0x305f50: 0x8c420034  lw          $v0, 0x34($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305F68u;
            goto label_305f68;
        }
    }
    ctx->pc = 0x305F54u;
    // 0x305f54: 0xc0c0cfa  jal         func_3033E8
    ctx->pc = 0x305F54u;
    SET_GPR_U32(ctx, 31, 0x305F5Cu);
    ctx->pc = 0x305F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305F54u;
    // 0x305f58: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3033E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3033E8u, 0x305F54u, 0x305F5Cu)) {
        return;
    }
    ctx->pc = 0x305F5Cu;
label_305f5c:
    // 0x305f5c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x305f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x305f60: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x305f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x305f64: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x305f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_305f68:
    // 0x305f68: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x305F68u;
    {
        const bool branch_taken_0x305f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305F68u;
        // 0x305f6c: 0x24420003  addiu       $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305f68) {
            ctx->pc = 0x305F84u;
            goto label_305f84;
        }
    }
    ctx->pc = 0x305F70u;
    // 0x305f70: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x305f70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x305f74: 0x3484fffc  ori         $a0, $a0, 0xFFFC
    ctx->pc = 0x305f74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65532);
    // 0x305f78: 0xc0c0cfa  jal         func_3033E8
    ctx->pc = 0x305F78u;
    SET_GPR_U32(ctx, 31, 0x305F80u);
    ctx->pc = 0x305F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305F78u;
    // 0x305f7c: 0x442024  and         $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3033E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3033E8u, 0x305F78u, 0x305F80u)) {
        return;
    }
    ctx->pc = 0x305F80u;
label_305f80:
    // 0x305f80: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x305f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_305f84:
    // 0x305f84: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x305f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x305f88: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x305f88u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x305f8c: 0x266e0001  addiu       $t6, $s3, 0x1
    ctx->pc = 0x305f8cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x305f90: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x305f90u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x305f94: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x305f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x305f98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x305f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x305f9c: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x305F9Cu;
    {
        const bool branch_taken_0x305f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305F9Cu;
        // 0x305fa0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305f9c) {
            ctx->pc = 0x306070u;
            goto label_306070;
        }
    }
    ctx->pc = 0x305FA4u;
    // 0x305fa4: 0x240d0024  addiu       $t5, $zero, 0x24
    ctx->pc = 0x305fa4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x305fa8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x305fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x305fac: 0x0  nop
    ctx->pc = 0x305facu;
    // NOP
label_305fb0:
    // 0x305fb0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x305fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x305fb4: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x305fb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x305fb8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x305FB8u;
    {
        const bool branch_taken_0x305fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305FB8u;
        // 0x305fbc: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305fb8) {
            ctx->pc = 0x305FD0u;
            goto label_305fd0;
        }
    }
    ctx->pc = 0x305FC0u;
    // 0x305fc0: 0xed1818  mult        $v1, $a3, $t5
    ctx->pc = 0x305fc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x305fc4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x305fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x305fc8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x305FC8u;
    {
        const bool branch_taken_0x305fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305FC8u;
        // 0x305fcc: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305fc8) {
            ctx->pc = 0x305FD4u;
            goto label_305fd4;
        }
    }
    ctx->pc = 0x305FD0u;
label_305fd0:
    // 0x305fd0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x305fd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305fd4:
    // 0x305fd4: 0x24e90001  addiu       $t1, $a3, 0x1
    ctx->pc = 0x305fd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x305fd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x305fd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305fdc: 0x8d07001c  lw          $a3, 0x1C($t0)
    ctx->pc = 0x305fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x305fe0: 0x12800012  beqz        $s4, . + 4 + (0x12 << 2)
    ctx->pc = 0x305FE0u;
    {
        const bool branch_taken_0x305fe0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x305FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305FE0u;
        // 0x305fe4: 0x8e0b000c  lw          $t3, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305fe0) {
            ctx->pc = 0x30602Cu;
            goto label_30602c;
        }
    }
    ctx->pc = 0x305FE8u;
    // 0x305fe8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x305fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x305fec: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x305fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x305ff0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x305ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x305ff4: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x305FF4u;
    {
        const bool branch_taken_0x305ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x305FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305FF4u;
        // 0x305ff8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305ff4) {
            ctx->pc = 0x306008u;
            goto label_306008;
        }
    }
    ctx->pc = 0x305FFCu;
    // 0x305ffc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x305FFCu;
    {
        const bool branch_taken_0x305ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305FFCu;
        // 0x306000: 0xa0602d  daddu       $t4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305ffc) {
            ctx->pc = 0x30602Cu;
            goto label_30602c;
        }
    }
    ctx->pc = 0x306004u;
    // 0x306004: 0x0  nop
    ctx->pc = 0x306004u;
    // NOP
label_306008:
    // 0x306008: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x306008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_30600c:
    // 0x30600c: 0xd4102b  sltu        $v0, $a2, $s4
    ctx->pc = 0x30600cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x306010: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x306010u;
    {
        const bool branch_taken_0x306010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306010u;
        // 0x306014: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306010) {
            ctx->pc = 0x30602Cu;
            goto label_30602c;
        }
    }
    ctx->pc = 0x306018u;
    // 0x306018: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x306018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x30601c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x30601cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x306020: 0x5464fffa  bnel        $v1, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x306020u;
    {
        const bool branch_taken_0x306020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x306020) {
            ctx->pc = 0x306024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306020u;
            // 0x306024: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30600Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30600c;
        }
    }
    ctx->pc = 0x306028u;
    // 0x306028: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x306028u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30602c:
    // 0x30602c: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x30602cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x306030: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x306030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x306034: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x306034u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306038: 0xac6c0000  sw          $t4, 0x0($v1)
    ctx->pc = 0x306038u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 12));
    // 0x30603c: 0x8d02001c  lw          $v0, 0x1C($t0)
    ctx->pc = 0x30603cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x306040: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x306040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x306044: 0x8d030018  lw          $v1, 0x18($t0)
    ctx->pc = 0x306044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x306048: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x306048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30604c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x30604cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x306050: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x306050u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x306054: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x306054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x306058: 0x8d030018  lw          $v1, 0x18($t0)
    ctx->pc = 0x306058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x30605c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x30605cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x306060: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x306060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x306064: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x306064u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x306068: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x306068u;
    {
        const bool branch_taken_0x306068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30606Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306068u;
        // 0x30606c: 0x1435024  and         $t2, $t2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306068) {
            ctx->pc = 0x305FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305fb0;
        }
    }
    ctx->pc = 0x306070u;
label_306070:
    // 0x306070: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x306070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x306074: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x306074u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x306078: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x306078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30607c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x30607cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x306080: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x306080u;
    {
        const bool branch_taken_0x306080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306080u;
        // 0x306084: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306080) {
            ctx->pc = 0x306120u;
            goto label_306120;
        }
    }
    ctx->pc = 0x306088u;
    // 0x306088: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x306088u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x30608c: 0x240b000c  addiu       $t3, $zero, 0xC
    ctx->pc = 0x30608cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x306090: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x306090u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x306094: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x306094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_306098:
    // 0x306098: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x306098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x30609c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30609cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3060a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3060a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3060a4: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x3060a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x3060a8: 0x24e90001  addiu       $t1, $a3, 0x1
    ctx->pc = 0x3060a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3060ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3060ACu;
    {
        const bool branch_taken_0x3060ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3060B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3060ACu;
        // 0x3060b0: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3060ac) {
            ctx->pc = 0x3060BCu;
            goto label_3060bc;
        }
    }
    ctx->pc = 0x3060B4u;
    // 0x3060b4: 0x0  nop
    ctx->pc = 0x3060b4u;
    // NOP
label_3060b8:
    // 0x3060b8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3060b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3060bc:
    // 0x3060bc: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x3060bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x3060c0: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x3060c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3060c4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3060C4u;
    {
        const bool branch_taken_0x3060c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3060C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3060C4u;
        // 0x3060c8: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3060c4) {
            ctx->pc = 0x306108u;
            goto label_306108;
        }
    }
    ctx->pc = 0x3060CCu;
    // 0x3060cc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3060ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3060d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3060d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3060d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3060d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3060d8: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3060D8u;
    {
        const bool branch_taken_0x3060d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3060DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3060D8u;
        // 0x3060dc: 0xeb2018  mult        $a0, $a3, $t3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3060d8) {
            ctx->pc = 0x3060B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3060b8;
        }
    }
    ctx->pc = 0x3060E0u;
    // 0x3060e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3060e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3060e4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3060e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3060e8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3060e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x3060ec: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3060ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3060f0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3060f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3060f4: 0x54a3fff1  bnel        $a1, $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x3060F4u;
    {
        const bool branch_taken_0x3060f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x3060f4) {
            ctx->pc = 0x3060F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3060F4u;
            // 0x3060f8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3060BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3060bc;
        }
    }
    ctx->pc = 0x3060FCu;
    // 0x3060fc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3060fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x306100: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x306100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x306104: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x306104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_306108:
    // 0x306108: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x306108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30610c: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x30610cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306110: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x306110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x306114: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x306114u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x306118: 0x5440ffdf  bnel        $v0, $zero, . + 4 + (-0x21 << 2)
    ctx->pc = 0x306118u;
    {
        const bool branch_taken_0x306118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x306118) {
            ctx->pc = 0x30611Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306118u;
            // 0x30611c: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306098;
        }
    }
    ctx->pc = 0x306120u;
label_306120:
    // 0x306120: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x306120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x306124: 0x1c0982d  daddu       $s3, $t6, $zero
    ctx->pc = 0x306124u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306128: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x306128u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x30612c: 0x1440ff78  bnez        $v0, . + 4 + (-0x88 << 2)
    ctx->pc = 0x30612Cu;
    {
        const bool branch_taken_0x30612c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30612Cu;
        // 0x306130: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30612c) {
            ctx->pc = 0x305F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305f10;
        }
    }
    ctx->pc = 0x306134u;
label_306134:
    // 0x306134: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x306134u;
    {
        const bool branch_taken_0x306134 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x306138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306134u;
        // 0x306138: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306134) {
            ctx->pc = 0x306148u;
            goto label_306148;
        }
    }
    ctx->pc = 0x30613Cu;
    // 0x30613c: 0xc0c0cfa  jal         func_3033E8
    ctx->pc = 0x30613Cu;
    SET_GPR_U32(ctx, 31, 0x306144u);
    ctx->pc = 0x306140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30613Cu;
    // 0x306140: 0x2a42018  mult        $a0, $s5, $a0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3033E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3033E8u, 0x30613Cu, 0x306144u)) {
        return;
    }
    ctx->pc = 0x306144u;
label_306144:
    // 0x306144: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x306144u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_306148:
    // 0x306148: 0xc0c174e  jal         func_305D38
    ctx->pc = 0x306148u;
    SET_GPR_U32(ctx, 31, 0x306150u);
    ctx->pc = 0x30614Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306148u;
    // 0x30614c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305D38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x305D38u, 0x306148u, 0x306150u)) {
        return;
    }
    ctx->pc = 0x306150u;
label_306150:
    // 0x306150: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x306150u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x306154: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x306154u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306158: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x306158u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30615c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x30615cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x306160: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x306160u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x306164: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x306164u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x306168: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x306168u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30616c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30616cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x306170: 0x3e00008  jr          $ra
    ctx->pc = 0x306170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306170u;
        // 0x306174: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306178u;
}
