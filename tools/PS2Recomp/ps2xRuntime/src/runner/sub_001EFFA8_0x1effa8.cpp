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

// Function: sub_001EFFA8
// Address: 0x1effa8 - 0x1f0158
void sub_001EFFA8_0x1effa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EFFA8_0x1effa8");
#endif

    switch (ctx->pc) {
        case 0x1efffcu: goto label_1efffc;
        case 0x1f001cu: goto label_1f001c;
        default: break;
    }

    ctx->pc = 0x1effa8u;

    // 0x1effa8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1effa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1effac: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x1effacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x1effb0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1effb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1effb4: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1effb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1effb8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1effb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1effbc: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x1effbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x1effc0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1effc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1effc4: 0x249150c0  addiu       $s1, $a0, 0x50C0
    ctx->pc = 0x1effc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 20672));
    // 0x1effc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1effc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1effcc: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1effccu;
    SET_GPR_U64(ctx, 3, runtime->Load64(rdram, ctx, 0x12001000u));
    // 0x1effd0: 0x31b3a  dsrl        $v1, $v1, 12
    ctx->pc = 0x1effd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 12);
    // 0x1effd4: 0x30720002  andi        $s2, $v1, 0x2
    ctx->pc = 0x1effd4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1effd8: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x1EFFD8u;
    {
        const bool branch_taken_0x1effd8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFFD8u;
        // 0x1effdc: 0x3c10006b  lui         $s0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1effd8) {
            ctx->pc = 0x1F0004u;
            goto label_1f0004;
        }
    }
    ctx->pc = 0x1EFFE0u;
    // 0x1effe0: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1effe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1effe4: 0x92044130  lbu         $a0, 0x4130($s0)
    ctx->pc = 0x1effe4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16688)));
    // 0x1effe8: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x1effe8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1effec: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x1effecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1efff0: 0x24840350  addiu       $a0, $a0, 0x350
    ctx->pc = 0x1efff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 848));
    // 0x1efff4: 0xc0a52a0  jal         func_294A80
    ctx->pc = 0x1EFFF4u;
    SET_GPR_U32(ctx, 31, 0x1EFFFCu);
    ctx->pc = 0x1EFFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFFF4u;
    // 0x1efff8: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294A80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x294A80u, 0x1EFFF4u, 0x1EFFFCu)) {
        return;
    }
    ctx->pc = 0x1EFFFCu;
label_1efffc:
    // 0x1efffc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EFFFCu;
    {
        const bool branch_taken_0x1efffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFFFCu;
        // 0x1f0000: 0x92024130  lbu         $v0, 0x4130($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efffc) {
            ctx->pc = 0x1F0020u;
            goto label_1f0020;
        }
    }
    ctx->pc = 0x1F0004u;
label_1f0004:
    // 0x1f0004: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1f0004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1f0008: 0x92044130  lbu         $a0, 0x4130($s0)
    ctx->pc = 0x1f0008u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16688)));
    // 0x1f000c: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x1f000cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1f0010: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x1f0010u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f0014: 0xc0a52a0  jal         func_294A80
    ctx->pc = 0x1F0014u;
    SET_GPR_U32(ctx, 31, 0x1F001Cu);
    ctx->pc = 0x1F0018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0014u;
    // 0x1f0018: 0x712021  addu        $a0, $v1, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294A80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x294A80u, 0x1F0014u, 0x1F001Cu)) {
        return;
    }
    ctx->pc = 0x1F001Cu;
label_1f001c:
    // 0x1f001c: 0x92024130  lbu         $v0, 0x4130($s0)
    ctx->pc = 0x1f001cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16688)));
label_1f0020:
    // 0x1f0020: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F0020u;
    {
        const bool branch_taken_0x1f0020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0020) {
            ctx->pc = 0x1F0068u;
            goto label_1f0068;
        }
    }
    ctx->pc = 0x1F0028u;
    // 0x1f0028: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F0028u;
    {
        const bool branch_taken_0x1f0028 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F002Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0028u;
        // 0x1f002c: 0x3c031200  lui         $v1, 0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0028) {
            ctx->pc = 0x1F004Cu;
            goto label_1f004c;
        }
    }
    ctx->pc = 0x1F0030u;
    // 0x1f0030: 0xde2403b0  ld          $a0, 0x3B0($s1)
    ctx->pc = 0x1f0030u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 944)));
    // 0x1f0034: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x1f0034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x1f0038: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x1f0038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x1f003c: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x1f003cu;
    runtime->Store64(rdram, ctx, 0x12000070u, GPR_U64(ctx, 4));
    // 0x1f0040: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x1f0040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x1f0044: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1F0044u;
    {
        const bool branch_taken_0x1f0044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0044u;
        // 0x1f0048: 0xde2203b8  ld          $v0, 0x3B8($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 952)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0044) {
            ctx->pc = 0x1F00A4u;
            goto label_1f00a4;
        }
    }
    ctx->pc = 0x1F004Cu;
label_1f004c:
    // 0x1f004c: 0xde240340  ld          $a0, 0x340($s1)
    ctx->pc = 0x1f004cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 832)));
    // 0x1f0050: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x1f0050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x1f0054: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x1f0054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x1f0058: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x1f0058u;
    runtime->Store64(rdram, ctx, 0x12000070u, GPR_U64(ctx, 4));
    // 0x1f005c: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x1f005cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x1f0060: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1F0060u;
    {
        const bool branch_taken_0x1f0060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0060u;
        // 0x1f0064: 0xde220348  ld          $v0, 0x348($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 840)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0060) {
            ctx->pc = 0x1F00A4u;
            goto label_1f00a4;
        }
    }
    ctx->pc = 0x1F0068u;
