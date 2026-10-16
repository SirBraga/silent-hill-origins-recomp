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

// Function: sub_00214E40
// Address: 0x214e40 - 0x214f80
void sub_00214E40_0x214e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214E40_0x214e40");
#endif

    switch (ctx->pc) {
        case 0x214e6cu: goto label_214e6c;
        case 0x214e98u: goto label_214e98;
        case 0x214edcu: goto label_214edc;
        case 0x214ef8u: goto label_214ef8;
        case 0x214f10u: goto label_214f10;
        case 0x214f5cu: goto label_214f5c;
        default: break;
    }

    ctx->pc = 0x214e40u;

    // 0x214e40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x214e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x214e44: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x214e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x214e48: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x214e48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e4c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x214e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x214e50: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x214e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e54: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x214e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x214e58: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x214e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e5c: 0x26270038  addiu       $a3, $s1, 0x38
    ctx->pc = 0x214e5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x214e60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x214e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x214e64: 0xc085dee  jal         func_2177B8
    ctx->pc = 0x214E64u;
    SET_GPR_U32(ctx, 31, 0x214E6Cu);
    ctx->pc = 0x214E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214E64u;
    // 0x214e68: 0x26260034  addiu       $a2, $s1, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2177B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2177B8u, 0x214E64u, 0x214E6Cu)) {
        return;
    }
    ctx->pc = 0x214E6Cu;
label_214e6c:
    // 0x214e6c: 0x26300030  addiu       $s0, $s1, 0x30
    ctx->pc = 0x214e6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x214e70: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x214e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x214e74: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x214e74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e78: 0x94820008  lhu         $v0, 0x8($a0)
    ctx->pc = 0x214e78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x214e7c: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x214e7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x214e80: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x214e80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x214e84: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x214E84u;
    {
        const bool branch_taken_0x214e84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x214E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214E84u;
        // 0x214e88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214e84) {
            ctx->pc = 0x214EC8u;
            goto label_214ec8;
        }
    }
    ctx->pc = 0x214E8Cu;
    // 0x214e8c: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x214e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x214e90: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x214e90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e94: 0x0  nop
    ctx->pc = 0x214e94u;
    // NOP
label_214e98:
    // 0x214e98: 0x94c40000  lhu         $a0, 0x0($a2)
    ctx->pc = 0x214e98u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x214e9c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x214e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x214ea0: 0x96050010  lhu         $a1, 0x10($s0)
    ctx->pc = 0x214ea0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x214ea4: 0x3882ffff  xori        $v0, $a0, 0xFFFF
    ctx->pc = 0x214ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)65535);
    // 0x214ea8: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x214ea8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0));
    // 0x214eac: 0x85182a  slt         $v1, $a0, $a1
    ctx->pc = 0x214eacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x214eb0: 0x83280a  movz        $a1, $a0, $v1
    ctx->pc = 0x214eb0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4));
    // 0x214eb4: 0xa6050010  sh          $a1, 0x10($s0)
    ctx->pc = 0x214eb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 5));
    // 0x214eb8: 0x95020008  lhu         $v0, 0x8($t0)
    ctx->pc = 0x214eb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x214ebc: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x214ebcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x214ec0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x214EC0u;
    {
        const bool branch_taken_0x214ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214EC0u;
        // 0x214ec4: 0x24c60018  addiu       $a2, $a2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214ec0) {
            ctx->pc = 0x214E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214e98;
        }
    }
    ctx->pc = 0x214EC8u;
label_214ec8:
    // 0x214ec8: 0x96040010  lhu         $a0, 0x10($s0)
    ctx->pc = 0x214ec8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x214ecc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x214eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x214ed0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x214ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x214ed4: 0xc080924  jal         func_202490
    ctx->pc = 0x214ED4u;
    SET_GPR_U32(ctx, 31, 0x214EDCu);
    ctx->pc = 0x214ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214ED4u;
    // 0x214ed8: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x214ED4u, 0x214EDCu)) {
        return;
    }
    ctx->pc = 0x214EDCu;
label_214edc:
    // 0x214edc: 0x96060010  lhu         $a2, 0x10($s0)
    ctx->pc = 0x214edcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x214ee0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x214ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214ee4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x214ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x214ee8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x214ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214eec: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x214eecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x214ef0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x214EF0u;
    SET_GPR_U32(ctx, 31, 0x214EF8u);
    ctx->pc = 0x214EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214EF0u;
    // 0x214ef4: 0x34c60001  ori         $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x214EF0u, 0x214EF8u)) {
        return;
    }
    ctx->pc = 0x214EF8u;
label_214ef8:
    // 0x214ef8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x214ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x214efc: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x214efcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x214f00: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x214F00u;
    {
        const bool branch_taken_0x214f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F00u;
        // 0x214f04: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214f00) {
            ctx->pc = 0x214F50u;
            goto label_214f50;
        }
    }
    ctx->pc = 0x214F08u;
    // 0x214f08: 0x3409ffff  ori         $t1, $zero, 0xFFFF
    ctx->pc = 0x214f08u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x214f0c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x214f0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214f10:
    // 0x214f10: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x214f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x214f14: 0x30e5ffff  andi        $a1, $a3, 0xFFFF
    ctx->pc = 0x214f14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x214f18: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x214f18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x214f1c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x214f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x214f20: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x214f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x214f24: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x214f24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x214f28: 0x491826  xor         $v1, $v0, $t1
    ctx->pc = 0x214f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 9));
    // 0x214f2c: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x214f2cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5));
    // 0x214f30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x214f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x214f34: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x214f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x214f38: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x214f38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x214f3c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x214f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x214f40: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x214f40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x214f44: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x214f44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x214f48: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x214F48u;
    {
        const bool branch_taken_0x214f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F48u;
        // 0x214f4c: 0x25080018  addiu       $t0, $t0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214f48) {
            ctx->pc = 0x214F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214f10;
        }
    }
    ctx->pc = 0x214F50u;
label_214f50:
    // 0x214f50: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x214f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x214f54: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x214F54u;
    SET_GPR_U32(ctx, 31, 0x214F5Cu);
    ctx->pc = 0x214F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214F54u;
    // 0x214f58: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x214F54u, 0x214F5Cu)) {
        return;
    }
    ctx->pc = 0x214F5Cu;
label_214f5c:
    // 0x214f5c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x214f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x214f60: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x214f60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214f64: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x214f64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214f68: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x214f68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214f6c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x214f6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214f70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x214f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214f74: 0x3e00008  jr          $ra
    ctx->pc = 0x214F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F74u;
        // 0x214f78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214F7Cu;
    // 0x214f7c: 0x0  nop
    ctx->pc = 0x214f7cu;
    // NOP
    ctx->pc = 0x214f80u;
}
