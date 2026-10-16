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

// Function: sub_0022EF58
// Address: 0x22ef58 - 0x22f4f8
void sub_0022EF58_0x22ef58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022EF58_0x22ef58");
#endif

    switch (ctx->pc) {
        case 0x22ef78u: goto label_22ef78;
        case 0x22f034u: goto label_22f034;
        case 0x22f250u: goto label_22f250;
        case 0x22f388u: goto label_22f388;
        case 0x22f4d8u: goto label_22f4d8;
        default: break;
    }

    ctx->pc = 0x22ef58u;

    // 0x22ef58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22ef58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22ef5c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22ef5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x22ef60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22ef60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22ef64: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22ef64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ef68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22ef68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22ef6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22ef6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ef70: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x22ef70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x22ef74: 0x8c843ef4  lw          $a0, 0x3EF4($a0)
    ctx->pc = 0x22ef74u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B3EF4u));
label_22ef78:
    // 0x22ef78: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x22ef78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x22ef7c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x22ef7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x22ef80: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x22ef80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x22ef84: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x22ef84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ef88: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x22ef88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x22ef8c: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x22ef8cu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x22ef90: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x22ef90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x22ef94: 0x10e000fc  beqz        $a3, . + 4 + (0xFC << 2)
    ctx->pc = 0x22EF94u;
    {
        const bool branch_taken_0x22ef94 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF94u;
        // 0x22ef98: 0x43800b  movn        $s0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ef94) {
            ctx->pc = 0x22F388u;
            goto label_22f388;
        }
    }
    ctx->pc = 0x22EF9Cu;
    // 0x22ef9c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x22ef9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x22efa0: 0x24031101  addiu       $v1, $zero, 0x1101
    ctx->pc = 0x22efa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4353));
    // 0x22efa4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x22efa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x22efa8: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x22efa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x22efac: 0x144300ef  bne         $v0, $v1, . + 4 + (0xEF << 2)
    ctx->pc = 0x22EFACu;
    {
        const bool branch_taken_0x22efac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22EFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EFACu;
        // 0x22efb0: 0x8f8690bc  lw          $a2, -0x6F44($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938812)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22efac) {
            ctx->pc = 0x22F36Cu;
            goto label_22f36c;
        }
    }
    ctx->pc = 0x22EFB4u;
    // 0x22efb4: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x22efb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x22efb8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22efb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22efbc: 0x8c633ea8  lw          $v1, 0x3EA8($v1)
    ctx->pc = 0x22efbcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3EA8u));
    // 0x22efc0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22efc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22efc4: 0x8c423eac  lw          $v0, 0x3EAC($v0)
    ctx->pc = 0x22efc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EACu));
    // 0x22efc8: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x22efc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x22efcc: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x22efccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x22efd0: 0x8c843ed8  lw          $a0, 0x3ED8($a0)
    ctx->pc = 0x22efd0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B3ED8u));
    // 0x22efd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22efd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22efd8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x22efd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x22efdc: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x22efdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x22efe0: 0x104000e2  beqz        $v0, . + 4 + (0xE2 << 2)
    ctx->pc = 0x22EFE0u;
    {
        const bool branch_taken_0x22efe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EFE0u;
        // 0x22efe4: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22efe0) {
            ctx->pc = 0x22F36Cu;
            goto label_22f36c;
        }
    }
    ctx->pc = 0x22EFE8u;
    // 0x22efe8: 0x6a1021  addu        $v0, $v1, $t2
    ctx->pc = 0x22efe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x22efec: 0x2c422001  sltiu       $v0, $v0, 0x2001
    ctx->pc = 0x22efecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8193) ? 1 : 0);
    // 0x22eff0: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x22EFF0u;
    {
        const bool branch_taken_0x22eff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EFF0u;
        // 0x22eff4: 0x8f878e3c  lw          $a3, -0x71C4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eff0) {
            ctx->pc = 0x22F120u;
            goto label_22f120;
        }
    }
    ctx->pc = 0x22EFF8u;
    // 0x22eff8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22eff8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22effc: 0x66480b  movn        $t1, $v1, $a2
    ctx->pc = 0x22effcu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3));
    // 0x22f000: 0x11200047  beqz        $t1, . + 4 + (0x47 << 2)
    ctx->pc = 0x22F000u;
    {
        const bool branch_taken_0x22f000 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f000) {
            ctx->pc = 0x22F120u;
            goto label_22f120;
        }
    }
    ctx->pc = 0x22F008u;
    // 0x22f008: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x22f008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x22f00c: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x22f00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x22f010: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22f010u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x22f014: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x22f014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x22f018: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x22F018u;
    {
        const bool branch_taken_0x22f018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F018u;
        // 0x22f01c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f018) {
            ctx->pc = 0x22F050u;
            goto label_22f050;
        }
    }
    ctx->pc = 0x22F020u;
    // 0x22f020: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x22f020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22f024: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x22f024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x22f028: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x22f028u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x22f02c: 0xf  sync
    ctx->pc = 0x22f02cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x22f030: 0x40f  sync.p
    ctx->pc = 0x22f030u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_22f034:
    // 0x22f034: 0x0  nop
    ctx->pc = 0x22f034u;
    // NOP
    // 0x22f038: 0x0  nop
    ctx->pc = 0x22f038u;
    // NOP
    // 0x22f03c: 0x0  nop
    ctx->pc = 0x22f03cu;
    // NOP
    // 0x22f040: 0x0  nop
    ctx->pc = 0x22f040u;
    // NOP
    // 0x22f044: 0x0  nop
    ctx->pc = 0x22f044u;
    // NOP
    // 0x22f048: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x22F048u;
    {
        const bool branch_taken_0x22f048 = (false);
        if (branch_taken_0x22f048) {
            ctx->pc = 0x22F034u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22f034;
        }
    }
    ctx->pc = 0x22F050u;