label_1f0068:
    // 0x1f0068: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F0068u;
    {
        const bool branch_taken_0x1f0068 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0068u;
        // 0x1f006c: 0x3c021200  lui         $v0, 0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0068) {
            ctx->pc = 0x1F008Cu;
            goto label_1f008c;
        }
    }
    ctx->pc = 0x1F0070u;
    // 0x1f0070: 0xde2403a0  ld          $a0, 0x3A0($s1)
    ctx->pc = 0x1f0070u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 928)));
    // 0x1f0074: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x1f0074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x1f0078: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x1f0078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x1f007c: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x1f007cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x1f0080: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x1f0080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x1f0084: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F0084u;
    {
        const bool branch_taken_0x1f0084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0084u;
        // 0x1f0088: 0xde2203a8  ld          $v0, 0x3A8($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0084) {
            ctx->pc = 0x1F00A4u;
            goto label_1f00a4;
        }
    }
    ctx->pc = 0x1F008Cu;
label_1f008c:
    // 0x1f008c: 0xde240330  ld          $a0, 0x330($s1)
    ctx->pc = 0x1f008cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 816)));
    // 0x1f0090: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x1f0090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x1f0094: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x1f0094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x1f0098: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x1f0098u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x1f009c: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x1f009cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x1f00a0: 0xde220338  ld          $v0, 0x338($s1)
    ctx->pc = 0x1f00a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 824)));
label_1f00a4:
    // 0x1f00a4: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1f00a4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1f00a8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1f00a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1f00ac: 0x90434131  lbu         $v1, 0x4131($v0)
    ctx->pc = 0x1f00acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x6B4131u));
    // 0x1f00b0: 0x50600024  beql        $v1, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x1F00B0u;
    {
        const bool branch_taken_0x1f00b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f00b0) {
            ctx->pc = 0x1F00B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F00B0u;
            // 0x1f00b4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0144u;
            goto label_1f0144;
        }
    }
    ctx->pc = 0x1F00B8u;
    // 0x1f00b8: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F00B8u;
    {
        const bool branch_taken_0x1f00b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F00BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F00B8u;
        // 0x1f00bc: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f00b8) {
            ctx->pc = 0x1F00CCu;
            goto label_1f00cc;
        }
    }
    ctx->pc = 0x1F00C0u;
    // 0x1f00c0: 0xa0404132  sb          $zero, 0x4132($v0)
    ctx->pc = 0x1f00c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16690), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f00c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F00C4u;
    {
        const bool branch_taken_0x1f00c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F00C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F00C4u;
        // 0x1f00c8: 0x92024130  lbu         $v0, 0x4130($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f00c4) {
            ctx->pc = 0x1F00DCu;
            goto label_1f00dc;
        }
    }
    ctx->pc = 0x1F00CCu;
label_1f00cc:
    // 0x1f00cc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1f00ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x1f00d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f00d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f00d4: 0xa0624132  sb          $v0, 0x4132($v1)
    ctx->pc = 0x1f00d4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4132u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6B4132u, _value); } while (0);
    // 0x1f00d8: 0x92024130  lbu         $v0, 0x4130($s0)
    ctx->pc = 0x1f00d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16688)));
label_1f00dc:
    // 0x1f00dc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F00DCu;
    {
        const bool branch_taken_0x1f00dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F00E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F00DCu;
        // 0x1f00e0: 0x3a430002  xori        $v1, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f00dc) {
            ctx->pc = 0x1F0114u;
            goto label_1f0114;
        }
    }
    ctx->pc = 0x1F00E4u;
    // 0x1f00e4: 0x8e2501f4  lw          $a1, 0x1F4($s1)
    ctx->pc = 0x1f00e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 500)));
    // 0x1f00e8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f00e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1f00ec: 0x8e240274  lw          $a0, 0x274($s1)
    ctx->pc = 0x1f00ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
    // 0x1f00f0: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x1f00f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
    // 0x1f00f4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1f00f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1f00f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f00f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f00fc: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1f00fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1f0100: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1f0100u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1f0104: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1f0104u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1f0108: 0xae240274  sw          $a0, 0x274($s1)
    ctx->pc = 0x1f0108u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 628), GPR_U32(ctx, 4));
    // 0x1f010c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F010Cu;
    {
        const bool branch_taken_0x1f010c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F010Cu;
        // 0x1f0110: 0xae2501f4  sw          $a1, 0x1F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 500), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f010c) {
            ctx->pc = 0x1F0140u;
            goto label_1f0140;
        }
    }
    ctx->pc = 0x1F0114u;
label_1f0114:
    // 0x1f0114: 0x8e250084  lw          $a1, 0x84($s1)
    ctx->pc = 0x1f0114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x1f0118: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f0118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1f011c: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x1f011cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x1f0120: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x1f0120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
    // 0x1f0124: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1f0124u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1f0128: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f0128u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f012c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1f012cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1f0130: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1f0130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1f0134: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1f0134u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1f0138: 0xae240104  sw          $a0, 0x104($s1)
    ctx->pc = 0x1f0138u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 4));
    // 0x1f013c: 0xae250084  sw          $a1, 0x84($s1)
    ctx->pc = 0x1f013cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 5));
label_1f0140:
    // 0x1f0140: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f0140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f0144:
    // 0x1f0144: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f0144u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0148: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1f0148u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f014c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f014cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0150: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0150u;
        // 0x1f0154: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0158u;
}
