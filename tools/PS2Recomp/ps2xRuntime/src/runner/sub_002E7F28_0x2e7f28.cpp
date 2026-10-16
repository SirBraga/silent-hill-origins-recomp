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

// Function: sub_002E7F28
// Address: 0x2e7f28 - 0x2e80f0
void sub_002E7F28_0x2e7f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7F28_0x2e7f28");
#endif

    switch (ctx->pc) {
        case 0x2e7fd0u: goto label_2e7fd0;
        case 0x2e8010u: goto label_2e8010;
        case 0x2e8040u: goto label_2e8040;
        case 0x2e8078u: goto label_2e8078;
        default: break;
    }

    ctx->pc = 0x2e7f28u;

    // 0x2e7f28: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2e7f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x2e7f2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e7f2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7f30: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x2e7f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
    // 0x2e7f34: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x2e7f34u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x2e7f38: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x2e7f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x2e7f3c: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x2e7f3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7f40: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x2e7f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x2e7f44: 0x73e00  sll         $a3, $a3, 24
    ctx->pc = 0x2e7f44u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x2e7f48: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x2e7f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
    // 0x2e7f4c: 0x84603  sra         $t0, $t0, 24
    ctx->pc = 0x2e7f4cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 24));
    // 0x2e7f50: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x2e7f50u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x2e7f54: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x2e7f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x2e7f58: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x2e7f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x2e7f5c: 0x7ae03  sra         $s5, $a3, 24
    ctx->pc = 0x2e7f5cu;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 7), 24));
    // 0x2e7f60: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x2e7f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x2e7f64: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2e7f64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7f68: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x2e7f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x2e7f6c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2e7f6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7f70: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2e7f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2e7f74: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e7f74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7f78: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2e7f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2e7f7c: 0x2ac20010  slti        $v0, $s6, 0x10
    ctx->pc = 0x2e7f7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2e7f80: 0xafa80064  sw          $t0, 0x64($sp)
    ctx->pc = 0x2e7f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 8));
    // 0x2e7f84: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x2e7f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x2e7f88: 0xafa50068  sw          $a1, 0x68($sp)
    ctx->pc = 0x2e7f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 5));
    // 0x2e7f8c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2e7f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2e7f90: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x2e7f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x2e7f94: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x2e7f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x2e7f98: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x2E7F98u;
    {
        const bool branch_taken_0x2e7f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F98u;
        // 0x2e7f9c: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7f98) {
            ctx->pc = 0x2E80BCu;
            goto label_2e80bc;
        }
    }
    ctx->pc = 0x2E7FA0u;
    // 0x2e7fa0: 0x2417001c  addiu       $s7, $zero, 0x1C
    ctx->pc = 0x2e7fa0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2e7fa4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2e7fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e7fa8: 0x2b71018  mult        $v0, $s5, $s7
    ctx->pc = 0x2e7fa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2e7fac: 0x27a50054  addiu       $a1, $sp, 0x54
    ctx->pc = 0x2e7facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2e7fb0: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x2e7fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2e7fb4: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x2e7fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x2e7fb8: 0xafa50074  sw          $a1, 0x74($sp)
    ctx->pc = 0x2e7fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 5));
    // 0x2e7fbc: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2e7fbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e7fc0: 0xafa60078  sw          $a2, 0x78($sp)
    ctx->pc = 0x2e7fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 6));
    // 0x2e7fc4: 0x27be005c  addiu       $fp, $sp, 0x5C
    ctx->pc = 0x2e7fc4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2e7fc8: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x2e7fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x2e7fcc: 0x0  nop
    ctx->pc = 0x2e7fccu;
    // NOP
label_2e7fd0:
    // 0x2e7fd0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2e7fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2e7fd4: 0x24740010  addiu       $s4, $v1, 0x10
    ctx->pc = 0x2e7fd4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2e7fd8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e7fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7fdc: 0x513823  subu        $a3, $v0, $s1
    ctx->pc = 0x2e7fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2e7fe0: 0x28e2001d  slti        $v0, $a3, 0x1D
    ctx->pc = 0x2e7fe0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x2e7fe4: 0x2e2380a  movz        $a3, $s7, $v0
    ctx->pc = 0x2e7fe4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 23));
    // 0x2e7fe8: 0x18e00011  blez        $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E7FE8u;
    {
        const bool branch_taken_0x2e7fe8 = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x2E7FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7FE8u;
        // 0x2e7fec: 0x26530010  addiu       $s3, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7fe8) {
            ctx->pc = 0x2E8030u;
            goto label_2e8030;
        }
    }
    ctx->pc = 0x2E7FF0u;
    // 0x2e7ff0: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x2e7ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x2e7ff4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e7ff4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7ff8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2e7ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7ffc: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x2e7ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2e8000: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2e8000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e8004: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2e8004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2e8008: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2e8008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e800c: 0x0  nop
    ctx->pc = 0x2e800cu;
    // NOP
