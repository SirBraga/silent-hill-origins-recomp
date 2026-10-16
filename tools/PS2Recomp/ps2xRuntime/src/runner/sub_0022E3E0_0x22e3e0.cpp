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

// Function: sub_0022E3E0
// Address: 0x22e3e0 - 0x22e5f8
void sub_0022E3E0_0x22e3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E3E0_0x22e3e0");
#endif

    switch (ctx->pc) {
        case 0x22e418u: goto label_22e418;
        case 0x22e450u: goto label_22e450;
        case 0x22e588u: goto label_22e588;
        default: break;
    }

    ctx->pc = 0x22e3e0u;

    // 0x22e3e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22e3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22e3e4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22e3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22e3e8: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x22e3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x22e3ec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22e3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22e3f0: 0x8c634160  lw          $v1, 0x4160($v1)
    ctx->pc = 0x22e3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4160u));
    // 0x22e3f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22e3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x22e3f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22e3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22e3fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22e3fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e400: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22e400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22e404: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22e404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22e408: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22E408u;
    {
        const bool branch_taken_0x22e408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E408u;
        // 0x22e40c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e408) {
            ctx->pc = 0x22E418u;
            goto label_22e418;
        }
    }
    ctx->pc = 0x22E410u;
    // 0x22e410: 0xc08b73a  jal         func_22DCE8
    ctx->pc = 0x22E410u;
    SET_GPR_U32(ctx, 31, 0x22E418u);
    ctx->pc = 0x22DCE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22DCE8u, 0x22E410u, 0x22E418u)) {
        return;
    }
    ctx->pc = 0x22E418u;
label_22e418:
    // 0x22e418: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22e418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22e41c: 0x8c423eb8  lw          $v0, 0x3EB8($v0)
    ctx->pc = 0x22e41cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EB8u));
    // 0x22e420: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x22E420u;
    {
        const bool branch_taken_0x22e420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E420u;
        // 0x22e424: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e420) {
            ctx->pc = 0x22E518u;
            goto label_22e518;
        }
    }
    ctx->pc = 0x22E428u;
    // 0x22e428: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x22e428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x22e42c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22e42cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x1000d000
    // 0x22e430: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x22e430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x22e434: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x22E434u;
    {
        const bool branch_taken_0x22e434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E434u;
        // 0x22e438: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e434) {
            ctx->pc = 0x22E470u;
            goto label_22e470;
        }
    }
    ctx->pc = 0x22E43Cu;
    // 0x22e43c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x22e43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22e440: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x22e440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x22e444: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x22e444u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x22e448: 0xf  sync
    ctx->pc = 0x22e448u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x22e44c: 0x40f  sync.p
    ctx->pc = 0x22e44cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_22e450:
    // 0x22e450: 0x0  nop
    ctx->pc = 0x22e450u;
    // NOP
    // 0x22e454: 0x0  nop
    ctx->pc = 0x22e454u;
    // NOP
    // 0x22e458: 0x0  nop
    ctx->pc = 0x22e458u;
    // NOP
    // 0x22e45c: 0x0  nop
    ctx->pc = 0x22e45cu;
    // NOP
    // 0x22e460: 0x0  nop
    ctx->pc = 0x22e460u;
    // NOP
    // 0x22e464: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x22E464u;
    {
        const bool branch_taken_0x22e464 = (false);
        if (branch_taken_0x22e464) {
            ctx->pc = 0x22E450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22e450;
        }
    }
    ctx->pc = 0x22E46Cu;
    // 0x22e46c: 0x0  nop
    ctx->pc = 0x22e46cu;
    // NOP
