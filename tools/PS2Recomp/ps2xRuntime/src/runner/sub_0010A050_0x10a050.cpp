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

// Function: sub_0010A050
// Address: 0x10a050 - 0x10a208
void sub_0010A050_0x10a050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A050_0x10a050");
#endif

    switch (ctx->pc) {
        case 0x10a080u: goto label_10a080;
        case 0x10a098u: goto label_10a098;
        case 0x10a120u: goto label_10a120;
        case 0x10a140u: goto label_10a140;
        case 0x10a170u: goto label_10a170;
        case 0x10a1d8u: goto label_10a1d8;
        default: break;
    }

    ctx->pc = 0x10a050u;

label_10a050:
    // 0x10a050: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x10a050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x10a054: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x10a054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x10a058: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10a058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a05c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x10a05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x10a060: 0xb11023  subu        $v0, $a1, $s1
    ctx->pc = 0x10a060u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x10a064: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x10a064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x10a068: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x10a068u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x10a06c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10a06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10a070: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x10a070u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x10a074: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x10A074u;
    {
        const bool branch_taken_0x10a074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A074u;
        // 0x10a078: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a074) {
            ctx->pc = 0x10A1F0u;
            goto label_10a1f0;
        }
    }
    ctx->pc = 0x10A07Cu;
    // 0x10a07c: 0x0  nop
    ctx->pc = 0x10a07cu;
    // NOP
label_10a080:
    // 0x10a080: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x10A080u;
    {
        const bool branch_taken_0x10a080 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A080u;
        // 0x10a084: 0xb11023  subu        $v0, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a080) {
            ctx->pc = 0x10A0A0u;
            goto label_10a0a0;
        }
    }
    ctx->pc = 0x10A088u;
    // 0x10a088: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10a088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a08c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x10a08cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a090: 0xc04279e  jal         func_109E78
    ctx->pc = 0x10A090u;
    SET_GPR_U32(ctx, 31, 0x10A098u);
    ctx->pc = 0x10A094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A090u;
    // 0x10a094: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109E78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x109E78u, 0x10A090u, 0x10A098u)) {
        return;
    }
    ctx->pc = 0x10A098u;
label_10a098:
    // 0x10a098: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x10A098u;
    {
        const bool branch_taken_0x10a098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A098u;
        // 0x10a09c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a098) {
            ctx->pc = 0x10A1F4u;
            goto label_10a1f4;
        }
    }
    ctx->pc = 0x10A0A0u;
label_10a0a0:
    // 0x10a0a0: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x10a0a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10a0a4: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x10a0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x10a0a8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x10a0a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x10a0ac: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x10a0acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x10a0b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10a0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10a0b4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x10a0b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x10a0b8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x10a0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x10a0bc: 0x513021  addu        $a2, $v0, $s1
    ctx->pc = 0x10a0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x10a0c0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x10a0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10a0c4: 0xe4102b  sltu        $v0, $a3, $a0
    ctx->pc = 0x10a0c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x10a0c8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10A0C8u;
    {
        const bool branch_taken_0x10a0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A0C8u;
        // 0x10a0cc: 0x24a8fff8  addiu       $t0, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a0c8) {
            ctx->pc = 0x10A0ECu;
            goto label_10a0ec;
        }
    }
    ctx->pc = 0x10A0D0u;
    // 0x10a0d0: 0x8ca3fff8  lw          $v1, -0x8($a1)
    ctx->pc = 0x10a0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
    // 0x10a0d4: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x10a0d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x10a0d8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x10A0D8u;
    {
        const bool branch_taken_0x10a0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A0D8u;
        // 0x10a0dc: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a0d8) {
            ctx->pc = 0x10A108u;
            goto label_10a108;
        }
    }
    ctx->pc = 0x10A0E0u;
    // 0x10a0e0: 0xe3102b  sltu        $v0, $a3, $v1
    ctx->pc = 0x10a0e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x10a0e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10A0E4u;
    {
        const bool branch_taken_0x10a0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A0E4u;
        // 0x10a0e8: 0x222400a  movz        $t0, $s1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a0e4) {
            ctx->pc = 0x10A104u;
            goto label_10a104;
        }
    }
    ctx->pc = 0x10A0ECu;
label_10a0ec:
    // 0x10a0ec: 0x8ca3fff8  lw          $v1, -0x8($a1)
    ctx->pc = 0x10a0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
    // 0x10a0f0: 0xe3102b  sltu        $v0, $a3, $v1
    ctx->pc = 0x10a0f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x10a0f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10A0F4u;
    {
        const bool branch_taken_0x10a0f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A0F4u;
        // 0x10a0f8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a0f4) {
            ctx->pc = 0x10A108u;
            goto label_10a108;
        }
    }
    ctx->pc = 0x10A0FCu;
    // 0x10a0fc: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x10a0fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x10a100: 0xc2400a  movz        $t0, $a2, $v0
    ctx->pc = 0x10a100u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6));