label_2e8010:
    // 0x2e8010: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x2e8010u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e8014: 0x151040  sll         $v0, $s5, 1
    ctx->pc = 0x2e8014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x2e8018: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2e8018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2e801c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2e801cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2e8020: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x2e8020u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e8024: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E8024u;
    {
        const bool branch_taken_0x2e8024 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8024u;
        // 0x2e8028: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8024) {
            ctx->pc = 0x2E8010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8010;
        }
    }
    ctx->pc = 0x2E802Cu;
    // 0x2e802c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2e802cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2e8030:
    // 0x2e8030: 0x2882001c  slti        $v0, $a0, 0x1C
    ctx->pc = 0x2e8030u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x2e8034: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E8034u;
    {
        const bool branch_taken_0x2e8034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8034u;
        // 0x2e8038: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8034) {
            ctx->pc = 0x2E805Cu;
            goto label_2e805c;
        }
    }
    ctx->pc = 0x2E803Cu;
    // 0x2e803c: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x2e803cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2e8040:
    // 0x2e8040: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x2e8040u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e8044: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2e8044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2e8048: 0x2882001c  slti        $v0, $a0, 0x1C
    ctx->pc = 0x2e8048u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x2e804c: 0x0  nop
    ctx->pc = 0x2e804cu;
    // NOP
    // 0x2e8050: 0x0  nop
    ctx->pc = 0x2e8050u;
    // NOP
    // 0x2e8054: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E8054u;
    {
        const bool branch_taken_0x2e8054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8054u;
        // 0x2e8058: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8054) {
            ctx->pc = 0x2E8040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8040;
        }
    }
    ctx->pc = 0x2E805Cu;
label_2e805c:
    // 0x2e805c: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x2e805cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e8060: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e8060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8064: 0x8fa70074  lw          $a3, 0x74($sp)
    ctx->pc = 0x2e8064u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x2e8068: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e8068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e806c: 0x8fa80078  lw          $t0, 0x78($sp)
    ctx->pc = 0x2e806cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e8070: 0xc0b9d30  jal         func_2E74C0
    ctx->pc = 0x2E8070u;
    SET_GPR_U32(ctx, 31, 0x2E8078u);
    ctx->pc = 0x2E8074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8070u;
    // 0x2e8074: 0x3c0482d  daddu       $t1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E74C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E74C0u, 0x2E8070u, 0x2E8078u)) {
        return;
    }
    ctx->pc = 0x2E8078u;
label_2e8078:
    // 0x2e8078: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x2e8078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x2e807c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2e807cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e8080: 0xa3a50001  sb          $a1, 0x1($sp)
    ctx->pc = 0x2e8080u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x2e8084: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x2e8084u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8088: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x2e8088u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2e808c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2e808cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2e8090: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x2e8090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2e8094: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x2e8094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2e8098: 0x6ba7000f  ldl         $a3, 0xF($sp)
    ctx->pc = 0x2e8098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2e809c: 0x6fa70008  ldr         $a3, 0x8($sp)
    ctx->pc = 0x2e809cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2e80a0: 0xb2460007  sdl         $a2, 0x7($s2)
    ctx->pc = 0x2e80a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e80a4: 0xb6460000  sdr         $a2, 0x0($s2)
    ctx->pc = 0x2e80a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e80a8: 0xb247000f  sdl         $a3, 0xF($s2)
    ctx->pc = 0x2e80a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e80ac: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x2e80acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e80b0: 0xb6470008  sdr         $a3, 0x8($s2)
    ctx->pc = 0x2e80b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e80b4: 0x1040ffc6  beqz        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x2E80B4u;
    {
        const bool branch_taken_0x2e80b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E80B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E80B4u;
        // 0x2e80b8: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e80b4) {
            ctx->pc = 0x2E7FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7fd0;
        }
    }
    ctx->pc = 0x2E80BCu;
label_2e80bc:
    // 0x2e80bc: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x2e80bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2e80c0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2e80c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e80c4: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x2e80c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2e80c8: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x2e80c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2e80cc: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x2e80ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e80d0: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x2e80d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e80d4: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x2e80d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e80d8: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x2e80d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e80dc: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x2e80dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e80e0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2e80e0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e80e4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2e80e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e80e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E80E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E80ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E80E8u;
        // 0x2e80ec: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E80E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E80F0u;
}