label_22f050:
    // 0x22f050: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x22f050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x22f054: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x22f054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22f058: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x22f058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x22f05c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x22f05cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x22f060: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x22f060u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 6)); // MMIO: 0x1000e010
    // 0x22f064: 0x3484d080  ori         $a0, $a0, 0xD080
    ctx->pc = 0x22f064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53376);
    // 0x22f068: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x22f068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x22f06c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x22f06cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x22f070: 0x3c08006b  lui         $t0, 0x6B
    ctx->pc = 0x22f070u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)107 << 16));
    // 0x22f074: 0x8d083ea8  lw          $t0, 0x3EA8($t0)
    ctx->pc = 0x22f074u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x6B3EA8u));
    // 0x22f078: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x22f078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x22f07c: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x22f07cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x22f080: 0x92902  srl         $a1, $t1, 4
    ctx->pc = 0x22f080u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 9), 4));
    // 0x22f084: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x22f084u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x22f088: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x22f088u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x22f08c: 0x8ce73eac  lw          $a3, 0x3EAC($a3)
    ctx->pc = 0x22f08cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x6B3EACu));
    // 0x22f090: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x22f090u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x22f094: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x22f094u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x22f098: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x22f098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x22f09c: 0xac26d000  sw          $a2, -0x3000($at)
    ctx->pc = 0x22f09cu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 6)); // MMIO: 0x1000d000
    // 0x22f0a0: 0xf  sync
    ctx->pc = 0x22f0a0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x22f0a4: 0x40f  sync.p
    ctx->pc = 0x22f0a4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x22f0a8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x22f0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x22f0ac: 0x8c844164  lw          $a0, 0x4164($a0)
    ctx->pc = 0x22f0acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4164u));
    // 0x22f0b0: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x22F0B0u;
    {
        const bool branch_taken_0x22f0b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F0B0u;
        // 0x22f0b4: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f0b0) {
            ctx->pc = 0x22F0E8u;
            goto label_22f0e8;
        }
    }
    ctx->pc = 0x22F0B8u;
    // 0x22f0b8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x22f0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x22f0bc: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x22f0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x22f0c0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x22f0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x22f0c4: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x22F0C4u;
    {
        const bool branch_taken_0x22f0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22f0c4) {
            ctx->pc = 0x22F0C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F0C4u;
            // 0x22f0c8: 0x8f828e3c  lw          $v0, -0x71C4($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F0F0u;
            goto label_22f0f0;
        }
    }
    ctx->pc = 0x22F0CCu;
    // 0x22f0cc: 0x881023  subu        $v0, $a0, $t0
    ctx->pc = 0x22f0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x22f0d0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x22f0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x22f0d4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x22f0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x22f0d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22f0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22f0dc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22f0dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22f0e0: 0xac224164  sw          $v0, 0x4164($at)
    ctx->pc = 0x22f0e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4164u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4164u, _value); } while (0);
    // 0x22f0e4: 0x0  nop
    ctx->pc = 0x22f0e4u;
    // NOP