label_22e470:
    // 0x22e470: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22e470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22e474: 0x8c423eb4  lw          $v0, 0x3EB4($v0)
    ctx->pc = 0x22e474u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EB4u));
    // 0x22e478: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x22E478u;
    {
        const bool branch_taken_0x22e478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E478u;
        // 0x22e47c: 0x8f848e4c  lw          $a0, -0x71B4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e478) {
            ctx->pc = 0x22E4D0u;
            goto label_22e4d0;
        }
    }
    ctx->pc = 0x22E480u;
    // 0x22e480: 0x24021121  addiu       $v0, $zero, 0x1121
    ctx->pc = 0x22e480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4385));
    // 0x22e484: 0x24050122  addiu       $a1, $zero, 0x122
    ctx->pc = 0x22e484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
    // 0x22e488: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x22e488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x22e48c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22e48cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22e490: 0x8c633ebc  lw          $v1, 0x3EBC($v1)
    ctx->pc = 0x22e490u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3EBCu));
    // 0x22e494: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22e494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22e498: 0x8c423eb0  lw          $v0, 0x3EB0($v0)
    ctx->pc = 0x22e498u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EB0u));
    // 0x22e49c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x22e49cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x22e4a0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x22e4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x22e4a4: 0x8c843ebc  lw          $a0, 0x3EBC($a0)
    ctx->pc = 0x22e4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B3EBCu));
    // 0x22e4a8: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x22e4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x22e4ac: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22e4acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22e4b0: 0xac223ebc  sw          $v0, 0x3EBC($at)
    ctx->pc = 0x22e4b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3EBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EBCu, _value); } while (0);
    // 0x22e4b4: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x22e4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x22e4b8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22e4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22e4bc: 0x8c633ebc  lw          $v1, 0x3EBC($v1)
    ctx->pc = 0x22e4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3EBCu));
    // 0x22e4c0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22e4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22e4c4: 0x8c423eb4  lw          $v0, 0x3EB4($v0)
    ctx->pc = 0x22e4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EB4u));
    // 0x22e4c8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x22E4C8u;
    {
        const bool branch_taken_0x22e4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E4C8u;
        // 0x22e4cc: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e4c8) {
            ctx->pc = 0x22E4F8u;
            goto label_22e4f8;
        }
    }
    ctx->pc = 0x22E4D0u;
label_22e4d0:
    // 0x22e4d0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22e4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22e4d4: 0x8c423eb8  lw          $v0, 0x3EB8($v0)
    ctx->pc = 0x22e4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EB8u));
    // 0x22e4d8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22e4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22e4dc: 0x8c633ebc  lw          $v1, 0x3EBC($v1)
    ctx->pc = 0x22e4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3EBCu));
    // 0x22e4e0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x22e4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x22e4e4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x22e4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x22e4e8: 0x8c843ebc  lw          $a0, 0x3EBC($a0)
    ctx->pc = 0x22e4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B3EBCu));
    // 0x22e4ec: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22e4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22e4f0: 0x8c423eb0  lw          $v0, 0x3EB0($v0)
    ctx->pc = 0x22e4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EB0u));
    // 0x22e4f4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x22e4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_22e4f8:
    // 0x22e4f8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22e4f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22e4fc: 0xac203eb0  sw          $zero, 0x3EB0($at)
    ctx->pc = 0x22e4fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B3EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EB0u, _value); } while (0);
    // 0x22e500: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22e500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22e504: 0xac203eb4  sw          $zero, 0x3EB4($at)
    ctx->pc = 0x22e504u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B3EB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EB4u, _value); } while (0);
    // 0x22e508: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22e508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22e50c: 0xac203eb8  sw          $zero, 0x3EB8($at)
    ctx->pc = 0x22e50cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B3EB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EB8u, _value); } while (0);
    // 0x22e510: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22e510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22e514: 0xac203ebc  sw          $zero, 0x3EBC($at)
    ctx->pc = 0x22e514u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B3EBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EBCu, _value); } while (0);
label_22e518:
    // 0x22e518: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x22e518u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x22e51c: 0x8cc63ee4  lw          $a2, 0x3EE4($a2)
    ctx->pc = 0x22e51cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B3EE4u));
    // 0x22e520: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22e520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22e524: 0x8c423ee0  lw          $v0, 0x3EE0($v0)
    ctx->pc = 0x22e524u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EE0u));
    // 0x22e528: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x22e528u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x22e52c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22E52Cu;
    {
        const bool branch_taken_0x22e52c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E52Cu;
        // 0x22e530: 0x8f828e6c  lw          $v0, -0x7194($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e52c) {
            ctx->pc = 0x22E53Cu;
            goto label_22e53c;
        }
    }
    ctx->pc = 0x22E534u;
    // 0x22e534: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x22E534u;
    {
        const bool branch_taken_0x22e534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E534u;
        // 0x22e538: 0xacd00000  sw          $s0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e534) {
            ctx->pc = 0x22E5BCu;
            goto label_22e5bc;
        }
    }
    ctx->pc = 0x22E53Cu;
