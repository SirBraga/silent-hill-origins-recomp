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

// Function: sub_00107DE0
// Address: 0x107de0 - 0x107f58
void sub_00107DE0_0x107de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107DE0_0x107de0");
#endif

    switch (ctx->pc) {
        case 0x107e14u: goto label_107e14;
        case 0x107e28u: goto label_107e28;
        case 0x107e3cu: goto label_107e3c;
        case 0x107e50u: goto label_107e50;
        case 0x107e64u: goto label_107e64;
        case 0x107e7cu: goto label_107e7c;
        case 0x107ea4u: goto label_107ea4;
        case 0x107ebcu: goto label_107ebc;
        case 0x107ec4u: goto label_107ec4;
        case 0x107ed8u: goto label_107ed8;
        default: break;
    }

    ctx->pc = 0x107de0u;

    // 0x107de0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x107de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x107de4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x107de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x107de8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x107de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x107dec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x107decu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107df0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x107df0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107df4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x107df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x107df8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x107df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x107dfc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x107dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x107e00: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x107e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x107e04: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x107e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x107e08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x107e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x107e0c: 0xc0a0b74  jal         func_282DD0
    ctx->pc = 0x107E0Cu;
    SET_GPR_U32(ctx, 31, 0x107E14u);
    ctx->pc = 0x107E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107E0Cu;
    // 0x107e10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282DD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x282DD0u, 0x107E0Cu, 0x107E14u)) {
        return;
    }
    ctx->pc = 0x107E14u;
label_107e14:
    // 0x107e14: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x107e14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107e18: 0x12200046  beqz        $s1, . + 4 + (0x46 << 2)
    ctx->pc = 0x107E18u;
    {
        const bool branch_taken_0x107e18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E18u;
        // 0x107e1c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e18) {
            ctx->pc = 0x107F34u;
            goto label_107f34;
        }
    }
    ctx->pc = 0x107E20u;
    // 0x107e20: 0xc0941a8  jal         func_2506A0
    ctx->pc = 0x107E20u;
    SET_GPR_U32(ctx, 31, 0x107E28u);
    ctx->pc = 0x107E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107E20u;
    // 0x107e24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2506A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2506A0u, 0x107E20u, 0x107E28u)) {
        return;
    }
    ctx->pc = 0x107E28u;
label_107e28:
    // 0x107e28: 0x8e500018  lw          $s0, 0x18($s2)
    ctx->pc = 0x107e28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x107e2c: 0x12000040  beqz        $s0, . + 4 + (0x40 << 2)
    ctx->pc = 0x107E2Cu;
    {
        const bool branch_taken_0x107e2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E2Cu;
        // 0x107e30: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e2c) {
            ctx->pc = 0x107F30u;
            goto label_107f30;
        }
    }
    ctx->pc = 0x107E34u;
    // 0x107e34: 0xc0a0b9c  jal         func_282E70
    ctx->pc = 0x107E34u;
    SET_GPR_U32(ctx, 31, 0x107E3Cu);
    ctx->pc = 0x107E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107E34u;
    // 0x107e38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282E70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x282E70u, 0x107E34u, 0x107E3Cu)) {
        return;
    }
    ctx->pc = 0x107E3Cu;
label_107e3c:
    // 0x107e3c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x107e3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107e40: 0x52a0003c  beql        $s5, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x107E40u;
    {
        const bool branch_taken_0x107e40 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x107e40) {
            ctx->pc = 0x107E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107E40u;
            // 0x107e44: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107F34u;
            goto label_107f34;
        }
    }
    ctx->pc = 0x107E48u;
    // 0x107e48: 0xc086cea  jal         func_21B3A8
    ctx->pc = 0x107E48u;
    SET_GPR_U32(ctx, 31, 0x107E50u);
    ctx->pc = 0x107E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107E48u;
    // 0x107e4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B3A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21B3A8u, 0x107E48u, 0x107E50u)) {
        return;
    }
    ctx->pc = 0x107E50u;
label_107e50:
    // 0x107e50: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x107e50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107e54: 0x12600036  beqz        $s3, . + 4 + (0x36 << 2)
    ctx->pc = 0x107E54u;
    {
        const bool branch_taken_0x107e54 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E54u;
        // 0x107e58: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e54) {
            ctx->pc = 0x107F30u;
            goto label_107f30;
        }
    }
    ctx->pc = 0x107E5Cu;
    // 0x107e5c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x107E5Cu;
    SET_GPR_U32(ctx, 31, 0x107E64u);
    ctx->pc = 0x107E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107E5Cu;
    // 0x107e60: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x107E5Cu, 0x107E64u)) {
        return;
    }
    ctx->pc = 0x107E64u;