label_22f0e8:
    // 0x22f0e8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22f0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22f0ec: 0x8c423eac  lw          $v0, 0x3EAC($v0)
    ctx->pc = 0x22f0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EACu));
label_22f0f0:
    // 0x22f0f0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22f0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22f0f4: 0x8c633ea8  lw          $v1, 0x3EA8($v1)
    ctx->pc = 0x22f0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3EA8u));
    // 0x22f0f8: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x22f0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x22f0fc: 0x38632000  xori        $v1, $v1, 0x2000
    ctx->pc = 0x22f0fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8192);
    // 0x22f100: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22f100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22f104: 0xac223eac  sw          $v0, 0x3EAC($at)
    ctx->pc = 0x22f104u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3EACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EACu, _value); } while (0);
    // 0x22f108: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22f108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22f10c: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x22f10cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x22f110: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22f110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22f114: 0xac233ea8  sw          $v1, 0x3EA8($at)
    ctx->pc = 0x22f114u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3EA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EA8u, _value); } while (0);
    // 0x22f118: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x22f118u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x22f11c: 0x8ce73eac  lw          $a3, 0x3EAC($a3)
    ctx->pc = 0x22f11cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x6B3EACu));
label_22f120:
    // 0x22f120: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x22f120u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x22f124: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x22f124u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x22f128: 0x8cc6412c  lw          $a2, 0x412C($a2)
    ctx->pc = 0x22f128u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x22f12c: 0xea1021  addu        $v0, $a3, $t2
    ctx->pc = 0x22f12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x22f130: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x22f130u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x22f134: 0x8c843ea8  lw          $a0, 0x3EA8($a0)
    ctx->pc = 0x22f134u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B3EA8u));
    // 0x22f138: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x22f138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x22f13c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x22f13cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x22f140: 0x8ca53ef4  lw          $a1, 0x3EF4($a1)
    ctx->pc = 0x22f140u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B3EF4u));
    // 0x22f144: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x22f144u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22f148: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22f148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22f14c: 0xac223edc  sw          $v0, 0x3EDC($at)
    ctx->pc = 0x22f14cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3EDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EDCu, _value); } while (0);
    // 0x22f150: 0xa81824  and         $v1, $a1, $t0
    ctx->pc = 0x22f150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x22f154: 0x107100e2  beq         $v1, $s1, . + 4 + (0xE2 << 2)
    ctx->pc = 0x22F154u;
    {
        const bool branch_taken_0x22f154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x22F158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F154u;
        // 0x22f158: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f154) {
            ctx->pc = 0x22F4E0u;
            goto label_22f4e0;
        }
    }
    ctx->pc = 0x22F15Cu;
    // 0x22f15c: 0x111027  nor         $v0, $zero, $s1
    ctx->pc = 0x22f15cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 17)));
    // 0x22f160: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x22f160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x22f164: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x22f164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x22f168: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x22F168u;
    {
        const bool branch_taken_0x22f168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F168u;
        // 0x22f16c: 0x8f858e80  lw          $a1, -0x7180($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f168) {
            ctx->pc = 0x22F1E8u;
            goto label_22f1e8;
        }
    }
    ctx->pc = 0x22F170u;
    // 0x22f170: 0xc41823  subu        $v1, $a2, $a0
    ctx->pc = 0x22f170u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x22f174: 0xe51023  subu        $v0, $a3, $a1
    ctx->pc = 0x22f174u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x22f178: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22f178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22f17c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x22f17cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x22f180: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x22f180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x22f184: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x22F184u;
    {
        const bool branch_taken_0x22f184 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F184u;
        // 0x22f188: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f184) {
            ctx->pc = 0x22F1B8u;
            goto label_22f1b8;
        }
    }
    ctx->pc = 0x22F18Cu;
    // 0x22f18c: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x22f18cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x22f190: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x22f190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x22f194: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x22f194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x22f198: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x22f198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22f19c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x22f19cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x22f1a0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x22f1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x22f1a4: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x22f1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x22f1a8: 0x70621b89  pcpyld      $v1, $v1, $v0
    ctx->pc = 0x22f1a8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x22f1ac: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x22f1acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x22f1b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22F1B0u;
    {
        const bool branch_taken_0x22f1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F1B0u;
        // 0x22f1b4: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f1b0) {
            ctx->pc = 0x22F1C4u;
            goto label_22f1c4;
        }
    }
    ctx->pc = 0x22F1B8u;