label_22e53c:
    // 0x22e53c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x22e53cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x22e540: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x22e540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
    // 0x22e544: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x22e544u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x22e548: 0x8c843ed8  lw          $a0, 0x3ED8($a0)
    ctx->pc = 0x22e548u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B3ED8u));
    // 0x22e54c: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x22e54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x22e550: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x22e550u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x22e554: 0x24a20080  addiu       $v0, $a1, 0x80
    ctx->pc = 0x22e554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x22e558: 0x82202b  sltu        $a0, $a0, $v0
    ctx->pc = 0x22e558u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x22e55c: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x22E55Cu;
    {
        const bool branch_taken_0x22e55c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e55c) {
            ctx->pc = 0x22E560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E55Cu;
            // 0x22e560: 0xaf828e6c  sw          $v0, -0x7194($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294938220), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E590u;
            goto label_22e590;
        }
    }
    ctx->pc = 0x22E564u;
    // 0x22e564: 0xacd00000  sw          $s0, 0x0($a2)
    ctx->pc = 0x22e564u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 16));
    // 0x22e568: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22e568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22e56c: 0x8c633ee4  lw          $v1, 0x3EE4($v1)
    ctx->pc = 0x22e56cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3EE4u));
    // 0x22e570: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x22e570u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    // 0x22e574: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22e574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22e578: 0x8c423ee4  lw          $v0, 0x3EE4($v0)
    ctx->pc = 0x22e578u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EE4u));
    // 0x22e57c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x22e57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x22e580: 0xc08b848  jal         func_22E120
    ctx->pc = 0x22E580u;
    SET_GPR_U32(ctx, 31, 0x22E588u);
    ctx->pc = 0x22E584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E580u;
    // 0x22e584: 0xaf828e74  sw          $v0, -0x718C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938228), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E120u, 0x22E580u, 0x22E588u)) {
        return;
    }
    ctx->pc = 0x22E588u;
label_22e588:
    // 0x22e588: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x22E588u;
    {
        const bool branch_taken_0x22e588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E588u;
        // 0x22e58c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e588) {
            ctx->pc = 0x22E5E0u;
            goto label_22e5e0;
        }
    }
    ctx->pc = 0x22E590u;
label_22e590:
    // 0x22e590: 0x24a30078  addiu       $v1, $a1, 0x78
    ctx->pc = 0x22e590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 120));
    // 0x22e594: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22e594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22e598: 0xac233ee0  sw          $v1, 0x3EE0($at)
    ctx->pc = 0x22e598u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3EE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EE0u, _value); } while (0);
    // 0x22e59c: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x22e59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x22e5a0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x22e5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x22e5a4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22e5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22e5a8: 0x8c633ee4  lw          $v1, 0x3EE4($v1)
    ctx->pc = 0x22e5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3EE4u));
    // 0x22e5ac: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x22e5acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x22e5b0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22e5b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22e5b4: 0xac253ee4  sw          $a1, 0x3EE4($at)
    ctx->pc = 0x22e5b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B3EE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EE4u, _value); } while (0);
    // 0x22e5b8: 0xacb00000  sw          $s0, 0x0($a1)
    ctx->pc = 0x22e5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
label_22e5bc:
    // 0x22e5bc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22e5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22e5c0: 0x8c633ee4  lw          $v1, 0x3EE4($v1)
    ctx->pc = 0x22e5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3EE4u));
    // 0x22e5c4: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x22e5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    // 0x22e5c8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22e5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22e5cc: 0x8c423ee4  lw          $v0, 0x3EE4($v0)
    ctx->pc = 0x22e5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EE4u));
    // 0x22e5d0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x22e5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x22e5d4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22e5d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22e5d8: 0xac223ee4  sw          $v0, 0x3EE4($at)
    ctx->pc = 0x22e5d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3EE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EE4u, _value); } while (0);
    // 0x22e5dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x22e5dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22e5e0:
    // 0x22e5e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22e5e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e5e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22e5e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e5e8: 0x3e00008  jr          $ra
    ctx->pc = 0x22E5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E5E8u;
        // 0x22e5ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E5E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E5F0u;
    // 0x22e5f0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x22e5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22e5f4: 0x0  nop
    ctx->pc = 0x22e5f4u;
    // NOP
    ctx->pc = 0x22e5f8u;
}