label_10a104:
    // 0x10a104: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x10a104u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_10a108:
    // 0x10a108: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x10a108u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x10a10c: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x10a10cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x10a110: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x10a110u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10a114: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x10a114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a118: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x10a118u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10a11c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10a11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_10a120:
    // 0x10a120: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x10a120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a124: 0x2484fff8  addiu       $a0, $a0, -0x8
    ctx->pc = 0x10a124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x10a128: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10a128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10a12c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x10a12cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x10a130: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10A130u;
    {
        const bool branch_taken_0x10a130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A130u;
        // 0x10a134: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a130) {
            ctx->pc = 0x10A158u;
            goto label_10a158;
        }
    }
    ctx->pc = 0x10A138u;
    // 0x10a138: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x10a138u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x10a13c: 0x0  nop
    ctx->pc = 0x10a13cu;
    // NOP
label_10a140:
    // 0x10a140: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10a140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10a144: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x10a144u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x10a148: 0x0  nop
    ctx->pc = 0x10a148u;
    // NOP
    // 0x10a14c: 0x0  nop
    ctx->pc = 0x10a14cu;
    // NOP
    // 0x10a150: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x10A150u;
    {
        const bool branch_taken_0x10a150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a150) {
            ctx->pc = 0x10A154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A150u;
            // 0x10a154: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a140;
        }
    }
    ctx->pc = 0x10A158u;
label_10a158:
    // 0x10a158: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10a158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10a15c: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x10a15cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10a160: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10A160u;
    {
        const bool branch_taken_0x10a160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A160u;
        // 0x10a164: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a160) {
            ctx->pc = 0x10A188u;
            goto label_10a188;
        }
    }
    ctx->pc = 0x10A168u;
    // 0x10a168: 0x2484fff8  addiu       $a0, $a0, -0x8
    ctx->pc = 0x10a168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x10a16c: 0x0  nop
    ctx->pc = 0x10a16cu;
    // NOP
label_10a170:
    // 0x10a170: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10a170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10a174: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x10a174u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10a178: 0x0  nop
    ctx->pc = 0x10a178u;
    // NOP
    // 0x10a17c: 0x0  nop
    ctx->pc = 0x10a17cu;
    // NOP
    // 0x10a180: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x10A180u;
    {
        const bool branch_taken_0x10a180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a180) {
            ctx->pc = 0x10A184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A180u;
            // 0x10a184: 0x2484fff8  addiu       $a0, $a0, -0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a170;
        }
    }
    ctx->pc = 0x10A188u;
label_10a188:
    // 0x10a188: 0x204102b  sltu        $v0, $s0, $a0
    ctx->pc = 0x10a188u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x10a18c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x10A18Cu;
    {
        const bool branch_taken_0x10a18c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a18c) {
            ctx->pc = 0x10A190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A18Cu;
            // 0x10a190: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A1CCu;
            goto label_10a1cc;
        }
    }
    ctx->pc = 0x10A194u;
    // 0x10a194: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x10a194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x10a198: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x10a198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x10a19c: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x10a19cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10a1a0: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x10a1a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10a1a4: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x10a1a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x10a1a8: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x10a1a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x10a1ac: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x10a1acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10a1b0: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x10a1b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10a1b4: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x10a1b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x10a1b8: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x10a1b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x10a1bc: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x10a1bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10a1c0: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x10a1c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10a1c4: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x10A1C4u;
    {
        const bool branch_taken_0x10a1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A1C4u;
        // 0x10a1c8: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a1c4) {
            ctx->pc = 0x10A120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a120;
        }
    }
    ctx->pc = 0x10A1CCu;
label_10a1cc:
    // 0x10a1cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10a1ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a1d0: 0xc042814  jal         func_10A050
    ctx->pc = 0x10A1D0u;
    SET_GPR_U32(ctx, 31, 0x10A1D8u);
    ctx->pc = 0x10A1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A1D0u;
    // 0x10a1d4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A050u;
    goto label_10a050;
    ctx->pc = 0x10A1D8u;
label_10a1d8:
    // 0x10a1d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10a1d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a1dc: 0xb11023  subu        $v0, $a1, $s1
    ctx->pc = 0x10a1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x10a1e0: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x10a1e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x10a1e4: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x10a1e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x10a1e8: 0x1040ffa5  beqz        $v0, . + 4 + (-0x5B << 2)
    ctx->pc = 0x10A1E8u;
    {
        const bool branch_taken_0x10a1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a1e8) {
            ctx->pc = 0x10A080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a080;
        }
    }
    ctx->pc = 0x10A1F0u;
label_10a1f0:
    // 0x10a1f0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x10a1f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_10a1f4:
    // 0x10a1f4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x10a1f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10a1f8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x10a1f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a1fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10a1fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a200: 0x3e00008  jr          $ra
    ctx->pc = 0x10A200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A200u;
        // 0x10a204: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A208u;
}