label_22f1b8:
    // 0x22f1b8: 0x24e2fff0  addiu       $v0, $a3, -0x10
    ctx->pc = 0x22f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
    // 0x22f1bc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22f1bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22f1c0: 0xac223eac  sw          $v0, 0x3EAC($at)
    ctx->pc = 0x22f1c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3EACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EACu, _value); } while (0);
label_22f1c4:
    // 0x22f1c4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22f1c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22f1c8: 0xac203ef0  sw          $zero, 0x3EF0($at)
    ctx->pc = 0x22f1c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B3EF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EF0u, _value); } while (0);
    // 0x22f1cc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22f1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22f1d0: 0x8c633ef4  lw          $v1, 0x3EF4($v1)
    ctx->pc = 0x22f1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3EF4u));
    // 0x22f1d4: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x22f1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x22f1d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x22f1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x22f1dc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x22f1dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22f1e0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22f1e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22f1e4: 0xac233ef4  sw          $v1, 0x3EF4($at)
    ctx->pc = 0x22f1e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3EF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EF4u, _value); } while (0);
label_22f1e8:
    // 0x22f1e8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22f1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22f1ec: 0x8c633ef4  lw          $v1, 0x3EF4($v1)
    ctx->pc = 0x22f1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3EF4u));
    // 0x22f1f0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22f1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x22f1f4: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x22f1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x22f1f8: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x22f1f8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x22f1fc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x22f1fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22f200: 0x106000a8  beqz        $v1, . + 4 + (0xA8 << 2)
    ctx->pc = 0x22F200u;
    {
        const bool branch_taken_0x22f200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F200u;
        // 0x22f204: 0x8f8390bc  lw          $v1, -0x6F44($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938812)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f200) {
            ctx->pc = 0x22F4A4u;
            goto label_22f4a4;
        }
    }
    ctx->pc = 0x22F208u;
    // 0x22f208: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F208u;
    {
        const bool branch_taken_0x22f208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F208u;
        // 0x22f20c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f208) {
            ctx->pc = 0x22F220u;
            goto label_22f220;
        }
    }
    ctx->pc = 0x22F210u;
    // 0x22f210: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22f210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22f214: 0x8c423ea8  lw          $v0, 0x3EA8($v0)
    ctx->pc = 0x22f214u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EA8u));
    // 0x22f218: 0x624823  subu        $t1, $v1, $v0
    ctx->pc = 0x22f218u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22f21c: 0x0  nop
    ctx->pc = 0x22f21cu;
    // NOP
