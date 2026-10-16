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

// Function: sub_002A4AF0
// Address: 0x2a4af0 - 0x2a4db8
void sub_002A4AF0_0x2a4af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4AF0_0x2a4af0");
#endif

    switch (ctx->pc) {
        case 0x2a4b38u: goto label_2a4b38;
        case 0x2a4b94u: goto label_2a4b94;
        case 0x2a4c08u: goto label_2a4c08;
        case 0x2a4c50u: goto label_2a4c50;
        case 0x2a4c78u: goto label_2a4c78;
        case 0x2a4ca8u: goto label_2a4ca8;
        case 0x2a4d68u: goto label_2a4d68;
        default: break;
    }

    ctx->pc = 0x2a4af0u;

    // 0x2a4af0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x2a4af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x2a4af4: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2a4af4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4af8: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x2a4af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
    // 0x2a4afc: 0x30c20007  andi        $v0, $a2, 0x7
    ctx->pc = 0x2a4afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x2a4b00: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x2a4b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
    // 0x2a4b04: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2a4b04u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4b08: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x2a4b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x2a4b0c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2a4b0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4b10: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x2a4b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x2a4b14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a4b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4b18: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x2a4b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
    // 0x2a4b1c: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x2a4b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
    // 0x2a4b20: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x2a4b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
    // 0x2a4b24: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x2a4b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
    // 0x2a4b28: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2A4B28u;
    {
        const bool branch_taken_0x2a4b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4B28u;
        // 0x2a4b2c: 0x7fbe00c0  sq          $fp, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4b28) {
            ctx->pc = 0x2A4B8Cu;
            goto label_2a4b8c;
        }
    }
    ctx->pc = 0x2A4B30u;
    // 0x2a4b30: 0x24c20080  addiu       $v0, $a2, 0x80
    ctx->pc = 0x2a4b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x2a4b34: 0x27b10090  addiu       $s1, $sp, 0x90
    ctx->pc = 0x2a4b34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2a4b38:
    // 0x2a4b38: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x2a4b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2a4b3c: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x2a4b3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2a4b40: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x2a4b40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2a4b44: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x2a4b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2a4b48: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x2a4b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2a4b4c: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x2a4b4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2a4b50: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x2a4b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2a4b54: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x2a4b54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2a4b58: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x2a4b58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a4b5c: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x2a4b5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a4b60: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x2a4b60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a4b64: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x2a4b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a4b68: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x2a4b68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a4b6c: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x2a4b6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a4b70: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x2a4b70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a4b74: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x2a4b74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a4b78: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2a4b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2a4b7c: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2A4B7Cu;
    {
        const bool branch_taken_0x2a4b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A4B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4B7Cu;
        // 0x2a4b80: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4b7c) {
            ctx->pc = 0x2A4B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a4b38;
        }
    }
    ctx->pc = 0x2A4B84u;
    // 0x2a4b84: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2A4B84u;
    {
        const bool branch_taken_0x2a4b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4b84) {
            ctx->pc = 0x2A4BC0u;
            goto label_2a4bc0;
        }
    }
    ctx->pc = 0x2A4B8Cu;
label_2a4b8c:
    // 0x2a4b8c: 0x24c20080  addiu       $v0, $a2, 0x80
    ctx->pc = 0x2a4b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x2a4b90: 0x27b10090  addiu       $s1, $sp, 0x90
    ctx->pc = 0x2a4b90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2a4b94:
    // 0x2a4b94: 0xdc6c0000  ld          $t4, 0x0($v1)
    ctx->pc = 0x2a4b94u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a4b98: 0xdc6f0008  ld          $t7, 0x8($v1)
    ctx->pc = 0x2a4b98u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2a4b9c: 0xdc760010  ld          $s6, 0x10($v1)
    ctx->pc = 0x2a4b9cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a4ba0: 0xdc7e0018  ld          $fp, 0x18($v1)
    ctx->pc = 0x2a4ba0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2a4ba4: 0xfc8c0000  sd          $t4, 0x0($a0)
    ctx->pc = 0x2a4ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 12));
    // 0x2a4ba8: 0xfc8f0008  sd          $t7, 0x8($a0)
    ctx->pc = 0x2a4ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 15));
    // 0x2a4bac: 0xfc960010  sd          $s6, 0x10($a0)
    ctx->pc = 0x2a4bacu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 22));
    // 0x2a4bb0: 0xfc9e0018  sd          $fp, 0x18($a0)
    ctx->pc = 0x2a4bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 30));
    // 0x2a4bb4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2a4bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2a4bb8: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2A4BB8u;
    {
        const bool branch_taken_0x2a4bb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A4BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4BB8u;
        // 0x2a4bbc: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4bb8) {
            ctx->pc = 0x2A4B94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a4b94;
        }
    }
    ctx->pc = 0x2A4BC0u;
