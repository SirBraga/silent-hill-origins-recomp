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

// Function: sub_0021B060
// Address: 0x21b060 - 0x21b1b0
void sub_0021B060_0x21b060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B060_0x21b060");
#endif

    switch (ctx->pc) {
        case 0x21b090u: goto label_21b090;
        case 0x21b0a8u: goto label_21b0a8;
        case 0x21b0b0u: goto label_21b0b0;
        case 0x21b0f0u: goto label_21b0f0;
        case 0x21b0f8u: goto label_21b0f8;
        default: break;
    }

    ctx->pc = 0x21b060u;

    // 0x21b060: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x21b060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x21b064: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x21b064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21b068: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x21b068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x21b06c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21b06cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b070: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x21b070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x21b074: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x21b074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x21b078: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x21b078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x21b07c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21b07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x21b080: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x21b080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x21b084: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21b084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21b088: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x21B088u;
    SET_GPR_U32(ctx, 31, 0x21B090u);
    ctx->pc = 0x21B08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B088u;
    // 0x21b08c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x21B088u, 0x21B090u)) {
        return;
    }
    ctx->pc = 0x21B090u;
label_21b090:
    // 0x21b090: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x21b090u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b094: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x21b094u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21b098: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x21b098u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
    // 0x21b09c: 0x1220003a  beqz        $s1, . + 4 + (0x3A << 2)
    ctx->pc = 0x21B09Cu;
    {
        const bool branch_taken_0x21b09c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B09Cu;
        // 0x21b0a0: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b09c) {
            ctx->pc = 0x21B188u;
            goto label_21b188;
        }
    }
    ctx->pc = 0x21B0A4u;
    // 0x21b0a4: 0x0  nop
    ctx->pc = 0x21b0a4u;
    // NOP
label_21b0a8:
    // 0x21b0a8: 0xc086cb6  jal         func_21B2D8
    ctx->pc = 0x21B0A8u;
    SET_GPR_U32(ctx, 31, 0x21B0B0u);
    ctx->pc = 0x21B2D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21B2D8u, 0x21B0A8u, 0x21B0B0u)) {
        return;
    }
    ctx->pc = 0x21B0B0u;
label_21b0b0:
    // 0x21b0b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x21b0b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b0b4: 0x56400003  bnel        $s2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x21B0B4u;
    {
        const bool branch_taken_0x21b0b4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b0b4) {
            ctx->pc = 0x21B0B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B0B4u;
            // 0x21b0b8: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B0C4u;
            goto label_21b0c4;
        }
    }
    ctx->pc = 0x21B0BCu;
    // 0x21b0bc: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x21B0BCu;
    {
        const bool branch_taken_0x21b0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B0BCu;
        // 0x21b0c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b0bc) {
            ctx->pc = 0x21B15Cu;
            goto label_21b15c;
        }
    }
    ctx->pc = 0x21B0C4u;
label_21b0c4:
    // 0x21b0c4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x21b0c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b0c8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x21b0c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b0cc: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x21b0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x21b0d0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21b0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21b0d4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x21b0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x21b0d8: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x21b0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x21b0dc: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x21b0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x21b0e0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x21b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x21b0e4: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x21B0E4u;
    {
        const bool branch_taken_0x21b0e4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x21B0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B0E4u;
        // 0x21b0e8: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b0e4) {
            ctx->pc = 0x21B158u;
            goto label_21b158;
        }
    }
    ctx->pc = 0x21B0ECu;
    // 0x21b0ec: 0x0  nop
    ctx->pc = 0x21b0ecu;
    // NOP
label_21b0f0:
    // 0x21b0f0: 0xc086cd2  jal         func_21B348
    ctx->pc = 0x21B0F0u;
    SET_GPR_U32(ctx, 31, 0x21B0F8u);
    ctx->pc = 0x21B348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21B348u, 0x21B0F0u, 0x21B0F8u)) {
        return;
    }
    ctx->pc = 0x21B0F8u;
label_21b0f8:
    // 0x21b0f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x21b0f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b0fc: 0x50600017  beql        $v1, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x21B0FCu;
    {
        const bool branch_taken_0x21b0fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b0fc) {
            ctx->pc = 0x21B100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B0FCu;
            // 0x21b100: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B15Cu;
            goto label_21b15c;
        }
    }
    ctx->pc = 0x21B104u;
    // 0x21b104: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x21b104u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x21b108: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x21b108u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x21b10c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x21b10cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x21b110: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x21b110u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21b114: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x21b114u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21b118: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x21b118u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x21b11c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x21b11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x21b120: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x21B120u;
    {
        const bool branch_taken_0x21b120 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B120u;
        // 0x21b124: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b120) {
            ctx->pc = 0x21B134u;
            goto label_21b134;
        }
    }
    ctx->pc = 0x21B128u;
    // 0x21b128: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x21b128u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x21b12c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21B12Cu;
    {
        const bool branch_taken_0x21b12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B12Cu;
        // 0x21b130: 0xac630010  sw          $v1, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b12c) {
            ctx->pc = 0x21B140u;
            goto label_21b140;
        }
    }
    ctx->pc = 0x21B134u;
label_21b134:
    // 0x21b134: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x21b134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x21b138: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x21b138u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x21b13c: 0xae830010  sw          $v1, 0x10($s4)
    ctx->pc = 0x21b13cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 3));
label_21b140:
    // 0x21b140: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x21b140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x21b144: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x21b144u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x21b148: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x21b148u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b14c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x21b14cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21b150: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x21B150u;
    {
        const bool branch_taken_0x21b150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B150u;
        // 0x21b154: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b150) {
            ctx->pc = 0x21B0F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b0f0;
        }
    }
    ctx->pc = 0x21B158u;
label_21b158:
    // 0x21b158: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x21b158u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21b15c:
    // 0x21b15c: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x21B15Cu;
    {
        const bool branch_taken_0x21b15c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b15c) {
            ctx->pc = 0x21B160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B15Cu;
            // 0x21b160: 0x8e31000c  lw          $s1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B180u;
            goto label_21b180;
        }
    }
    ctx->pc = 0x21B164u;
    // 0x21b164: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x21b164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x21b168: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x21b168u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x21b16c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x21b16cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x21b170: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x21b170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x21b174: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21b174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21b178: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x21b178u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x21b17c: 0x8e31000c  lw          $s1, 0xC($s1)
    ctx->pc = 0x21b17cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_21b180:
    // 0x21b180: 0x1620ffc9  bnez        $s1, . + 4 + (-0x37 << 2)
    ctx->pc = 0x21B180u;
    {
        const bool branch_taken_0x21b180 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b180) {
            ctx->pc = 0x21B0A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b0a8;
        }
    }
    ctx->pc = 0x21B188u;
label_21b188:
    // 0x21b188: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x21b188u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b18c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x21b18cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21b190: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x21b190u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21b194: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x21b194u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21b198: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21b198u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21b19c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x21b19cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21b1a0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x21b1a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b1a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21b1a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x21B1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B1A8u;
        // 0x21b1ac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B1A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B1B0u;
}