label_22f220:
    // 0x22f220: 0x11200045  beqz        $t1, . + 4 + (0x45 << 2)
    ctx->pc = 0x22F220u;
    {
        const bool branch_taken_0x22f220 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F220u;
        // 0x22f224: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f220) {
            ctx->pc = 0x22F338u;
            goto label_22f338;
        }
    }
    ctx->pc = 0x22F228u;
    // 0x22f228: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x22f228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x22f22c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22f22cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x1000d000
    // 0x22f230: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x22f230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x22f234: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x22F234u;
    {
        const bool branch_taken_0x22f234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F234u;
        // 0x22f238: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f234) {
            ctx->pc = 0x22F270u;
            goto label_22f270;
        }
    }
    ctx->pc = 0x22F23Cu;
    // 0x22f23c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x22f23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22f240: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x22f240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x22f244: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x22f244u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x22f248: 0xf  sync
    ctx->pc = 0x22f248u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x22f24c: 0x40f  sync.p
    ctx->pc = 0x22f24cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_22f250:
    // 0x22f250: 0x0  nop
    ctx->pc = 0x22f250u;
    // NOP
    // 0x22f254: 0x0  nop
    ctx->pc = 0x22f254u;
    // NOP
    // 0x22f258: 0x0  nop
    ctx->pc = 0x22f258u;
    // NOP
    // 0x22f25c: 0x0  nop
    ctx->pc = 0x22f25cu;
    // NOP
    // 0x22f260: 0x0  nop
    ctx->pc = 0x22f260u;
    // NOP
    // 0x22f264: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x22F264u;
    {
        const bool branch_taken_0x22f264 = (false);
        if (branch_taken_0x22f264) {
            ctx->pc = 0x22F250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22f250;
        }
    }
    ctx->pc = 0x22F26Cu;
    // 0x22f26c: 0x0  nop
    ctx->pc = 0x22f26cu;
    // NOP
label_22f270:
    // 0x22f270: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x22f270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x22f274: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x22f274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22f278: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x22f278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x22f27c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x22f27cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x22f280: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x22f280u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 6)); // MMIO: 0x1000e010
    // 0x22f284: 0x3484d080  ori         $a0, $a0, 0xD080
    ctx->pc = 0x22f284u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53376);
    // 0x22f288: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x22f288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x22f28c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x22f28cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x22f290: 0x3c08006b  lui         $t0, 0x6B
    ctx->pc = 0x22f290u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)107 << 16));
    // 0x22f294: 0x8d083ea8  lw          $t0, 0x3EA8($t0)
    ctx->pc = 0x22f294u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x6B3EA8u));
    // 0x22f298: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x22f298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x22f29c: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x22f29cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x22f2a0: 0x92902  srl         $a1, $t1, 4
    ctx->pc = 0x22f2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 9), 4));
    // 0x22f2a4: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x22f2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x22f2a8: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x22f2a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x22f2ac: 0x8ce73eac  lw          $a3, 0x3EAC($a3)
    ctx->pc = 0x22f2acu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x6B3EACu));
    // 0x22f2b0: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x22f2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x22f2b4: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x22f2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x22f2b8: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x22f2b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x22f2bc: 0xac26d000  sw          $a2, -0x3000($at)
    ctx->pc = 0x22f2bcu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 6)); // MMIO: 0x1000d000
    // 0x22f2c0: 0xf  sync
    ctx->pc = 0x22f2c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x22f2c4: 0x40f  sync.p
    ctx->pc = 0x22f2c4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x22f2c8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x22f2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x22f2cc: 0x8c844164  lw          $a0, 0x4164($a0)
    ctx->pc = 0x22f2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4164u));
    // 0x22f2d0: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x22F2D0u;
    {
        const bool branch_taken_0x22f2d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F2D0u;
        // 0x22f2d4: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f2d0) {
            ctx->pc = 0x22F308u;
            goto label_22f308;
        }
    }
    ctx->pc = 0x22F2D8u;
    // 0x22f2d8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x22f2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x22f2dc: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x22f2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x22f2e0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x22f2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x22f2e4: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x22F2E4u;
    {
        const bool branch_taken_0x22f2e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22F2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F2E4u;
        // 0x22f2e8: 0x8f828e3c  lw          $v0, -0x71C4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f2e4) {
            ctx->pc = 0x22F310u;
            goto label_22f310;
        }
    }
    ctx->pc = 0x22F2ECu;
    // 0x22f2ec: 0x881023  subu        $v0, $a0, $t0
    ctx->pc = 0x22f2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x22f2f0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x22f2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x22f2f4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x22f2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x22f2f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22f2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22f2fc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22f2fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22f300: 0xac224164  sw          $v0, 0x4164($at)
    ctx->pc = 0x22f300u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4164u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4164u, _value); } while (0);
    // 0x22f304: 0x0  nop
    ctx->pc = 0x22f304u;
    // NOP