label_2a4bc0:
    // 0x2a4bc0: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x2a4bc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a4bc4: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x2a4bc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a4bc8: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x2a4bc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a4bcc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2a4bccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4bd0: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x2a4bd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a4bd4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2a4bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2a4bd8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2a4bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x2a4bdc: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x2a4bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x2a4be0: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x2a4be0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x2a4be4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2a4be4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4be8: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x2a4be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x2a4bec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a4becu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4bf0: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x2A4BF0u;
    {
        const bool branch_taken_0x2a4bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4BF0u;
        // 0x2a4bf4: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4bf0) {
            ctx->pc = 0x2A4D50u;
            goto label_2a4d50;
        }
    }
    ctx->pc = 0x2A4BF8u;
    // 0x2a4bf8: 0xafb100a0  sw          $s1, 0xA0($sp)
    ctx->pc = 0x2a4bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 17));
    // 0x2a4bfc: 0xafb100b0  sw          $s1, 0xB0($sp)
    ctx->pc = 0x2a4bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 17));
    // 0x2a4c00: 0x26760001  addiu       $s6, $s3, 0x1
    ctx->pc = 0x2a4c00u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2a4c04: 0x0  nop
    ctx->pc = 0x2a4c04u;
    // NOP
label_2a4c08:
    // 0x2a4c08: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2a4c08u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4c0c: 0x1142004a  beq         $t2, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x2A4C0Cu;
    {
        const bool branch_taken_0x2a4c0c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A4C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4C0Cu;
        // 0x2a4c10: 0xafb600b4  sw          $s6, 0xB4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4c0c) {
            ctx->pc = 0x2A4D38u;
            goto label_2a4d38;
        }
    }
    ctx->pc = 0x2A4C14u;
    // 0x2a4c14: 0x8cc80004  lw          $t0, 0x4($a2)
    ctx->pc = 0x2a4c14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2a4c18: 0xa3880  sll         $a3, $t2, 2
    ctx->pc = 0x2a4c18u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x2a4c1c: 0x8fbe00a0  lw          $fp, 0xA0($sp)
    ctx->pc = 0x2a4c1cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a4c20: 0x134880  sll         $t1, $s3, 2
    ctx->pc = 0x2a4c20u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2a4c24: 0xe82821  addu        $a1, $a3, $t0
    ctx->pc = 0x2a4c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2a4c28: 0x3c92021  addu        $a0, $fp, $t1
    ctx->pc = 0x2a4c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 9)));
    // 0x2a4c2c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a4c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a4c30: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2a4c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a4c34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a4c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a4c38: 0x2c420029  sltiu       $v0, $v0, 0x29
    ctx->pc = 0x2a4c38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)41) ? 1 : 0);
    // 0x2a4c3c: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2A4C3Cu;
    {
        const bool branch_taken_0x2a4c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4C3Cu;
        // 0x2a4c40: 0xe0682d  daddu       $t5, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4c3c) {
            ctx->pc = 0x2A4D38u;
            goto label_2a4d38;
        }
    }
    ctx->pc = 0x2A4C44u;
    // 0x2a4c44: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2a4c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a4c48: 0x8cd5007c  lw          $s5, 0x7C($a2)
    ctx->pc = 0x2a4c48u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x2a4c4c: 0x498021  addu        $s0, $v0, $t1
    ctx->pc = 0x2a4c4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_2a4c50:
    // 0x2a4c50: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x2a4c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2a4c54: 0x25520001  addiu       $s2, $t2, 0x1
    ctx->pc = 0x2a4c54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2a4c58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a4c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a4c5c: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x2A4C5Cu;
    {
        const bool branch_taken_0x2a4c5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4C5Cu;
        // 0x2a4c60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4c5c) {
            ctx->pc = 0x2A4CF8u;
            goto label_2a4cf8;
        }
    }
    ctx->pc = 0x2A4C64u;
    // 0x2a4c64: 0x240e0060  addiu       $t6, $zero, 0x60
    ctx->pc = 0x2a4c64u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2a4c68: 0x135b00  sll         $t3, $s3, 12
    ctx->pc = 0x2a4c68u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 19), 12));
    // 0x2a4c6c: 0x26990f00  addiu       $t9, $s4, 0xF00
    ctx->pc = 0x2a4c6cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 20), 3840));
    // 0x2a4c70: 0x1a0c02d  daddu       $t8, $t5, $zero
    ctx->pc = 0x2a4c70u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4c74: 0x0  nop
    ctx->pc = 0x2a4c74u;
    // NOP