label_107e64:
    // 0x107e64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x107e64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107e68: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
    ctx->pc = 0x107E68u;
    {
        const bool branch_taken_0x107e68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E68u;
        // 0x107e6c: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e68) {
            ctx->pc = 0x107F30u;
            goto label_107f30;
        }
    }
    ctx->pc = 0x107E70u;
    // 0x107e70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x107e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107e74: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x107E74u;
    SET_GPR_U32(ctx, 31, 0x107E7Cu);
    ctx->pc = 0x107E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107E74u;
    // 0x107e78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x107E74u, 0x107E7Cu)) {
        return;
    }
    ctx->pc = 0x107E7Cu;
label_107e7c:
    // 0x107e7c: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x107e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x107e80: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x107e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x107e84: 0xae900008  sw          $s0, 0x8($s4)
    ctx->pc = 0x107e84u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 16));
    // 0x107e88: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x107e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x107e8c: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x107e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x107e90: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x107e90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x107e94: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x107e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x107e98: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x107e98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x107e9c: 0xc080924  jal         func_202490
    ctx->pc = 0x107E9Cu;
    SET_GPR_U32(ctx, 31, 0x107EA4u);
    ctx->pc = 0x107EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107E9Cu;
    // 0x107ea0: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x107E9Cu, 0x107EA4u)) {
        return;
    }
    ctx->pc = 0x107EA4u;
label_107ea4:
    // 0x107ea4: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x107ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x107ea8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x107ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107eac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x107eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107eb0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x107eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x107eb4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x107EB4u;
    SET_GPR_U32(ctx, 31, 0x107EBCu);
    ctx->pc = 0x107EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107EB4u;
    // 0x107eb8: 0x63100  sll         $a2, $a2, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x107EB4u, 0x107EBCu)) {
        return;
    }
    ctx->pc = 0x107EBCu;
label_107ebc:
    // 0x107ebc: 0xc0a0bc4  jal         func_282F10
    ctx->pc = 0x107EBCu;
    SET_GPR_U32(ctx, 31, 0x107EC4u);
    ctx->pc = 0x107EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107EBCu;
    // 0x107ec0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x282F10u, 0x107EBCu, 0x107EC4u)) {
        return;
    }
    ctx->pc = 0x107EC4u;
label_107ec4:
    // 0x107ec4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x107ec4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107ec8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x107ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x107ecc: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x107ECCu;
    {
        const bool branch_taken_0x107ecc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x107ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107ECCu;
        // 0x107ed0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ecc) {
            ctx->pc = 0x107F30u;
            goto label_107f30;
        }
    }
    ctx->pc = 0x107ED4u;
    // 0x107ed4: 0x8e640030  lw          $a0, 0x30($s3)
    ctx->pc = 0x107ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_107ed8:
    // 0x107ed8: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x107ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x107edc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x107edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x107ee0: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x107ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x107ee4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x107ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x107ee8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x107ee8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x107eec: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x107eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107ef0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x107ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x107ef4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x107ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x107ef8: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x107ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x107efc: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x107efcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x107f00: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x107f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x107f04: 0x1042821  addu        $a1, $t0, $a0
    ctx->pc = 0x107f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x107f08: 0x2c42021  addu        $a0, $s6, $a0
    ctx->pc = 0x107f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x107f0c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x107f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x107f10: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x107f10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x107f14: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x107f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x107f18: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x107f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x107f1c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x107f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x107f20: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x107f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x107f24: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x107f24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x107f28: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x107F28u;
    {
        const bool branch_taken_0x107f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x107f28) {
            ctx->pc = 0x107F2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107F28u;
            // 0x107f2c: 0x8e640030  lw          $a0, 0x30($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107ed8;
        }
    }
    ctx->pc = 0x107F30u;
label_107f30:
    // 0x107f30: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x107f30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_107f34:
    // 0x107f34: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x107f34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x107f38: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x107f38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x107f3c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x107f3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x107f40: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x107f40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x107f44: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x107f44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107f48: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x107f48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107f4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107f50: 0x3e00008  jr          $ra
    ctx->pc = 0x107F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F50u;
        // 0x107f54: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107F58u;
}