label_22f308:
    // 0x22f308: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22f308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22f30c: 0x8c423eac  lw          $v0, 0x3EAC($v0)
    ctx->pc = 0x22f30cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EACu));
label_22f310:
    // 0x22f310: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22f310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22f314: 0x8c633ea8  lw          $v1, 0x3EA8($v1)
    ctx->pc = 0x22f314u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3EA8u));
    // 0x22f318: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x22f318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x22f31c: 0x38632000  xori        $v1, $v1, 0x2000
    ctx->pc = 0x22f31cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8192);
    // 0x22f320: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22f320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22f324: 0xac223eac  sw          $v0, 0x3EAC($at)
    ctx->pc = 0x22f324u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3EACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EACu, _value); } while (0);
    // 0x22f328: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22f328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22f32c: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x22f32cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x22f330: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22f330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22f334: 0xac233ea8  sw          $v1, 0x3EA8($at)
    ctx->pc = 0x22f334u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3EA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EA8u, _value); } while (0);
label_22f338:
    // 0x22f338: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22f338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22f33c: 0x8c423eac  lw          $v0, 0x3EAC($v0)
    ctx->pc = 0x22f33cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EACu));
    // 0x22f340: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x22f340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x22f344: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22f344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22f348: 0x8c633ef4  lw          $v1, 0x3EF4($v1)
    ctx->pc = 0x22f348u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3EF4u));
    // 0x22f34c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22f34cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22f350: 0xac223ef0  sw          $v0, 0x3EF0($at)
    ctx->pc = 0x22f350u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3EF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EF0u, _value); } while (0);
    // 0x22f354: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x22f354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x22f358: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x22f358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x22f35c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22f35cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22f360: 0xac223eac  sw          $v0, 0x3EAC($at)
    ctx->pc = 0x22f360u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3EACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EACu, _value); } while (0);
    // 0x22f364: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x22F364u;
    {
        const bool branch_taken_0x22f364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F364u;
        // 0x22f368: 0xaf838e84  sw          $v1, -0x717C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938244), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f364) {
            ctx->pc = 0x22F4A4u;
            goto label_22f4a4;
        }
    }
    ctx->pc = 0x22F36Cu;
label_22f36c:
    // 0x22f36c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22f36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x22f370: 0x72027  nor         $a0, $zero, $a3
    ctx->pc = 0x22f370u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 7)));
    // 0x22f374: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x22f374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x22f378: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x22f378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x22f37c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x22f37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x22f380: 0xc08b73a  jal         func_22DCE8
    ctx->pc = 0x22F380u;
    SET_GPR_U32(ctx, 31, 0x22F388u);
    ctx->pc = 0x22F384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F380u;
    // 0x22f384: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DCE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22DCE8u, 0x22F380u, 0x22F388u)) {
        return;
    }
    ctx->pc = 0x22F388u;