label_2a4c78:
    // 0x2a4c78: 0x18e1018  mult        $v0, $t4, $t6
    ctx->pc = 0x2a4c78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a4c7c: 0x1ee1818  mult        $v1, $t7, $t6
    ctx->pc = 0x2a4c7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a4c80: 0x24e90001  addiu       $t1, $a3, 0x1
    ctx->pc = 0x2a4c80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2a4c84: 0x25e80001  addiu       $t0, $t7, 0x1
    ctx->pc = 0x2a4c84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x2a4c88: 0x258a0001  addiu       $t2, $t4, 0x1
    ctx->pc = 0x2a4c88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x2a4c8c: 0xc2880  sll         $a1, $t4, 2
    ctx->pc = 0x2a4c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x2a4c90: 0xf3880  sll         $a3, $t7, 2
    ctx->pc = 0x2a4c90u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x2a4c94: 0x4b2021  addu        $a0, $v0, $t3
    ctx->pc = 0x2a4c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2a4c98: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2a4c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a4c9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a4c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a4ca0: 0x2841021  addu        $v0, $s4, $a0
    ctx->pc = 0x2a4ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2a4ca4: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x2a4ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_2a4ca8:
    // 0x2a4ca8: 0x786c0000  lq          $t4, 0x0($v1)
    ctx->pc = 0x2a4ca8u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a4cac: 0x786f0010  lq          $t7, 0x10($v1)
    ctx->pc = 0x2a4cacu;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a4cb0: 0x7c4c0000  sq          $t4, 0x0($v0)
    ctx->pc = 0x2a4cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 12));
    // 0x2a4cb4: 0x7c4f0010  sq          $t7, 0x10($v0)
    ctx->pc = 0x2a4cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 15));
    // 0x2a4cb8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2a4cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2a4cbc: 0x1464fffa  bne         $v1, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A4CBCu;
    {
        const bool branch_taken_0x2a4cbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2A4CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4CBCu;
        // 0x2a4cc0: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4cbc) {
            ctx->pc = 0x2A4CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a4ca8;
        }
    }
    ctx->pc = 0x2A4CC4u;
    // 0x2a4cc4: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x2a4cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2a4cc8: 0xab2021  addu        $a0, $a1, $t3
    ctx->pc = 0x2a4cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x2a4ccc: 0x3242021  addu        $a0, $t9, $a0
    ctx->pc = 0x2a4cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 4)));
    // 0x2a4cd0: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x2a4cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2a4cd4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2a4cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2a4cd8: 0x100782d  daddu       $t7, $t0, $zero
    ctx->pc = 0x2a4cd8u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4cdc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a4cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a4ce0: 0x3031821  addu        $v1, $t8, $v1
    ctx->pc = 0x2a4ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 3)));
    // 0x2a4ce4: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x2a4ce4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4ce8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2a4ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2a4cec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2a4cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a4cf0: 0x14e2ffe1  bne         $a3, $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2A4CF0u;
    {
        const bool branch_taken_0x2a4cf0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A4CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4CF0u;
        // 0x2a4cf4: 0x140602d  daddu       $t4, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4cf0) {
            ctx->pc = 0x2A4C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a4c78;
        }
    }
    ctx->pc = 0x2A4CF8u;