label_22f388:
    // 0x22f388: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22f388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22f38c: 0x8c423ee0  lw          $v0, 0x3EE0($v0)
    ctx->pc = 0x22f38cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EE0u));
    // 0x22f390: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x22f390u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x22f394: 0x8cc63ee4  lw          $a2, 0x3EE4($a2)
    ctx->pc = 0x22f394u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B3EE4u));
    // 0x22f398: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x22f398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x22f39c: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x22f39cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x22f3a0: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x22F3A0u;
    {
        const bool branch_taken_0x22f3a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3A0u;
        // 0x22f3a4: 0x8f858e6c  lw          $a1, -0x7194($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f3a0) {
            ctx->pc = 0x22F414u;
            goto label_22f414;
        }
    }
    ctx->pc = 0x22F3A8u;
    // 0x22f3a8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22f3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22f3ac: 0x8c423edc  lw          $v0, 0x3EDC($v0)
    ctx->pc = 0x22f3acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EDCu));
    // 0x22f3b0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x22f3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x22f3b4: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x22f3b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
    // 0x22f3b8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x22f3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x22f3bc: 0x8c843ed8  lw          $a0, 0x3ED8($a0)
    ctx->pc = 0x22f3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B3ED8u));
    // 0x22f3c0: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x22f3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x22f3c4: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x22f3c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x22f3c8: 0x24a30080  addiu       $v1, $a1, 0x80
    ctx->pc = 0x22f3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x22f3cc: 0x64202b  sltu        $a0, $v1, $a0
    ctx->pc = 0x22f3ccu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x22f3d0: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x22F3D0u;
    {
        const bool branch_taken_0x22f3d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3D0u;
        // 0x22f3d4: 0x24a20078  addiu       $v0, $a1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f3d0) {
            ctx->pc = 0x22F404u;
            goto label_22f404;
        }
    }
    ctx->pc = 0x22F3D8u;
    // 0x22f3d8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22f3d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22f3dc: 0xac233edc  sw          $v1, 0x3EDC($at)
    ctx->pc = 0x22f3dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3EDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EDCu, _value); } while (0);
    // 0x22f3e0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22f3e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22f3e4: 0xac223ee0  sw          $v0, 0x3EE0($at)
    ctx->pc = 0x22f3e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3EE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EE0u, _value); } while (0);
    // 0x22f3e8: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x22f3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x22f3ec: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x22f3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x22f3f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22f3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22f3f4: 0x8c423ee4  lw          $v0, 0x3EE4($v0)
    ctx->pc = 0x22f3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EE4u));
    // 0x22f3f8: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x22f3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x22f3fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22F3FCu;
    {
        const bool branch_taken_0x22f3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3FCu;
        // 0x22f400: 0xaf858e74  sw          $a1, -0x718C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938228), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f3fc) {
            ctx->pc = 0x22F40Cu;
            goto label_22f40c;
        }
    }
    ctx->pc = 0x22F404u;
label_22f404:
    // 0x22f404: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22F404u;
    {
        const bool branch_taken_0x22f404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F404u;
        // 0x22f408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f404) {
            ctx->pc = 0x22F414u;
            goto label_22f414;
        }
    }
    ctx->pc = 0x22F40Cu;
label_22f40c:
    // 0x22f40c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x22f40cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x22f410: 0x8ca53edc  lw          $a1, 0x3EDC($a1)
    ctx->pc = 0x22f410u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B3EDCu));
label_22f414:
    // 0x22f414: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x22f414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x22f418: 0x10a00024  beqz        $a1, . + 4 + (0x24 << 2)
    ctx->pc = 0x22F418u;
    {
        const bool branch_taken_0x22f418 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F418u;
        // 0x22f41c: 0x51800b  movn        $s0, $v0, $s1 (Delay Slot)
        if (GPR_U64(ctx, 17) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f418) {
            ctx->pc = 0x22F4ACu;
            goto label_22f4ac;
        }
    }
    ctx->pc = 0x22F420u;
    // 0x22f420: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x22f420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x22f424: 0x24a4007f  addiu       $a0, $a1, 0x7F
    ctx->pc = 0x22f424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    // 0x22f428: 0x3463ff80  ori         $v1, $v1, 0xFF80
    ctx->pc = 0x22f428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65408);
    // 0x22f42c: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x22f42cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x22f430: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x22f430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x22f434: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22f434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22f438: 0x8c423ed8  lw          $v0, 0x3ED8($v0)
    ctx->pc = 0x22f438u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3ED8u));
    // 0x22f43c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x22f43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x22f440: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x22f440u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x22f444: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x22F444u;
    {
        const bool branch_taken_0x22f444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f444) {
            ctx->pc = 0x22F448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F444u;
            // 0x22f448: 0x2604ffff  addiu       $a0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F4B0u;
            goto label_22f4b0;
        }
    }
    ctx->pc = 0x22F44Cu;
    // 0x22f44c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22f44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22f450: 0x8c423ea8  lw          $v0, 0x3EA8($v0)
    ctx->pc = 0x22f450u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EA8u));
    // 0x22f454: 0x24031101  addiu       $v1, $zero, 0x1101
    ctx->pc = 0x22f454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4353));
    // 0x22f458: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22f458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22f45c: 0xac253edc  sw          $a1, 0x3EDC($at)
    ctx->pc = 0x22f45cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B3EDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EDCu, _value); } while (0);
    // 0x22f460: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22f460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22f464: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x22f464u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x22f468: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22f468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22f46c: 0xac233ef4  sw          $v1, 0x3EF4($at)
    ctx->pc = 0x22f46cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3EF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EF4u, _value); } while (0);
    // 0x22f470: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22f470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22f474: 0xac243ee8  sw          $a0, 0x3EE8($at)
    ctx->pc = 0x22f474u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B3EE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EE8u, _value); } while (0);
    // 0x22f478: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x22F478u;
    {
        const bool branch_taken_0x22f478 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F478u;
        // 0x22f47c: 0xaf848e3c  sw          $a0, -0x71C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938172), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f478) {
            ctx->pc = 0x22F4A4u;
            goto label_22f4a4;
        }
    }
    ctx->pc = 0x22F480u;
    // 0x22f480: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22f480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x22f484: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x22f484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x22f488: 0x34421101  ori         $v0, $v0, 0x1101
    ctx->pc = 0x22f488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4353);
    // 0x22f48c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22f48cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22f490: 0xac233eac  sw          $v1, 0x3EAC($at)
    ctx->pc = 0x22f490u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3EACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EACu, _value); } while (0);
    // 0x22f494: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22f494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22f498: 0xac223ef4  sw          $v0, 0x3EF4($at)
    ctx->pc = 0x22f498u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3EF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EF4u, _value); } while (0);
    // 0x22f49c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22f49cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22f4a0: 0xac243ef0  sw          $a0, 0x3EF0($at)
    ctx->pc = 0x22f4a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B3EF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EF0u, _value); } while (0);
label_22f4a4:
    // 0x22f4a4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x22F4A4u;
    {
        const bool branch_taken_0x22f4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F4A4u;
        // 0x22f4a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f4a4) {
            ctx->pc = 0x22F4E0u;
            goto label_22f4e0;
        }
    }
    ctx->pc = 0x22F4ACu;
label_22f4ac:
    // 0x22f4ac: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x22f4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_22f4b0:
    // 0x22f4b0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22f4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22f4b4: 0x8c633ec8  lw          $v1, 0x3EC8($v1)
    ctx->pc = 0x22f4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3EC8u));
    // 0x22f4b8: 0x91800b  movn        $s0, $a0, $s1
    ctx->pc = 0x22f4b8u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4));
    // 0x22f4bc: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x22f4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x22f4c0: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x22f4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x22f4c4: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x22f4c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x22f4c8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F4C8u;
    {
        const bool branch_taken_0x22f4c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F4C8u;
        // 0x22f4cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f4c8) {
            ctx->pc = 0x22F4E0u;
            goto label_22f4e0;
        }
    }
    ctx->pc = 0x22F4D0u;
    // 0x22f4d0: 0xc08b848  jal         func_22E120
    ctx->pc = 0x22F4D0u;
    SET_GPR_U32(ctx, 31, 0x22F4D8u);
    ctx->pc = 0x22E120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E120u, 0x22F4D0u, 0x22F4D8u)) {
        return;
    }
    ctx->pc = 0x22F4D8u;
label_22f4d8:
    // 0x22f4d8: 0x1000fea7  b           . + 4 + (-0x159 << 2)
    ctx->pc = 0x22F4D8u;
    {
        const bool branch_taken_0x22f4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F4D8u;
        // 0x22f4dc: 0x8f848e84  lw          $a0, -0x717C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f4d8) {
            ctx->pc = 0x22EF78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ef78;
        }
    }
    ctx->pc = 0x22F4E0u;
label_22f4e0:
    // 0x22f4e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x22f4e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f4e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22f4e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f4e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22f4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x22F4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F4ECu;
        // 0x22f4f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F4F4u;
    // 0x22f4f4: 0x0  nop
    ctx->pc = 0x22f4f4u;
    // NOP
    ctx->pc = 0x22f4f8u;
}