label_2a4cf8:
    // 0x2a4cf8: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x2a4cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2a4cfc: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x2a4cfcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4d00: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2a4d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a4d04: 0x1a51821  addu        $v1, $t5, $a1
    ctx->pc = 0x2a4d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 5)));
    // 0x2a4d08: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2a4d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a4d0c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2a4d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a4d10: 0x11550009  beq         $t2, $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A4D10u;
    {
        const bool branch_taken_0x2a4d10 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 21));
        ctx->pc = 0x2A4D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4D10u;
        // 0x2a4d14: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4d10) {
            ctx->pc = 0x2A4D38u;
            goto label_2a4d38;
        }
    }
    ctx->pc = 0x2A4D18u;
    // 0x2a4d18: 0xa3880  sll         $a3, $t2, 2
    ctx->pc = 0x2a4d18u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x2a4d1c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2a4d1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4d20: 0xe81821  addu        $v1, $a3, $t0
    ctx->pc = 0x2a4d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2a4d24: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2a4d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a4d28: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2a4d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a4d2c: 0x2c420029  sltiu       $v0, $v0, 0x29
    ctx->pc = 0x2a4d2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)41) ? 1 : 0);
    // 0x2a4d30: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x2A4D30u;
    {
        const bool branch_taken_0x2a4d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A4D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4D30u;
        // 0x2a4d34: 0xe0682d  daddu       $t5, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4d30) {
            ctx->pc = 0x2A4C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a4c50;
        }
    }
    ctx->pc = 0x2A4D38u;
label_2a4d38:
    // 0x2a4d38: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x2a4d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x2a4d3c: 0x11420004  beq         $t2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A4D3Cu;
    {
        const bool branch_taken_0x2a4d3c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A4D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4D3Cu;
        // 0x2a4d40: 0x8fb300b4  lw          $s3, 0xB4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4d3c) {
            ctx->pc = 0x2A4D50u;
            goto label_2a4d50;
        }
    }
    ctx->pc = 0x2A4D44u;
    // 0x2a4d44: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2a4d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a4d48: 0x1663ffaf  bne         $s3, $v1, . + 4 + (-0x51 << 2)
    ctx->pc = 0x2A4D48u;
    {
        const bool branch_taken_0x2a4d48 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A4D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4D48u;
        // 0x2a4d4c: 0x26760001  addiu       $s6, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4d48) {
            ctx->pc = 0x2A4C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a4c08;
        }
    }
    ctx->pc = 0x2A4D50u;
label_2a4d50:
    // 0x2a4d50: 0xaef30010  sw          $s3, 0x10($s7)
    ctx->pc = 0x2a4d50u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 19));
    // 0x2a4d54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a4d54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4d58: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x2A4D58u;
    {
        const bool branch_taken_0x2a4d58 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4D58u;
        // 0x2a4d5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4d58) {
            ctx->pc = 0x2A4D88u;
            goto label_2a4d88;
        }
    }
    ctx->pc = 0x2A4D60u;
    // 0x2a4d60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a4d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4d64: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2a4d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2a4d68:
    // 0x2a4d68: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x2a4d68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x2a4d6c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2a4d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2a4d70: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2a4d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2a4d74: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2a4d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a4d78: 0x8ee30010  lw          $v1, 0x10($s7)
    ctx->pc = 0x2a4d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x2a4d7c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2a4d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2a4d80: 0x14e3fff9  bne         $a3, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2A4D80u;
    {
        const bool branch_taken_0x2a4d80 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A4D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4D80u;
        // 0x2a4d84: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4d80) {
            ctx->pc = 0x2A4D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a4d68;
        }
    }
    ctx->pc = 0x2A4D88u;
label_2a4d88:
    // 0x2a4d88: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x2a4d88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2a4d8c: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x2a4d8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2a4d90: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x2a4d90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2a4d94: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x2a4d94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2a4d98: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x2a4d98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2a4d9c: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x2a4d9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2a4da0: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x2a4da0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2a4da4: 0x7bb700d0  lq          $s7, 0xD0($sp)
    ctx->pc = 0x2a4da4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a4da8: 0x7bbe00c0  lq          $fp, 0xC0($sp)
    ctx->pc = 0x2a4da8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a4dac: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4DACu;
        // 0x2a4db0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4DB4u;
    // 0x2a4db4: 0x0  nop
    ctx->pc = 0x2a4db4u;
    // NOP
    ctx->pc = 0x2a4db8u;
}
